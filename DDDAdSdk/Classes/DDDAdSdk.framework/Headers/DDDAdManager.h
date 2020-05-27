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
/// @param mediaId 游戏相关id（没有接入游戏给空字符串）
/// @param appKey 游戏相关appKey（没有接入游戏给空字符串）
+ (void)setConfigManagerWithMediaId:(NSString*)mediaId
appKey:(NSString*)appKey;



/// 打开游戏列表
/// @param currentVC 当前控制器
/// @param userId 为当前应用的用户Id，或者是用户的唯一标志
+(void) presentListViewController:(UIViewController*) currentVC
                           userId:(NSString*)userId ;


@end

NS_ASSUME_NONNULL_END
