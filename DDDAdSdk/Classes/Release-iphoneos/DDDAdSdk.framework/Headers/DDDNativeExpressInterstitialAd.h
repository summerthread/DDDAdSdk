//
//  DDDNativeExpressInterstitialAd.h
//  DDDAdSdk
//
//  Created by mu on 2020/7/27.
//  Copyright © 2020 summer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DDDAdConfigManager.h"

NS_ASSUME_NONNULL_BEGIN

@protocol DDDNativeExpressInterstitialAdDelegate <NSObject>
@optional


#pragma mark-- BUNativeExpresInterstitialAdDelegate
/**
 广告材料成功加载时回调
 */
- (void)nativeExpresInterstitialAdDidLoad;

/**
 广告材料加载失败时回调
 @param errorCode : 错误状态
 */
- (void)nativeExpresInterstitialAdDidFailWithError:(NSInteger)errorCode;

/**
 广告成功加载时回调
 */
- (void)nativeExpresInterstitialAdRenderSuccess;

/**
 广告无法呈现时回调
 @param errorCode : 错误状态
 */
- (void)nativeExpresInterstitialAdRenderFailError:(NSInteger)errorCode;

/**
 广告即将显示时回调
 */
- (void)nativeExpresInterstitialAdWillVisible;

/**
 点击了广告的回调
 */
- (void)nativeExpresInterstitialAdDidClick;

/**
 广告将要关闭时的回调
 */
- (void)nativeExpresInterstitialAdWillClose;

/**
 广告关闭时的回调
 */
- (void)nativeExpresInterstitialAdDidClose;


/// 此方法在关闭另一个控制器时调用
- (void)nativeExpresInterstitialAdDidCloseOtherController;

@end


@interface DDDNativeExpressInterstitialAd : NSObject

/**
 验证材料是否有效--当数据不为空且未显示时设置为YES
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

@property (nonatomic, weak, nullable) id<DDDNativeExpressInterstitialAdDelegate> delegate;


- (instancetype)initWithType:(DDDInterstitialType)type andAdSize:(CGSize)adSize;


- (void)loadAdData;

- (void)showAdFromRootViewController:(UIViewController *)rootViewController;


@end

NS_ASSUME_NONNULL_END
