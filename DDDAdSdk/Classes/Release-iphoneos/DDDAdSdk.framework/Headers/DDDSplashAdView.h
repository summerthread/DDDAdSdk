//
//  DDDSplashAdView.h
//  DDDDemo
//
//  Created by lishimin on 2020/2/9.
//  Copyright © 2020 summer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class DDDSplashAdView;
@protocol DDDSplashAdViewDelegate <NSObject>

@optional
/// 素材加载成功时候的回调
/// @param splashAd splashAd
- (void)splashAdDidLoad:(DDDSplashAdView *)splashAd;

/// 关闭时回调
- (void)splashAdDidClose:(DDDSplashAdView *)splashAd;

/// 加载失败时回调
/// @param splashAd  splashAd
/// @param errorCode 错误码
- (void)splashAd:(DDDSplashAdView *)splashAd didFailWithError:(NSInteger)errorCode;

/// 将要显示时回调
- (void)splashAdWillVisible:(DDDSplashAdView *)splashAd;


/// 单击广告时调用此方法。
/// @param splashAd ~~
- (void)splashAdDidClick:(DDDSplashAdView *)splashAd;

/**
 广告即将关闭时调用
 */
- (void)splashAdWillClose:(DDDSplashAdView *)splashAd ;

/**
关闭另一个控制器时调用
*/
- (void)splashAdDidCloseOtherController:(DDDSplashAdView *)splashAd ;

/**
 单击广告跳过按钮时调用此方法。
 */
- (void)splashAdDidClickSkip:(DDDSplashAdView *)splashAd;

/**
当广告倒数等于0时调用此方法
*/
- (void)splashAdCountdownToZero:(DDDSplashAdView *)splashAd;

@end
@interface DDDSplashAdView : UIView

@property (nonatomic, weak, nullable) id<DDDSplashAdViewDelegate> delegate;




///**
// 跳过按钮  默认显示
// */
//@property (nonatomic, assign) BOOL hideSkipButton;


- (instancetype)initWithFrame:(CGRect)frame andRootWindow:(UIWindow *)window andTolerateTimeout:(NSTimeInterval)tolerateTimeout andHideSkipButton:(BOOL)hideSkipButton;

- (void)showAdWithBottomView:(UIView *)bottom ;


+ (NSString *)currentSdkVersion;
@end

NS_ASSUME_NONNULL_END
