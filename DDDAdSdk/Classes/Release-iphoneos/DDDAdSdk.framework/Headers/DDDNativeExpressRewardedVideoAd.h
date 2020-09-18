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
 视频广告缓存成功回调
 */
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;

/**
 视频广告呈现前台成功时回调
 */
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(DDDNativeExpressRewardedVideoAd *)rewardedVideoAd;


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
错误
 @param errorCode : 错误码
 */
- (void)nativeExpressRewardedVideoAdDidPlayDidFailWithError:(NSInteger)errorCode;


@end
@interface DDDNativeExpressRewardedVideoAd : NSObject


@property (nonatomic, weak, nullable) id<DDDNativeExpressRewardedVideoAdDelegate> delegate;

/**
 验证视频材料是否有效--当数据不为空且未显示时设置为YES
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;


/// 初始化
/// @param userId 接入方用户id
- (instancetype)initWithUserId:(NSString *)userId;

/**
 显示根控制器
 */
- (BOOL)showAdFromRootViewController:(UIViewController *)rootViewController;

- (void)loadAdData;

//- (void)configSetRewardSlotIdWithUserId:(NSString *)userId andActionSuccess:(void (^)(void))success failure:(void (^)(NSInteger errorCode))failure;
@end

NS_ASSUME_NONNULL_END
