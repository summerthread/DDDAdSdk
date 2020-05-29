//
//  DDDNativeExpressRewardedVideoAd.h
//  DDDDemo
//
//  Created by lishimin on 2020/2/9.
//  Copyright © 2020 summer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class DDDNativeExpressRewardedVideoAd;


@protocol DDDNativeExpressRewardedVideoAdDelegate <NSObject>

@optional
/**
 视频广告素材加载成功回调
 */
- (void)nativeExpressRewardedVideoAdDidLoad:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告加载失败回调
 @param errorCode : 错误码
 */
- (void)nativeExpressRewardedVideoAd:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd didFailWithError:(NSInteger)errorCode;

/**
 视频广告缓存成功回调
 */
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告呈现前台成功时回调
 */
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告呈现前台失败时回调
 @param errorCode : 错误码
 */
- (void)nativeExpressRewardedVideoAdViewRenderFail:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd error:(NSInteger)errorCode;

/**
 视频广告将要显示时调用
 */
- (void)nativeExpressRewardedVideoAdWillVisible:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告显示时调用
 */
- (void)nativeExpressRewardedVideoAdDidVisible:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告将要关闭时回调
 */
- (void)nativeExpressRewardedVideoAdWillClose:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告关闭时回调
 */
- (void)nativeExpressRewardedVideoAdDidClose:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 点击视频广告时回调
 */
- (void)nativeExpressRewardedVideoAdDidClick:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 点击跳过按钮时的回调
 */
- (void)nativeExpressRewardedVideoAdDidClickSkip:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告播放完成或发生错误时回调
 @param errorCode : 错误码
 */
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd didFailWithError:(NSInteger)errorCode;

/**
 异步请求验证服务器成功回调
 @param verify :当返回值为2000时返回YES
 */
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd verify:(BOOL)verify;

/**
 异步请求验证服务器失败回调
 */
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

@end
@interface DDDNativeExpressRewardedVideoAd : NSObject


@property (nonatomic, weak, nullable) id<DDDNativeExpressRewardedVideoAdDelegate> delegate;

/**
 验证视频材料是否有效--当数据不为空且未显示时设置为YES
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

/**
 显示根控制器
 */
- (BOOL)showAdFromRootViewController:(UIViewController *)rootViewController;

- (void)loadAdData;

- (void)configSetRewardSlotIdWithUserId:(NSString *)userId andActionSuccess:(void (^)(void))success failure:(void (^)(NSInteger errorCode))failure;
@end

NS_ASSUME_NONNULL_END
