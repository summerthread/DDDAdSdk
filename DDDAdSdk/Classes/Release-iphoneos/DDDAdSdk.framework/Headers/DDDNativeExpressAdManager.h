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
- (void)nativeExpressDrawAdSuccessToLoad:(DDDNativeExpressAdManager *)nativeExpressAd views:(NSArray<__kindof DDDNativeExpressAdView *> *)views;

/**
 * 当视图加载失败时的回调
 */
- (void)nativeExpressDrawAdFailToLoadError:(NSInteger)errorCode;


/**
 * 成功呈现nativeExpressAdView和nativeExpressAdView.size时调用此方法
 */
- (void)nativeExpressDrawAdViewRenderSuccess;

/**
 * 此方法在nativeExpressAdView呈现失败时调用
 */
- (void)nativeExpressDrawAdViewRenderFailError:(NSInteger)errorCode;

/**
 * 当广告视图即将显示内容时发送
 */
- (void)nativeExpressDrawAdViewWillShow;

/**
 * 当一个广告视图被点击时发送
 */
- (void)nativeExpressDrawAdViewDidClick;

/**
 * 播放完成后的回调
 * @param errorCode : 对应错误码
 */
- (void)nativeExpressDrawAdViewPlayerDidPlayFinishError:(NSInteger)errorCode;


/**
 * 点击广告视图即将推出新视图时的回调
 */
- (void)nativeExpressDrawAdViewWillPresentScreen;



@end

@interface DDDNativeExpressAdManager : NSObject


@property (nonatomic, weak, nullable) id<DDDNativeExpressAdViewDelegate> delegate;


- (instancetype)initWithAdSize:(CGSize)size andUserID:(NSString *)userID;
/**
 请求的广告数量，最多是3个
 */
- (void)loadAd:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
