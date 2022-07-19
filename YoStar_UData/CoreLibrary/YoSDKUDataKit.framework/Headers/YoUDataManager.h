//
//  YoUDataManager.h
//  YoSDKUDataKit
//
//  Created by Yostar on 2021/12/16.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^YoUDataInitFailed)(NSInteger code, NSString * _Nullable msg);
typedef void(^YoUDataInitSuccess)(void);
static NSString * const YoUDataSDKVersion = @"0.0.1";
UIKIT_EXTERN NSString * const NotNeedRequestedDeviceIDKey;
@interface YoUDataManager : NSObject
@property (nonatomic, copy) NSString *uDataBaseURL;
@property (nonatomic, copy) NSString *PID;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, assign) BOOL sandbox;
/**
 是否还可以继续上传事件
 */
@property (nonatomic, assign) BOOL canTrack;
@property (nonatomic, strong) YoUDataInitFailed failedCallback;
@property (nonatomic, strong) YoUDataInitSuccess successCallback;
+ (instancetype)shareManager;

- (NSDictionary *)readPropertyData;
///获取数美的device_id
- (NSString *)smDeviceID;

- (void)initSuccess:(YoUDataInitSuccess)callback;
- (void)initFail:(YoUDataInitFailed)callback;

/**
 * @brief wrapper for requestTrackingAuthorizationWithCompletionHandler: method.
 *
 * @param completion Block which value of tracking authorization status will be delivered to.
 */
- (void)requestTrackingAuthorizationWithCompletionHandler:(void (^_Nullable)(NSUInteger status))completion;

@end

NS_ASSUME_NONNULL_END
