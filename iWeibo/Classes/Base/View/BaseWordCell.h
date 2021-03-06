//
//  BaseWordCell.h
//  iWeibo
//
//  Created by dengwei on 15/8/5.
//  Copyright (c) 2015年 dengwei. All rights reserved.
//

#import "BaseCell.h"

@class IconView;
@interface BaseWordCell : BaseCell
{
    IconView *_icon; // 头像
    UILabel *_screenName; // 昵称
    UIImageView *_mbIcon; // 会员图标
    
    UILabel *_text; // 内容
    UILabel *_time; // 时间
}

@end
