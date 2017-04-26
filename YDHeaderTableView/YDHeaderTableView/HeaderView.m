//
//  HeaderView.m
//  YDHeaderTableView
//
//  Created by cq on 2017/4/26.
//  Copyright © 2017年 cq. All rights reserved.
//

#import "HeaderView.h"

@implementation HeaderView

+(instancetype)viewFromXib{
    return [[[NSBundle mainBundle]loadNibNamed:NSStringFromClass([self class]) owner:nil options:nil]lastObject];
}
@end
