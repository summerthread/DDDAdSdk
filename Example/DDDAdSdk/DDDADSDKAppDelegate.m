//
//  DDDADSDKAppDelegate.m
//  DDDAdSdk
//
//  Created by summerthread on 05/26/2020.
//  Copyright (c) 2020 summerthread. All rights reserved.
//

#import "DDDADSDKAppDelegate.h"
#import "DDDADSDKViewController.h"

@implementation DDDADSDKAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    UIWindow *window = [[UIWindow alloc]initWithFrame:[UIScreen mainScreen].bounds];
    UINavigationController *nvc = [[UINavigationController alloc]initWithRootViewController:[[DDDADSDKViewController alloc]init]];
    window.rootViewController = nvc;
    [window makeKeyAndVisible];
    self.window = window;
    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application {
    
}

- (void)applicationDidEnterBackground:(UIApplication *)application {
    
}

- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}



@end
