//
//  UIBarButtonItem+CX.h
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (CX)
/**
 *  对UIBarButtonItem进行封装，可以自定义显示图片和方法
 *
 *  @param title    标题
 *  @param norImage 默认图片
 *  @param higImage 高亮图片
 *  @param target   事件处理对象
 *  @param action   促发方法
 *
 *  @return 返回一个封装好的UIBarButtonItem
 */
+ (UIBarButtonItem *)itemWithTitle:(NSString *)title NorImage:(NSString *)norImage HigImage:(NSString *)higImage Target:(id)target Action:(SEL)action;
@end
