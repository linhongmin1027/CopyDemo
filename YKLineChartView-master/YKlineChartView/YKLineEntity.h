//
//  YKLineEntity.h
//  YKLineChartView
//
//  Created by chenyk on 15/12/9.
//  Copyright © 2015年 chenyk. All rights reserved.
//  https://github.com/chenyk0317/YKLineChartView

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface YKLineEntity : NSObject
//3190.55（开盘）
@property (nonatomic,assign)CGFloat open;
//3243.28 最高点
@property (nonatomic,assign)CGFloat high;
//3178.9 最低点
@property (nonatomic,assign)CGFloat low;
//3197.89 收盘点
@property (nonatomic,assign)CGFloat close;

@property (nonatomic,assign)NSInteger index;
//2015/09/10
@property (nonatomic,strong)NSString * date;
//27326175900 总交易量
@property (nonatomic,assign)CGFloat volume;
//3170.4  5（分钟，小时，日）平均线
@property (nonatomic,assign)CGFloat ma5;
//3146.79 10（分钟，小时，日）平均线
@property (nonatomic,assign)CGFloat ma10;
//3407.85  20(分钟， 小时 ，日)平均线
@property (nonatomic,assign)CGFloat ma20;
//3243.09  提前收盘点
@property (nonatomic,assign)CGFloat preClosePx;
//
@property (nonatomic,strong)NSString * rate;

@end


@interface YKTimeLineEntity : NSObject
@property (nonatomic,strong)NSString * currtTime;
@property (nonatomic,assign)CGFloat preClosePx;
@property (nonatomic,assign)CGFloat avgPirce;
@property (nonatomic,assign)CGFloat lastPirce;
@property (nonatomic,assign)CGFloat totalVolume;
@property (nonatomic,assign)CGFloat volume;
@property (nonatomic,assign)CGFloat trade;
@property (nonatomic,strong)NSString * rate;

@end
