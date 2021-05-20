//
//  ZebraView.h
//  SortingAlgorithm
//
//  Created by MichaelLedger on 2018/11/15.
//  Copyright © 2018年 MTX Software Technology Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

#define Space       15
#define ItemMargin  10
#define ItemWidth   40

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, SortType) {
    // 冒泡排序
    SortType_Bubble = 1000,
    // 选择排序
    SortType_Select,
    // DrawRect
    SortType_DrawRect
};

@interface ZebraView : UIView

@property (nonatomic, strong) NSArray *dataArr;
@property (nonatomic, assign) SortType sortType;
@property (nonatomic, assign) NSInteger currentIdx;
@property (nonatomic, assign) NSInteger dstIdx;
@property (nonatomic, assign) NSNumber *currentItem;

@end

NS_ASSUME_NONNULL_END
