//
//  JMButton.h
//  LoginTransForm
//
//  Created by 胡金萌 on 2017/9/22.
//  Copyright © 2017年 com.hjm. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^finishBlock)();
@interface JMButton : UIView


@property (nonatomic,copy) finishBlock translateBlock;
@end
