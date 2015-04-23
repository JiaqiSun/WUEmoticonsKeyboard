//
//  WUEmoticonsKeyboardKeyCell.h
//  WeicoUI
//
//  Created by YuAo on 1/24/13.
//  Copyright (c) 2013 微酷奥(北京)科技有限公司. All rights reserved.
//

// =========================================
//   表情键盘 的 cell  图片cell
// =========================================
#import <UIKit/UIKit.h>
#import "WUEmoticonsKeyboardKeyItem.h"

@interface WUEmoticonsKeyboardKeyCell : UICollectionViewCell
/// 键盘按钮
@property (nonatomic,weak,readonly) UIButton *keyButton;
/// 按钮模型
@property (nonatomic,strong) WUEmoticonsKeyboardKeyItem *keyItem;
@end
