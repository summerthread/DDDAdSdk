//
//  DDDAdZYRewardVideoAd.h
//  DDDAdZYSdk
//
//  Created by mu on 2020/9/3.
//  Copyright © 2020 summer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class DDDAdZYRewardVideoAd;
@protocol DDDAdZYRewardVideoAdDelegate <NSObject>

@optional
/**
 视频广告素材加载成功回调
 */
- (void)nativeExpressRewardedVideoAdDidLoad:(DDDAdZYRewardVideoAd *)rewardedVideoAd;

/**
 视频广告缓存成功回调
 */
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(DDDAdZYRewardVideoAd *)rewardedVideoAd;



/**
 视频广告将要显示时调用
 */
- (void)nativeExpressRewardedVideoAdWillVisible:(DDDAdZYRewardVideoAd *)rewardedVideoAd;

/**
 视频广告显示时调用
 */
- (void)nativeExpressRewardedVideoAdDidVisible:(DDDAdZYRewardVideoAd *)rewardedVideoAd;


/**
 视频广告关闭时回调
 */
- (void)nativeExpressRewardedVideoAdDidClose:(DDDAdZYRewardVideoAd *)rewardedVideoAd;

/**
 点击视频广告时回调
 */
- (void)nativeExpressRewardedVideoAdDidClick:(DDDAdZYRewardVideoAd *)rewardedVideoAd;


/**
 视频播放出现错误
 @param errorCode : 错误码
 */
- (void)nativeExpressRewardedVideoAdDidPlayDidFailWithError:(NSInteger)errorCode;

//视频播放结束
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(DDDAdZYRewardVideoAd *)rewardedVideoAd;


@end


@interface DDDAdZYRewardVideoAd : NSObject

@property (nonatomic, weak, nullable) id<DDDAdZYRewardVideoAdDelegate> delegate;

@property (nonatomic, assign, readonly) BOOL adValid;

/// 构造方法
/// @param adId 广告id
/// @param userId 用户id
- (instancetype)initWithRewardVideoAdId:(NSString *)adId andUserId:(NSString *)userId;

/// 加载广告
- (void)loadAd;

/// 展示广告方法
/// @param rootViewController 用于 present 激励视频 VC
- (BOOL)showAdFromRootViewController:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END
