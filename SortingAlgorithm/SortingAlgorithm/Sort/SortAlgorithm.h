//
//  BubbleSortModel.h
//  SortingAlgorithm
//
//  Created by MichaelLedger on 2018/11/15.
//  Copyright © 2018年 MTX Software Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SortAlgorithm : NSObject

+ (NSMutableArray *)getRandomArrWithCount:(NSInteger)count min:(NSInteger)min max:(NSInteger)max;

+ (void)bubbleSortWithArr:(NSMutableArray *)dataArr handler:(void(^)(NSInteger currentIdx, NSInteger dstIdx))handler;

+ (void)selectSortWithArr:(NSMutableArray *)dataArr handler:(void(^)(NSInteger currentIdx, NSInteger dstIdx))handler;

@end

