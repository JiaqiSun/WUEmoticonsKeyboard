//
//  WUEmoticonsKeyboardKeyItem.h
//  WeicoUI
//
//  Created by YuAo on 1/24/13.
//  Copyright (c) 2013 微酷奥(北京)科技有限公司. All rights reserved.
//

// =========================================
//    表情键盘item 模型
// =========================================

#import <Foundation/Foundation.h>

@interface WUEmoticonsKeyboardKeyItem : NSObject
/// 标题
@property (nonatomic,copy)    NSString *title;
/// 图片
@property (nonatomic,strong)  UIImage  *image;
/// 图片文字 按着图片不放 会有放大效果 效果显示 该表情和文字   
@property (nonatomic,copy)    NSString *textToInput;
@end
