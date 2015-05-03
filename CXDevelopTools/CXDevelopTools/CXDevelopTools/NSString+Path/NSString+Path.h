//
//  NSString+Path.h
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//


#import <Foundation/Foundation.h>

@interface NSString (Path)

/**
 *  根据文件名拼接文档目录
 *
 *  @return 文档目录
 */
- (NSString *)appendDocumentPath;

/**
 *  根据文件名拼接缓存目录
 *
 *  @return 缓存目录
 */
- (NSString *)appendCachePath;

/**
 *  根据文件名拼接临时目录
 *
 *  @return 临时目录
 */
- (NSString *)appendTempPath;

@end
