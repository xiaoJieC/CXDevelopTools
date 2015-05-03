//
//  NSString+Path.m
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//.


#import "NSString+Path.h"

@implementation NSString (Path)

- (NSString *)appendDocumentPath {
    NSString *dir = NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES).lastObject;
    return [dir stringByAppendingPathComponent:self.lastPathComponent];
}

- (NSString *)appendCachePath {
    NSString *dir = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES).lastObject;
    return [dir stringByAppendingPathComponent:self.lastPathComponent];
}

- (NSString *)appendTempPath {
    return [NSTemporaryDirectory() stringByAppendingPathComponent:self.lastPathComponent];
}

@end
