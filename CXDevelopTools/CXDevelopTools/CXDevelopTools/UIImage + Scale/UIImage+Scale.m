//
//  UIImage+Scale.m
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//

#import "UIImage+Scale.h"

@implementation UIImage (Scale)

+ (UIImage *)resizedImage:(NSString *)imgName
{
    return [self resizedImage:imgName xPos:0.5 yPos:0.5];
}

+ (UIImage *)resizedImage:(NSString *)imgName xPos:(CGFloat)xPos yPos:(CGFloat)yPos
{
    UIImage *image = [UIImage imageNamed:imgName];
    return [image stretchableImageWithLeftCapWidth:image.size.width * xPos topCapHeight:image.size.height * yPos];
}

@end
