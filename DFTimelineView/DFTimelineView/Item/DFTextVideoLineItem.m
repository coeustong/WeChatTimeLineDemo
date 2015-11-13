//
//  DFTextVideoLineItem.m
//  DFTimelineView
//
//  Created by CaptainTong on 15/11/13.
//  Copyright © 2015年 Datafans, Inc. All rights reserved.
//

#import "DFTextVideoLineItem.h"

@implementation DFTextVideoLineItem

-(instancetype)init{
    self = [super init];
    if (self) {
        
        self.itemType = LineItemTypeTextImage;
        
        _text = @"";
        _thumbImages = [NSMutableArray array];
        _srcImages = [NSMutableArray array];
    }
    return self;
}

@end
