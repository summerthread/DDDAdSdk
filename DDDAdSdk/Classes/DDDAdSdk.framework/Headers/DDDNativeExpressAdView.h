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

/**
 * Whether render is ready
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/// media configuration parameters.
@property (nonatomic, copy, readonly) NSDictionary *mediaExt;

/*
 required.
 Root view controller for handling ad actions.
 */
@property (nonatomic, weak) UIViewController *rootViewController;

@property (nonatomic,assign) id object;

- (void)configDataView ;
/**
 required
 */
- (void)render;

@end

NS_ASSUME_NONNULL_END
