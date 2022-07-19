//
//  YoUDataManager+Network.h
//  YoSDKUDataKit
//
//  Created by Yostar on 2021/12/20.
//

#import <YoSDKUDataKit/YoSDKUDataKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoUDataManager (Network)
/**
 初始化
 @param pid 不可空
 @param channelId 不可空
 @param sandbox yes debug no release 不可空
 */
//String pid, String channelId, boolean sandbox)
- (void)init:(NSString * _Nonnull)pid
   channelId:(NSString * _Nonnull)channelId
     sandbox:(BOOL)sandbox;

/**
 上报
 @param event 对应事件名 不可空
 @param eventProperty 事件属性 字典序列化后的字符串 可空
 */
- (void)trackEvent:(NSString * _Nullable)event
     eventProperty:(NSString * _Nullable)eventProperty;
/**
 上报用户数据 提供给cp使用
 @param userID 用户id 不可为空
 */
- (void)uploadUserInfo:(NSString * _Nonnull)userID;
@end

NS_ASSUME_NONNULL_END
