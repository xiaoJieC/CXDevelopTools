//
//  UIImage+Scale.h
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Scale)

/**
 *  对图片进行拉伸
 *
 *  @param imgName 图片名字
 *
 *  @return 拉伸后的图片
 */
+ (UIImage *)resizedImage:(NSString *)imgName;


/**
 *  自由拉伸图片
 *
 *  @param imgName 图片名字
 *  @param xPos    x轴拉伸程度（0 ~ 1.0）
 *  @param yPos    y轴拉伸程度
 *
 *  @return 拉伸后的图片
 */
+ (UIImage *)resizedImage:(NSString *)imgName xPos:(CGFloat)xPos yPos:(CGFloat)yPos;
@end
