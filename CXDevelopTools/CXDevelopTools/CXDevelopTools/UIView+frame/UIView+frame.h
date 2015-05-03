//
//  UIView+frame.h
//  CXDevelopTools
//
//  Created by c_xie on 15/5/3.
//  Copyright (c) 2015年 c_xie. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (frame)
/**
 *  frame的X值
 */
@property (nonatomic, assign) CGFloat x;
/**
 *  frame的Y值
 */
@property (nonatomic, assign) CGFloat y;
/**
 *  中心点的X值
 */
@property (nonatomic, assign) CGFloat centerX;
/**
 *  中心点的Y值
 */
@property (nonatomic, assign) CGFloat centerY;
/**
 *  frame的width值
 */
@property (nonatomic, assign) CGFloat width;
/**
 *  frame的height值
 */
@property (nonatomic, assign) CGFloat height;
/**
 *  fame的size值
 */
@property (nonatomic, assign) CGSize size;
/**
 *  frame的origin值
 */
@property (nonatomic, assign) CGPoint origin;

@end
