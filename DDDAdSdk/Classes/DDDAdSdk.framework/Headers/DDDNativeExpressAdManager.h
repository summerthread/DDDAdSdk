//
//  DDDNativeExpressAdManager.h
//  DDDDemo
//
//  Created by mu on 2020/3/4.
//  Copyright © 2020 summer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DDDNativeExpressAdView.h"


NS_ASSUME_NONNULL_BEGIN

@class DDDNativeExpressAdManager;

@protocol DDDNativeExpressAdViewDelegate <NSObject>

@optional
/**
 * 当视图成功加载ad时的回调
 */
- (void)nativeExpressAdSuccessToLoad:(DDDNativeExpressAdManager *)nativeExpressAd views:(NSArray<__kindof DDDNativeExpressAdView *> *)views;

/**
 * 当视图加载失败时的回调
 */
- (void)nativeExpressAdFailToLoad:(DDDNativeExpressAdManager *)nativeExpressAd error:(NSInteger)errorCode;


/**
 * 成功呈现nativeExpressAdView和nativeExpressAdView.size时调用此方法
 */
- (void)nativeExpressAdViewRenderSuccess:(DDDNativeExpressAdView *)nativeExpressAdView;

/**
 * 此方法在nativeExpressAdView呈现失败时调用
 */
- (void)nativeExpressAdViewRenderFail:(DDDNativeExpressAdView *)nativeExpressAdView error:(NSInteger)errorCode;

/**
 * 当广告视图即将显示内容时发送
 */
- (void)nativeExpressAdViewWillShow:(DDDNativeExpressAdView *)nativeExpressAdView;

/**
 * 当一个广告视图被点击时发送
 */
- (void)nativeExpressAdViewDidClick:(DDDNativeExpressAdView *)nativeExpressAdView;

/**
 * 播放完成后的回调
 * @param errorCode : 对应错误码
 */
- (void)nativeExpressAdViewPlayerDidPlayFinish:(DDDNativeExpressAdView *)nativeExpressAdView error:(NSInteger)errorCode;

/**
// * Sent when a user clicked dislike reasons.
// * @param filterWords : the array of reasons why the user dislikes the ad
// */
//- (void)nativeExpressAdView:(DDDNativeExpressAdView *)nativeExpressAdView dislikeWithReason:(NSArray<DDDDislikeWords *> *)filterWords;

/**
 * 点击广告视图即将推出新视图时的回调
 */
- (void)nativeExpressAdViewWillPresentScreen:(DDDNativeExpressAdView *)nativeExpressAdView;


@end

@interface DDDNativeExpressAdManager : NSObject


//@property (nonatomic, strong, nullable) DDDAdSlot *adslot;

@property (nonatomic, assign, readwrite) CGSize adSize;


@property (nonatomic, weak, nullable) id<DDDNativeExpressAdViewDelegate> delegate;


/**
 @param size expected ad view size，when size.height is zero, acture height will match size.width
 */
//- (instancetype)initWithSlot:(DDDAdSlot * _Nullable)slot adSize:(CGSize)size;

- (instancetype)initWithAdSize:(CGSize)size;

/**
 请求的广告数量，最多是3个
 */
- (void)loadAd:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
