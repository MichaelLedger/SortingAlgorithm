//
//  BaseViewController.m
//  SortingAlgorithm
//
//  Created by MichaelLedger on 2018/11/14.
//  Copyright © 2018年 MTX Software Technology Co.,Ltd. All rights reserved.
//

#import "BaseViewController.h"

@interface BaseViewController ()

@end

@implementation BaseViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self.view setBackgroundColor:[UIColor whiteColor]];
    
    /*
    在iOS7 UIViewController引入了一个新的属性edgesForExtendedLayout， 如果你的容器是UINavigationController，布局默认会从顶部开始，所以会被遮挡。
    解决方法:

    self.edgesForExtendedLayout = UIRectEdgeNone;
    还有一种解决方法

    在iOS7之前导航栏默认为半透明的，这样的话布局是从顶部开始的，将导航栏设置为不透明后，布局会自动放到导航栏以下。
    self.navigationController.navigationBar.translucent = NO;
     */
    
//    self.edgesForExtendedLayout = UIRectEdgeNone;
    self.navigationController.navigationBar.translucent = NO;
    
    if (self.navigationController.topViewController && self.navigationController.viewControllers.firstObject != self) {
        UIBarButtonItem *backItem = [[UIBarButtonItem alloc] initWithImage:[UIImage imageNamed:@"navbar_icon_return"] style:UIBarButtonItemStylePlain target:self action:@selector(backBarBtnClicked:)];
        self.navigationItem.leftBarButtonItem = backItem;
    }
}

#pragma mark - Action functions
- (void)backBarBtnClicked:(id)sender {
    
    [self.navigationController popViewControllerAnimated:YES];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    
    [self.view endEditing:YES];
}

@end
