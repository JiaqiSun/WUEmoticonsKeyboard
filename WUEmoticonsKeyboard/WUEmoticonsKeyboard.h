//
//  WUEmoticonsKeyboard.h
//  WeicoUI
//
//  Created by YuAo on 1/24/13.
//  Copyright (c) 2013 微酷奥(北京)科技有限公司. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WUEmoticonsKeyboardKeyItemGroup.h"
#import "WUEmoticonsKeyboardKeyItem.h"
#import "WUEmoticonsKeyboardKeysPageFlowLayout.h"
#import "WUEmoticonsKeyboardKeyCell.h"

/// 点击选择键盘按钮 通知
extern NSString * const WUEmoticonsKeyboardDidSwitchToDefaultKeyboardNotification;
/// 键盘默认大小
extern CGSize const WUEmoticonsKeyboardDefaultSize;

typedef NS_ENUM(NSUInteger, WUEmoticonsKeyboardButton) {
    WUEmoticonsKeyboardButtonKeyboardSwitch,
    WUEmoticonsKeyboardButtonBackspace,
    WUEmoticonsKeyboardButtonSpace
};

@interface WUEmoticonsKeyboard : UIView <UIAppearance,UIAppearanceContainer>

@property (nonatomic)      BOOL    enableStandardSystemKeyboardClickSound;

/*
 an array of WUEmoticonsKeyboardKeyItemGroup.
 */
@property (nonatomic,copy) NSArray *keyItemGroups;

@property (nonatomic,copy) void    (^keyItemGroupPressedKeyCellChangedBlock)(WUEmoticonsKeyboardKeyItemGroup *keyItemGroup, WUEmoticonsKeyboardKeyCell *fromKeyCell, WUEmoticonsKeyboardKeyCell *toKeyCell);
/*
 Note:
 Use the `UIResponder (WUEmoticonsKeyboard)` -switchToEmoticonsKeyboard: method to make a textInput switch to a WUEmoticonsKeyboard.
 The textInput object will retain the WUEmoticonsKeyboard which attached to it.
 
 You may get the WUEmoticonsKeyboard object though the textInput's inputView or emoticonsKeyboard property.
*/
@property (nonatomic,weak,readonly) UIResponder<UITextInput> *textInput;

+ (instancetype)keyboard;

#pragma mark - Apperance
#pragma mark 设置背景图片
- (void)setBackgroundImage:(UIImage *)image UI_APPEARANCE_SELECTOR;
- (void)setBackgroundImage:(UIImage *)image forKeyItemGroup:(WUEmoticonsKeyboardKeyItemGroup *)keyItemGroup UI_APPEARANCE_SELECTOR;
#pragma mark 设置背景颜色
- (void)setBackgroundColor:(UIColor *)backgroundColor forKeyItemGroup:(WUEmoticonsKeyboardKeyItemGroup *)keyItemGroup UI_APPEARANCE_SELECTOR;
#pragma mark 设置按钮颜色
- (void)setImage:(UIImage *)image forButton:(WUEmoticonsKeyboardButton)button state:(UIControlState)state UI_APPEARANCE_SELECTOR;
#pragma mark 设置按钮图片
- (UIImage *)imageForButton:(WUEmoticonsKeyboardButton)button state:(UIControlState)state;
#pragma mark 设置按钮背景tup
- (void)setBackgroundImage:(UIImage *)image forButton:(WUEmoticonsKeyboardButton)button state:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (UIImage *)backgroundImageForButton:(WUEmoticonsKeyboardButton)button state:(UIControlState)state;
#pragma mark 设置属性文本
- (void)setAttributedTitle:(NSAttributedString *)title forButton:(WUEmoticonsKeyboardButton)button state:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (NSAttributedString *)attributedTitleForButton:(WUEmoticonsKeyboardButton)button state:(UIControlState)state;

@property (nonatomic) CGFloat toolsViewHeight UI_APPEARANCE_SELECTOR; //Default 45.0f

@end

@interface UIResponder (WUEmoticonsKeyboard)
/**
 *   自定义键盘
 */
@property (readonly, strong) WUEmoticonsKeyboard *emoticonsKeyboard;
#pragma mark - 选择默认键盘
- (void)switchToDefaultKeyboard;
#pragma mark - 选择自定义键盘
- (void)switchToEmoticonsKeyboard:(WUEmoticonsKeyboard *)keyboard;
@end