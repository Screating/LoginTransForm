//
//  JMTransition.h
//  LoginTransForm
//
//  Created by 胡金萌 on 2017/9/22.
//  Copyright © 2017年 com.hjm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef NS_ENUM(NSUInteger, JMPresentOneTransitionType) {
    JMPresentOneTransitionTypePresent = 0,//管理present动画
    JMPresentOneTransitionTypeDismiss//管理dismiss动画
};
@interface JMTransition : NSObject<UIViewControllerAnimatedTransitioning,CAAnimationDelegate>
@property (nonatomic,assign) JMPresentOneTransitionType type;

+ (instancetype)transitionWithTransitionType:(JMPresentOneTransitionType)type;
- (instancetype)initWithTransitionType:(JMPresentOneTransitionType)type;
@end
