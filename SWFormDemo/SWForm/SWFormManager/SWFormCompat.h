//
//  SWFormCompat.h
//  SWFormDemo
//
//  Created by zijin on 2018/5/29.
//  Copyright © 2018年 selwyn. All rights reserved.
//

/**
 SWFormCompat 主要配置表单涉及的相关常量参数，可根据需求修改配置
 */
#import <UIKit/UIKit.h>

/**
 必选条目标题呈现形式类别
 */
typedef NS_ENUM(NSInteger, SWTitleShowType) {
    /**
     默认呈现形式，如: 标题(必填)
     */
    SWTitleShowTypeDefault,
    /**
     标题前部加红色*，如: *标题
     */
    SWTitleShowTypeRedStarFront,
    /**
     标题后部加红色*，如: 标题*
     */
    SWTitleShowTypeRedStarBack,
};

/**
 表单标题字体大小，缺省为16
 */
extern CGFloat const SW_TitleFont;

/**
 表单详情字体大小，缺省为16
 */
extern CGFloat const SW_InfoFont;

/**
 表单条目边缘距离，缺省为10.0f
 */
extern CGFloat const SW_EdgeMargin;

/**
 表单标题宽度，缺省为100.0f
 */
extern CGFloat const SW_TitleWidth;

/**
 表单标题高度，缺省为24.0f
 */
extern CGFloat const SW_TitleHeight;

/**
 表单条目初始高度，缺省为44.0f，为确保显示正常，设置值>= 44
 */
extern CGFloat const SW_DefaultItemHeight;

/**
 表单标题显示类别，缺省为 SWTitleShowTypeRedStarFront
 */
extern NSInteger const SW_TitleShowType;

/**
 表单输入字数限制，缺省为200
 0 表示无限制
 */
extern NSInteger const SW_GlobalMaxInputLength;

/**
 表单选择图片附件数，缺省为6
 0 表示为无限制(不建议)
 */
extern NSInteger const SW_GlobalMaxImages;

/**
 表单条目输入框占位符字体颜色
 */
#define SW_PLACEHOLDERCOLOR [UIColor colorWithRed:187/255.0 green:187/255.0 blue:187/255.0 alpha:1/1.0]

/**
 表单条目标题颜色
 */
#define SW_TITLECOLOR [UIColor colorWithRed:51/255.0 green:51/255.0 blue:51/255.0 alpha:1/1.0]

/**
 获取屏幕宽度
 */
#ifndef SW_SCRREN_WIDTH
#define SW_SCRREN_WIDTH [UIScreen mainScreen].bounds.size.width
#endif
