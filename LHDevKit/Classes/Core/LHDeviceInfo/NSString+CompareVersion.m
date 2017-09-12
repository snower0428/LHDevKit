//
//  NSString+CompareVersion.m
//  Pods
//
//  Created by LinXiaoBin on 15/9/25.
//
//

#import "NSString+CompareVersion.h"

@implementation NSString(CompareVersion)

+ (NSComparisonResult)version:(NSString *)versionA compareToVersion:(NSString *)versionB
{
    if (versionA == nil) {
        if (versionB == nil) {
            return NSOrderedSame;
        } else {
            return NSOrderedAscending;
        }
    } else {
        if (versionB == nil) {
            return NSOrderedDescending;
        } else {
            return [versionA compare:versionB options:NSNumericSearch];
        }
    }
}

+ (BOOL)isVersion:(NSString *)versionA greaterThan:(NSString *)versionB
{
    return [self version:versionA compareToVersion:versionB] == NSOrderedDescending;
}

+ (BOOL)isVersion:(NSString *)versionA greaterThanOrEqualTo:(NSString *)versionB
{
    return [self version:versionA compareToVersion:versionB] != NSOrderedAscending;
}

+ (BOOL)isVersion:(NSString *)versionA lessThan:(NSString *)versionB
{
    return [self version:versionA compareToVersion:versionB] == NSOrderedAscending;
}

+ (BOOL)isVersion:(NSString *)versionA lessThanOrEqualTo:(NSString *)versionB
{
    return [self version:versionA compareToVersion:versionB] != NSOrderedDescending;
}

@end
