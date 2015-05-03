//
//  UIBarButtonItem+CX.m
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//

#import "UIBarButtonItem+CX.h"

@implementation UIBarButtonItem (CX)


+ (UIBarButtonItem *)itemWithTitle:(NSString *)title NorImage:(NSString *)norImage HigImage:(NSString *)higImage Target:(id)target Action:(SEL)action
{
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    if (title != nil && title.length != 0) {
        [btn setTitle:title forState:UIControlStateNormal];
    }
    if (norImage != nil && norImage.length != 0) {
        [btn setImage:[UIImage imageNamed:norImage] forState:UIControlStateNormal];
    }
    if (higImage != nil && higImage.length != 0) {
        [btn setImage:[UIImage imageNamed:higImage] forState:UIControlStateHighlighted];
    }
    [btn addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
    [btn sizeToFit];
    return [[UIBarButtonItem alloc] initWithCustomView:btn];
}
@end
