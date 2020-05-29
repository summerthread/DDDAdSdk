//
//  DDDAdManager.h
//  DDDDemo
//
//  Created by lishimin on 2020/2/8.
//  Copyright © 2020 summer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN



@interface DDDAdManager : NSObject

/// 初始化sdk
/// @param success 成功
/// @param failure 失败
+ (void)configSetManager:(void (^)(void))success failure:(void (^)(void))failure;


@end

NS_ASSUME_NONNULL_END
