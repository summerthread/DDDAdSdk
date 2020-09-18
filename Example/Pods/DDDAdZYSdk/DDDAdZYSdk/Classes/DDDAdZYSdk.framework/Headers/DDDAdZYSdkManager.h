//
//  DDDAdZYSdkManager.h
//  DDDAdZYSdk
//
//  Created by mu on 2020/9/2.
//  Copyright © 2020 summer. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DDDAdZYSdkManager : NSObject
+ (instancetype)shareInstance ;

/// 获取当前sdk版本信息
- (NSString *)currentSdkVersion;

/// 初始化sdk
/// @param appID 应用appID
- (void)setAppID:(NSString *)appID;
@end

NS_ASSUME_NONNULL_END
