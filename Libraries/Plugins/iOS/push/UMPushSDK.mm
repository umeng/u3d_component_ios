//
//  UMSocialCSDK.cpp
//  UmengGame
//
//  Created by yeahugo on 14-6-26.
//
//


#import <UIKit/UIKit.h>
#include "UMPushSDK.h"
#import <UMPush/UMessage.h>
#import "UnityAppController.h"

#include "Unity/DisplayManager.h"




static NSString* getNSStringFromCStr(const char* cstr){
    if (cstr) {
        return [NSString stringWithUTF8String:cstr];
    }
    return nil;
}


static UIViewController* getCurrentViewController(){
    
    UIViewController* ctrol = nil;
//     UnityAppController *uni=[[UnityAppController alloc]init];
//    ctrol = uni.window.rootViewController;
    if ( [[UIDevice currentDevice].systemVersion floatValue] < 6.0)
    {
        // warning: addSubView doesn't work on iOS6
        NSArray* array=[[UIApplication sharedApplication]windows];
        UIWindow* win=[array objectAtIndex:0];
        
        UIView* ui=[[win subviews] objectAtIndex:0];
        ctrol=(UIViewController*)[ui nextResponder];
    }
    else
    {
        
        // use this method on ios6
        ctrol=[UIApplication sharedApplication].keyWindow.rootViewController;
    }
    return ctrol;
}





void AddTag_iOS(const char*  tag, RemainDelegate callback){
    	
      [UMessage addTags:getNSStringFromCStr(tag) response:^(id  _Nonnull responseObject, NSInteger remain, NSError * _Nonnull error) {
        int code = -1;
        int remainnum = 0;
        if (error) {
            code = error.code;
        }else{
            if ([responseObject isKindOfClass:[NSDictionary class]]) {
                NSDictionary *respobj = responseObject;
                // 授权信息
                if ([[respobj allKeys] containsObject:@"success"]) {
                    if ([[respobj objectForKey:@"success"] isEqualToString:@"ok"]) {
                        code = 200 ;
                    }
                }
                if ([[respobj allKeys] containsObject:@"remain"]) {
                    remainnum = [[respobj objectForKey:@"remain"] intValue];
                }
            }
        }
        callback(code, remainnum);

    }];

}

void DelTag_iOS(const char*  tag, RemainDelegate callback){
    [UMessage deleteTags:getNSStringFromCStr(tag) response:^(id  _Nonnull responseObject, NSInteger remain, NSError * _Nonnull error) {
        int code = -1;
        int remainnum = 0;
        if (error) {
            code = error.code;
        }else{
            if ([responseObject isKindOfClass:[NSDictionary class]]) {
                NSDictionary *respobj = responseObject;
                // 授权信息
                if ([[respobj allKeys] containsObject:@"success"]) {
                    if ([[respobj objectForKey:@"success"] isEqualToString:@"ok"]) {
                        code = 200 ;
                    }
                }
                if ([[respobj allKeys] containsObject:@"remain"]) {
                    remainnum = [[respobj objectForKey:@"remain"] intValue];
                }
            }
        }
        callback(code, remainnum);
    }];
}

void GetTag_iOS(TagHandler callback){
    
   [UMessage getTags:^(NSSet * _Nonnull responseTags, NSInteger remain, NSError * _Nonnull error) {
        int code = -1;
       
        int remainnum = 0;
       
       NSString* r =@"";
        if (error) {
            code = error.code;
        }else{
            if ([responseTags isKindOfClass:[NSSet class]]) {
                NSArray * tagsarray = [responseTags allObjects];
                for (int i = 0; i < tagsarray.count; i++) {
                    NSString *str = tagsarray[i];
                 
                    if (i == tagsarray.count-1)
                    {
                        r = [r stringByAppendingString:str];
                       
                    }else{
                          r = [r stringByAppendingString:str];
                          r = [r stringByAppendingString:@","];
                        
                    }
                   
                }
            }
        }
        if (remain) {
            remainnum = remain ;
        }
        callback([r UTF8String]);
    }];
}

void AddAlias(const char*  alias, const char*  type,  AliasDelegate callback){
    
    [UMessage addAlias:getNSStringFromCStr(alias) type:getNSStringFromCStr(type) response:^(id  _Nonnull responseObject, NSError * _Nonnull error) {
        int code = -1;
        int remainnum = 0;
        if (error) {
            code = error.code;
        }else{
            if ([responseObject isKindOfClass:[NSDictionary class]]) {
                NSDictionary *respobj = responseObject;
                // 授权信息
                if ([[respobj allKeys] containsObject:@"success"]) {
                    if ([[respobj objectForKey:@"success"] isEqualToString:@"ok"]) {
                        code = 200 ;
                    }
                }
            }
        }
        callback(code);
    }];

}
void SetAlias_iOS(const char*  alias, const char*  type,  AliasDelegate callback)
{
    
    [UMessage setAlias:getNSStringFromCStr(alias) type:getNSStringFromCStr(type) response:^(id  _Nonnull responseObject, NSError * _Nonnull error) {
        int code = -1;
        if (error) {
            code = error.code;
        }else{
            if ([responseObject isKindOfClass:[NSDictionary class]]) {
                NSDictionary *respobj = responseObject;
                // 授权信息
                if ([[respobj allKeys] containsObject:@"success"]) {
                    if ([[respobj objectForKey:@"success"] isEqualToString:@"ok"]) {
                        code = 200 ;
                    }
                }
            }
        }
        callback(code);
    }];
}






void DelAlias_iOS(const char*  alias, const char*  type,  AliasDelegate callback){
    
     [UMessage removeAlias:getNSStringFromCStr(alias) type:getNSStringFromCStr(type) response:^(id  _Nonnull responseObject, NSError * _Nonnull error) {
        int code = -1;
        if (error) {
            code = error.code;
        }else{
            if ([responseObject isKindOfClass:[NSDictionary class]]) {
                NSDictionary *respobj = responseObject;
                // 授权信息
                if ([[respobj allKeys] containsObject:@"success"]) {
                    if ([[respobj objectForKey:@"success"] isEqualToString:@"ok"]) {
                        code = 200 ;
                    }
                }
            }
        }
        callback(code);
    }];

    
}

