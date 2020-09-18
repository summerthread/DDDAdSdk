//
//  DDDAdZYSplashAd.h
//  DDDAdZYSdk
//
//  Created by mu on 2020/9/2.
//  Copyright © 2020 summer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
@class DDDAdZYSplashAd;
@protocol DDDAdZYSplashAdDelegate <NSObject>

@optional

/// 广告拉取成功
/// @param splashAd splashAd
- (void)splashAdDidLoad:(DDDAdZYSplashAd *)splashAd;
/// 关闭时回调
- (void)splashAdDidClose:(DDDAdZYSplashAd *)splashAd;

/// 加载失败时回调
/// @param splashAd  splashAd
/// @param errorCode 错误码
- (void)splashAd:(DDDAdZYSplashAd *)splashAd didFailWithError:(NSInteger)errorCode;

/// 将要显示时回调
- (void)splashAdWillVisible:(DDDAdZYSplashAd *)splashAd;

/**
 *  开屏广告点击回调
 */
- (void)splashAdClicked:(DDDAdZYSplashAd *)splashAd;
/**
 *  开屏广告成功展示
 */
- (void)splashAdSuccessPresentScreen:(DDDAdZYSplashAd *)splashAd;
@end


@interface DDDAdZYSplashAd : NSObject

@property (nonatomic, weak, nullable) id<DDDAdZYSplashAdDelegate> delegate;


/// 开屏广告的背景图片 -- 可以设置背景图片作为开屏加载时的默认背景
@property (nonatomic, strong) UIImage *backgroundImage;

/// 开屏广告的背景色
@property (nonatomic, copy) UIColor *backgroundColor;


/// 是否隐藏跳过按钮
@property (nonatomic, assign) BOOL hideSkipButton;

/// 构造方法
/// @param adId 广告位 ID
- (instancetype)initWithSplashAdId:(NSString *)adId;


/// 发起拉取广告请求，只拉取不展示  -- 广告素材及广告图片拉取成功后会回调splashAdDidLoad方法，当拉取失败时会回调splashAdFailToPresent方法 拉取广告前请先实现delegate
- (void)loadAd;

/// 展示广告，调用此方法前需调用isAdValid方法判断广告素材是否有效 -- 广告展示成功时会回调splashAdSuccessPresentScreen方法，展示失败时会回调splashAdFailToPresent方法
/// @param window 当前window
/// @param bottomView 底部视图
- (void)showAdInWindow:(UIWindow *)window withBottomView:(UIView * __nullable)bottomView;


@end

NS_ASSUME_NONNULL_END
