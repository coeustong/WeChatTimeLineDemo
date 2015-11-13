//
//  DFTextVideoLineItem.h
//  DFTimelineView
//
//  Created by CaptainTong on 15/11/13.
//  Copyright © 2015年 Datafans, Inc. All rights reserved.
//

#import "DFBaseLineItem.h"

@interface DFTextVideoLineItem : DFBaseLineItem

@property (nonatomic, strong) NSString *text;
@property (nonatomic, strong) NSMutableArray *thumbImages;
@property (nonatomic, strong) NSMutableArray *srcImages;
@property (nonatomic, assign) CGFloat width;
@property (nonatomic, assign) CGFloat height;

@property (nonatomic, strong) NSAttributedString *attrText;

@end
