//
//  HeaderView.h
//  SortingAlgorithm
//
//  Created by MichaelLedger on 2018/11/16.
//  Copyright © 2018年 MTX Software Technology Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, BtnType) {
    BtnType_Init = 100,
    BtnType_Start,
};

@class HeaderView;

@protocol HeaderViewDelegate <NSObject>

- (void)headerView:(HeaderView *)header buttonClicked:(UIButton *)button;

@end

@interface HeaderView : UIView

@property (nonatomic, weak) id<HeaderViewDelegate> delegate;

- (void)updateContentWithTime:(NSInteger)seconds;

@end

NS_ASSUME_NONNULL_END
