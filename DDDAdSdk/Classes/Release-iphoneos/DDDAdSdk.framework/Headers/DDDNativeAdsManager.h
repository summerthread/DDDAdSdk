//
//  DDDNativeAdsManager.h
//  DDDDemo
//
//  Created by mu on 2020/7/15.
//  Copyright © 2020 summer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DDDNativeExpressAdView.h"
#import "DDDAdConfigManager.h"

NS_ASSUME_NONNULL_BEGIN


@class DDDNativeExpressAdView;
@protocol DDDNativeAdsManagerDelegate <NSObject>
@optional

/**
 * 视图成功加载的回调
 */
- (void)nativeExpressAdSuccessToLoadViews:(NSArray<__kindof DDDNativeExpressAdView *> *)views;

/**
 * 视图加载失败的回调
 */
- (void)nativeExpressAdFailToLoadError:(NSInteger)errorCode;

/**
 * 广告视图无法呈现时的回调
 */
- (void)nativeExpressAdViewRenderFailRrror:(NSInteger)errorCode;

/**
 * 视图即将呈现时的回调
 */
- (void)nativeExpressAdViewWillShow ;

/**
 * 点击视图的回调
 */
- (void)nativeExpressAdViewDidClick;


/**
 * 用户点击不喜欢
 * @param filterwords : 原因数组
 */
- (void)nativeExpressAdViewDislikeWithReason:(NSArray<NSString *> *_Nullable)filterwords;


/// 此方法在关闭另一个控制器时调用
- (void)nativeExpressAdViewDidCloseOtherController;


/**
 * 原生模板广告渲染成功, 此时的height 根据 size.width 完成了动态更新。
 */
- (void)nativeExpressAdViewRenderSuccess;

@end
@interface DDDNativeAdsManager : NSObject
@property (nonatomic, weak, nullable) id<DDDNativeAdsManagerDelegate> delegate;

- (instancetype)initWithAdSize:(CGSize)adSize andAdType:(DDDNativeAdsManagerType)adType;

- (void)loadData:(NSInteger)count;
@end

NS_ASSUME_NONNULL_END
