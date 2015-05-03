//
//  NSString+Extension.h
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (Extension)
/**
 *  根据字体大小和最大宽度计算文字占据的大小
 *
 *  @param font 字体
 *  @param maxW 最大宽度
 *
 *  @return 文字大小
 */
- (CGSize)sizeWithFont:(UIFont *)font maxW:(CGFloat)maxW;
/**
 *  根据字体计算文字的大小
 *
 *  @param font 字体
 *
 *  @return 文字大小
 */
- (CGSize)sizeWithFont:(UIFont *)font;
@end
