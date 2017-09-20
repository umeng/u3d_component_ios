//
//  UMSocialCSDK.h
//  UmengGame
//
//  Created by yeahugo on 14-6-26.
//
//

#ifndef __UmengGame__UMPushSDK__
#define __UmengGame__UMPushSDK__


extern "C"
{
    
typedef void (*AliasDelegate)( int stCode);
typedef void (*RemainDelegate)(int stCode,int remain);
typedef void (*TagHandler)(const char*  result);




//授权某社交平台
void AddTag_iOS(const char*  tag, RemainDelegate callback);

//解除某平台授权
void DelTag_iOS(const char*  tag, RemainDelegate callback);

//是否已经授权某平台
void GetTag_iOS(TagHandler callback);

//打开分享面板
void AddAlias_iOS(const char*  alias, const char*  type,  AliasDelegate callback);
//设置取消监听
void SetAlias_iOS(const char*  alias, const char*  type,  AliasDelegate callback);
//直接分享到各个社交平台
void DelAlias_iOS(const char*  alias, const char*  type,  AliasDelegate callback);



    




    
}
#endif /* defined(__UmengGame__UMSocialCSDK__) */
