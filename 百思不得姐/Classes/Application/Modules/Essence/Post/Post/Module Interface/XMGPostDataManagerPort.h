//
//  XMGPostDataManagerPort.h
//  百思不得姐
//
//  Created by 付星 on 2016/11/18.
//    Copyright © 2016年 yizzuide. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XFDataManagerPort.h"
#import "XMGPostCategory.h"

@protocol XMGPostDataManagerPort <XFDataManagerPort>

- (RACSignal *)grabPostsForType:(XMGPostCategoryType)postType;
- (RACSignal *)grabPostsForType:(XMGPostCategoryType)postType maxtime:(NSInteger)maxtime atPage:(NSInteger)page;
@end
