//
//  DDDAdZYBannerView.h
//  DDDAdZYSdk
//
//  Created by mu on 2020/9/7.
//  Copyright © 2020 summer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol DDDAdZYBannerViewDelegate <NSObject>
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

/// 此方法在关闭另一个控制器时调用
- (void)nativeExpressBannerAdViewDidCloseOtherController;

@end


@interface DDDAdZYBannerView : UIView


@property (nonatomic, weak, nullable) id<DDDAdZYBannerViewDelegate> delegate;
/// 构造方法
/// @param frame 视图大小
/// @param adId 广告id
/// @param rootViewController 视图控制器
- (instancetype)initWithFrame:(CGRect)frame adId:(NSString *)adId rootViewController:(UIViewController *)rootViewController;

@property (nonatomic, assign) NSInteger loadNumber;
/// 展示
- (void)loadAdAndShow;

@end

NS_ASSUME_NONNULL_END
