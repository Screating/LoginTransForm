//
//  JMTextField.h
//  LoginTransForm
//
//  Created by 胡金萌 on 2017/9/22.
//  Copyright © 2017年 com.hjm. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMTextField : UIView
//注释信息
@property (nonatomic,copy) NSString *ly_placeholder;

//光标颜色
@property (nonatomic,strong) UIColor *cursorColor;

//注释普通状态下颜色
@property (nonatomic,strong) UIColor *placeholderNormalStateColor;

//注释选中状态下颜色
@property (nonatomic,strong) UIColor *placeholderSelectStateColor;
@end
