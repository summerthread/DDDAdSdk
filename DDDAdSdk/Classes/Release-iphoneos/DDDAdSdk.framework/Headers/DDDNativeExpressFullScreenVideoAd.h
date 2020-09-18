//
//  DDDNativeExpressFullScreenVideoAd.h
//  DDDAdSdk
//
//  Created by mu on 2020/7/27.
//  Copyright © 2020 summer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DDDAdConfigManager.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DDDNativeExpressFullScreenVideoAdDelegate <NSObject>
@optional


/// 当视频广告素材成功加载时的回调
- (void)nativeExpressFullscreenVideoAdDidLoad;

/// 当加载视频广告材料失败时回调。
/// @param errorCode 错误码
- (void)nativeExpressFullscreenVideoAdDidFailWithError:(NSInteger)errorCode;


/// 呈现广告成功时的回调
- (void)nativeExpressFullscreenVideoAdViewRenderSuccess;


/// 广告无法呈现时的回调
/// @param errorCode 错误码
- (void)nativeExpressFullscreenVideoAdViewRenderFailError:(NSInteger)errorCode;


/// 广告缓存成功时的回调
- (void)nativeExpressFullscreenVideoAdDidDownLoadVideo;


/// 广告即将显示时回调
- (void)nativeExpressFullscreenVideoAdWillVisible;

/// 广告已经显示的回调
- (void)nativeExpressFullscreenVideoAdDidVisible;

/// 点击广告时的回调
- (void)nativeExpressFullscreenVideoAdDidClick;

/// 单机跳过按钮的回调
- (void)nativeExpressFullscreenVideoAdDidClickSkip;

/// 广告即将关闭时的回调
- (void)nativeExpressFullscreenVideoAdWillClose;

/// 广告关闭时的回调
- (void)nativeExpressFullscreenVideoAdDidClose;

/// 广告播放完成或者出现错误后的回调
/// @param errorCode 错误码
- (void)nativeExpressFullscreenVideoAdDidPlayFinishDidFailWithError:(NSInteger)errorCode;

/// 此方法在关闭另一个控制器时调用
- (void)nativeExpressFullscreenVideoAdDidCloseOtherController;

@end

@interface DDDNativeExpressFullScreenVideoAd : NSObject

@property (nonatomic, weak, nullable) id<DDDNativeExpressFullScreenVideoAdDelegate> delegate;
/**
 验证视频材料是否有效--当数据不为空且未显示时设置为YES
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;


- (instancetype)initWithType:(DDDFullScreenType)type;


- (void)loadAdData;

- (void)showAdRootViewController:(UIViewController *)rootViewController;
@end

NS_ASSUME_NONNULL_END
