//
//  WUEmoticonsKeyboardKeyItemGroup.h
//  WeicoUI
//
//  Created by YuAo on 1/24/13.
//  Copyright (c) 2013 微酷奥(北京)科技有限公司. All rights reserved.
//

// =========================================
//    表情itemGroup 模型
// =========================================

#import <Foundation/Foundation.h>

@interface WUEmoticonsKeyboardKeyItemGroup : NSObject
/// 组标题
@property (nonatomic,copy)              NSString                 *title;
/// 组图片
@property (nonatomic,strong)            UIImage                  *image;
/// 组选中图片
@property (nonatomic,strong)            UIImage                  *selectedImage;
/// 键盘组items数组
@property (nonatomic,strong)            NSArray                  *keyItems;

/* CollectionViewLayout for this keyItemGroup, this property has a default value. Using WUEmoticonsKeyboardKeysPageFlowLayout is recommanded. */
/// 键盘布局
@property (nonatomic,strong)            UICollectionViewLayout   *keyItemsLayout;

/* CollectionViewCell class for this keyItemGroup. default is WUEmoticonsKeyboardKeyCell.class */
/// 键盘itemCell 类
@property (nonatomic,unsafe_unretained) Class                     keyItemCellClass;

@end
