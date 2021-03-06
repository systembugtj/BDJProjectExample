//
//  BDJFriendsRecommentEventHandlerPort.h
//  百思不得姐
//
//  Created by 付星 on 2016/11/12.
//    Copyright © 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFEventHandlerPort.h"

@protocol BDJFriendsRecommentEventHandlerPort <XFEventHandlerPort>
/**
 *  选择分类事件
 *
 *  @param index 分类索引
 */
- (void)actionDidSelectCategoryAtIndex:(NSInteger)index;
/**
 *  上拉刷新事件
 *
 */
- (RACSignal *)actionDidHeaderRefresh;
/**
 *  上拉刷新事件
 */
- (RACSignal *)actionDidFooterRefresh;
@end
