//
//  DDDAdConfigManager.h
//  DDDAdSdk
//
//  Created by mu on 2020/8/11.
//  Copyright © 2020 summer. All rights reserved.
//

#ifndef DDDAdConfigManager_h
#define DDDAdConfigManager_h

typedef NS_ENUM(NSInteger, DDDNativeAdsManagerType) {
    DDDNativeAdsManagerType_VerticalScreenVedio                  = 0,//竖屏视频模板
    DDDNativeAdsManagerType_RunningHorse1                 = 1,//跑马灯信息流1
    DDDNativeAdsManagerType_RunningHorse2                 = 2,//跑马灯信息流2
    DDDNativeAdsManagerType_HorizontalScreenVedio                = 3,//横版视频模板
    DDDNativeAdsManagerType_UpTextDownImage                = 4,//上文下图模板
    DDDNativeAdsManagerType_UpTextDownImage2                 = 5,//上文下图附加创意模板
    DDDNativeAdsManagerType_UpTextDownFloating                = 6,//上文下浮层模板
    DDDNativeAdsManagerType_TextFloating                  = 7,//文字浮层模板
    DDDNativeAdsManagerType_LeftImageRightText                 = 8,//左图右文模板
    DDDNativeAdsManagerType_LeftTextRightImage                 = 9,//左文右图模板
    DDDNativeAdsManagerType_ThreeImage                 = 10,//三图模板
    
    
    DDDNativeAdsManagerTXType_UpImageDownText                  = 11,//上图下文(图片尺寸1280×720)（可图片可视频）
    DDDNativeAdsManagerTXType_UpTextDownImage                 = 12,//上文下图(图片尺寸1280×720)（可图片可视频）
    DDDNativeAdsManagerTXType_DoubleImageText                 = 13,//双图双文(图片尺寸1280×720)（可图片可视频）
    DDDNativeAdsManagerTXType_Image_1280_720                 = 14,//纯图片(图片尺寸1280×720)（可图片可视频）
    DDDNativeAdsManagerTXType_LeftImageRightText                 = 15,//左图右文(图片尺寸1200×800)
    DDDNativeAdsManagerTXType_LeftTextRightImage                = 16,//左文右图(图片尺寸1200×800)
    DDDNativeAdsManagerTXType_Image_800_1200                = 17,//纯图片(图片尺寸800×1200)
    DDDNativeAdsManagerTXType_ThreeImage                = 18,//三小图(图片尺寸228×150)
    DDDNativeAdsManagerTXType_TextViewUpTextDownImage              = 19,//文字浮层(上文下图1280×720)
    DDDNativeAdsManagerTXType_TextViewUpImageDownText               = 20,//文字浮层(上图下文1280×720)
    DDDNativeAdsManagerTXType_TextViewImage               = 21,//文字浮层(单图1280×720)
    DDDNativeAdsManagerTXType_Image_1080_1920               = 22,//纯图片(图片尺寸1080×1920或800×1200)
    
};
typedef NS_ENUM(NSInteger, DDDInterstitialType) {
    DDDInterstitialType_1_1                  = 0,//1:1
    DDDInterstitialType_3_2                 = 1,//3:2
    DDDInterstitialType_2_3                 = 2,//2:3
    DDDInterstitialType_Vedio                 = 3,//视频
    DDDInterstitialType_Image                 = 4,//图片
};

typedef NS_ENUM(NSInteger, DDDFullScreenType) {
    DDDFullScreenType_VerticalVedio                  = 0,//垂直
    DDDFullScreenType_HorizontalVedio                 = 1,//水平
};


typedef NS_ENUM(NSInteger, NativeExpressBannerType) {
    NativeExpressBannerType_600_90                  = 0,
    NativeExpressBannerType_640_100                 = 1,
    NativeExpressBannerType_600_150                 = 2,
    NativeExpressBannerType_690_388                 = 3,
    NativeExpressBannerType_600_260                 = 4,
    NativeExpressBannerType_600_300                 = 5,
    NativeExpressBannerType_600_400                 = 6,
    NativeExpressBannerType_600_500                 = 7
};

#endif /* DDDAdConfigManager_h */
