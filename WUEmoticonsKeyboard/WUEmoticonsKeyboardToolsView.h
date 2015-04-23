//
//  WUEmoticonsKeyboardToolsView.h
//  WeicoUI
//
//  Created by YuAo on 1/25/13.
//  Copyright (c) 2013 微酷奥(北京)科技有限公司. All rights reserved.
//


// =========================================
//    表情键盘工具视图
// =========================================

#import <UIKit/UIKit.h>
#import "WUEmoticonsKeyboardKeyItemGroup.h"

@interface WUEmoticonsKeyboardToolsView : UIView
/// 表情itemGroup数组
@property (nonatomic,strong) NSArray *keyItemGroups;

@property (nonatomic,copy)   void    (^keyboardSwitchButtonTappedBlock)(void);
@property (nonatomic,copy)   void    (^backspaceButtonTappedBlock)(void);
@property (nonatomic,copy)   void    (^spaceButtonTappedBlock)(void);
@property (nonatomic,copy)   void    (^keyItemGroupSelectedBlock)(WUEmoticonsKeyboardKeyItemGroup *keyItemGroup);

/// 选择输入键盘 按钮 可切换键盘
@property (nonatomic,weak,readonly) UIButton *keyboardSwitchButton;
/// 撤销按钮
@property (nonatomic,weak,readonly) UIButton *backspaceButton;
/// 空白按钮 就是 表情itemGroup数组> 0 隐藏
@property (nonatomic,weak,readonly) UIButton *spaceButton;

@end
