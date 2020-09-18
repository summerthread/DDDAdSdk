//
//  DDDNativeExpressBannerView.h
//  DDDDemo
//
//  Created by mu on 2020/7/15.
//  Copyright © 2020 summer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DDDAdConfigManager.h"

NS_ASSUME_NONNULL_BEGIN
@protocol DDDNativeExpressBannerViewDelegate <NSObject>
@optional

/// 广告加载成功
- (void)nativeExpressBannerAdViewDidLoad;

/// 广告加载失败
/// @param errorCode 错误码
- (void)nativeExpressBannerAdViewLoadFailWithError:(NSInteger )errorCode;


/// 广告展现成功
- (void)nativeExpressBannerAdViewRenderSuccess;

/// 广告无法呈现
/// @param errorCode 错误码
- (void)nativeExpressBannerAdViewRenderFailWithError:(NSInteger)errorCode;

/**
 有新的广告调用此方法
 */
- (void)nativeExpressBannerAdViewWillBecomVisible;

/// 点击广告时回调
- (void)nativeExpressBannerAdViewDidClick;

/// 当用户单击不喜欢按钮并选择不喜欢的原因时，将调用此方法。
/// @param filterwords 原因数组
- (void)nativeExpressBannerAdViewDislikeWithReason:(NSArray<NSString *> *_Nullable)filterwords;

/// 此方法在关闭另一个控制器时调用
- (void)nativeExpressBannerAdViewDidCloseOtherController;

@end


@interface DDDNativeExpressBannerView : UIView

@property (nonatomic, weak, nullable) id<DDDNativeExpressBannerViewDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame rootViewController:(UIViewController *)rootViewController adType:(NativeExpressBannerType)adType adSize:(CGSize)adsize IsSupportDeepLink:(BOOL)isSupportDeepLink interval:(NSInteger)interval;

- (instancetype)initWithFrame:(CGRect)frame rootViewController:(UIViewController *)rootViewController adType:(NativeExpressBannerType)adType adSize:(CGSize)adsize IsSupportDeepLink:(BOOL)isSupportDeepLink;

- (void)loadAdData;
@end

NS_ASSUME_NONNULL_END
