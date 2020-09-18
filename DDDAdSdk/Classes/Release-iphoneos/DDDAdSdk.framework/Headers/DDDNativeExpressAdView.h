//
//  DDDNativeExpressAdView.h
//  DDDDemo
//
//  Created by mu on 2020/3/4.
//  Copyright © 2020 summer. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDDNativeExpressAdView : UIView


@property (nonatomic, assign, readonly) BOOL isReady;


@property (nonatomic, copy, readonly) NSDictionary *mediaExt;


@property (nonatomic, weak) UIViewController *rootViewController;

@property (nonatomic,assign) id object;

/**
 必须调用  -- 在调用configDataView后调用
 */
- (void)render;

@end

NS_ASSUME_NONNULL_END
