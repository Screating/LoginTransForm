//
//  NextViewController.m
//  LoginTransForm
//
//  Created by 胡金萌 on 2017/9/22.
//  Copyright © 2017年 com.hjm. All rights reserved.
//

#import "NextViewController.h"
#import "JMTransition.h"
@interface NextViewController ()<UIViewControllerTransitioningDelegate>

@end

@implementation NextViewController

-(instancetype)init{
    if(self = [super init]){
        self.transitioningDelegate = self;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UIImageView *imageView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"pic1.jpg"]];
    imageView.frame = CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height);
    [self.view addSubview:imageView];
    imageView.userInteractionEnabled = YES;
    UITapGestureRecognizer *tap = [[UITapGestureRecognizer alloc]initWithTarget:self action:@selector(pop:)];
    [imageView addGestureRecognizer:tap];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

-(id<UIViewControllerAnimatedTransitioning>)animationControllerForPresentedController:(UIViewController *)presented presentingController:(UIViewController *)presenting sourceController:(UIViewController *)source{
    return [JMTransition transitionWithTransitionType:JMPresentOneTransitionTypePresent];
}

-(id<UIViewControllerAnimatedTransitioning>)animationControllerForDismissedController:(UIViewController *)dismissed{
    return [JMTransition transitionWithTransitionType:JMPresentOneTransitionTypeDismiss];
}

-(void)pop:(UITapGestureRecognizer *)sender
{
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
