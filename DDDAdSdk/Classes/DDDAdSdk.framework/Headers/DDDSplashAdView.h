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
/// 关闭时回调
- (void)splashAdDidClose:(DDDSplashAdView *)splashAd;

/// 加载失败时回调
/// @param splashAd  splashAd
/// @param errorCode 错误码
- (void)splashAd:(DDDSplashAdView *)splashAd didFailWithError:(NSInteger)errorCode;

/// 将要显示时回调
- (void)splashAdWillVisible:(DDDSplashAdView *)splashAd;
@end
@interface DDDSplashAdView : UIView

@property (nonatomic, weak, nullable) id<DDDSplashAdViewDelegate> delegate;

/**
 跳过按钮  默认显示
 */
@property (nonatomic, assign) BOOL hideSkipButton;


/*
 呈现根vc
 */
@property (nonatomic, weak) UIViewController *rootViewController;



- (instancetype)initWithFrame:(CGRect)frame;


- (void)loadAdData;

@end

NS_ASSUME_NONNULL_END
