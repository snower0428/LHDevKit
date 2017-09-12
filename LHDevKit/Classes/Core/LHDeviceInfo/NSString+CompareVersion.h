//
//  NSString+CompareVersion.h
//  Pods
//
//  Created by LinXiaoBin on 15/9/25.
//
//

#import <Foundation/Foundation.h>

@interface NSString(CompareVersion)

//用于比较版本号，支持多段版本号，如1.9.1
+ (NSComparisonResult)version:(NSString *)versionA compareToVersion:(NSString *)versionB;

+ (BOOL)isVersion:(NSString *)versionA greaterThan:(NSString *)versionB;
+ (BOOL)isVersion:(NSString *)versionA greaterThanOrEqualTo:(NSString *)versionB;

+ (BOOL)isVersion:(NSString *)versionA lessThan:(NSString *)versionB;
+ (BOOL)isVersion:(NSString *)versionA lessThanOrEqualTo:(NSString *)versionB;

@end
