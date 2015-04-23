//
//  WUEmoticonsKeyboardKeyItemGroupView.h
//  WeicoUI
//
//  Created by YuAo on 1/25/13.
//  Copyright (c) 2013 微酷奥(北京)科技有限公司. All rights reserved.
//

// =========================================
//    表情itemGroupView 视图
// =========================================

#import <UIKit/UIKit.h>
#import "WUEmoticonsKeyboardKeyItemGroup.h"
#import "WUEmoticonsKeyboardKeyItem.h"
#import "WUEmoticonsKeyboardKeyCell.h"

@interface WUEmoticonsKeyboardKeyItemGroupView : UIView
/// keyItemGroup
@property (nonatomic,strong)        WUEmoticonsKeyboardKeyItemGroup *keyItemGroup;
/// 点击该组的按钮做的操作的代码块
@property (nonatomic,copy)          void                            (^keyItemTappedBlock)(WUEmoticonsKeyboardKeyItem *keyItem);
/// 点击其他按钮要做的操作的代码块 (fromKeyCell,toKeyCell)从哪个按钮到哪个按钮
@property (nonatomic,copy)          void                            (^pressedKeyItemCellChangedBlock)(WUEmoticonsKeyboardKeyCell *fromKeyCell, WUEmoticonsKeyboardKeyCell *toKeyCell);
/// 背景
@property (nonatomic,weak,readonly) UIImageView                     *backgroundImageView;
@end
