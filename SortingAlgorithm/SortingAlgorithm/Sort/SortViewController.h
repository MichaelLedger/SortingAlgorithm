//
//  SortViewController.h
//  SortingAlgorithm
//
//  Created by MichaelLedger on 2018/11/14.
//  Copyright © 2018年 MTX Software Technology Co.,Ltd. All rights reserved.
//

#import "BaseViewController.h"
#import "ZebraView.h"

@interface SortViewController : BaseViewController

@property (nonatomic, assign) SortType sortType;
@property (nonatomic, strong) NSString *sortName;

@end

