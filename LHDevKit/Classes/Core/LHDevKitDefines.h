//
//  LHDevKitDefines.h
//  Pods
//
//  Created by leihui on 2017/9/12.
//
//

#ifndef LHDevKitDefines_h
#define LHDevKitDefines_h

#define WINDOW      [[[UIApplication sharedApplication] delegate] window]
#define ROOT_VIEW_CONTROLLER    ((UINavigationController*)([[[UIApplication sharedApplication] delegate] window].rootViewController))

//固件版本
#define OS_VERSION      [BZDeviceInfo osVersion]
#define isOsVersionGreaterThan(version)             [NSString isVersion:OS_VERSION greaterThan:(version)]
#define isOsVersionGreaterThanOrEqualTo(version)    [NSString isVersion:OS_VERSION greaterThanOrEqualTo:(version)]
#define isOsVersionLessThan(version)                [NSString isVersion:OS_VERSION lessThan:(version)]
#define isOsVersionLessThanOrEqualTo(version)       [NSString isVersion:OS_VERSION lessThanOrEqualTo:(version)]

//App版本
#define APP_VERSION     [BZDeviceInfo appVersion]
#define isAppVersionGreaterThan(version)            [NSString isVersion:APP_VERSION greaterThan:(version)]
#define isAppVersionGreaterThanOrEqualTo(version)   [NSString isVersion:APP_VERSION greaterThanOrEqualTo:(version)]
#define isAppVersionLessThan(version)               [NSString isVersion:APP_VERSION lessThan:(version)]
#define isAppVersionLessThanOrEqualTo(version)      [NSString isVersion:APP_VERSION lessThanOrEqualTo:(version)]

//App编译版本
#define APP_BUILD_VERSION     [BZDeviceInfo appBuildVersion]
#define isAppBuildVersionGreaterThan(version)           [NSString isVersion:APP_BUILD_VERSION greaterThan:(version)]
#define isAppBuildVersionGreaterThanOrEqualTo(version)  [NSString isVersion:APP_BUILD_VERSION greaterThanOrEqualTo:(version)]
#define isAppBuildVersionLessThan(version)              [NSString isVersion:APP_BUILD_VERSION lessThan:(version)]
#define isAppBuildVersionLessThanOrEqualTo(version)     [NSString isVersion:APP_BUILD_VERSION lessThanOrEqualTo:(version)]

//常用Size
#define SCREEN_WIDTH        ([[UIScreen mainScreen] bounds].size.width)
#define SCREEN_HEIGHT       ([[UIScreen mainScreen] bounds].size.height)
#define APP_VIEW_HEIGHT     (SCREEN_HEIGHT-64)
#define STATUSBAR_HEIGHT        20
#define NAVIGATIONBAR_HEIGHT    44
#define TABBAR_HEIGHT           49
#define SUB_TABBAR_HEIGHT       44
#define AMEND_STATUSBAR_HEIGHT  ((SYSTEM_VERSION < 7.0) ? (-STATUSBAR_HEIGHT) : (0))

//UIColor
#define RGB(r, g, b)        [UIColor colorWithRed: (float)(r)/255.f green: (float)(g)/255.f blue: (float)(b)/255.f alpha: 1.0f]
#define RGBA(r, g, b, a)    [UIColor colorWithRed: (float)(r)/255.f green: (float)(g)/255.f blue: (float)(b)/255.f alpha: a]

//Other
#define ValueOrEmptyString(value) ((value)?(value):@"")

#endif /* LHDevKitDefines_h */
