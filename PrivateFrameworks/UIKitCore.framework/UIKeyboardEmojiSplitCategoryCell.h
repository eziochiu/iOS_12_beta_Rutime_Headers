/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell {
    UIView * _selectedCircle;
    UIImageView * _symbol;
    UILabel * _title;
}

@property (nonatomic, retain) UIView *selectedCircle;
@property (nonatomic, retain) UIImageView *symbol;
@property (nonatomic, retain) UILabel *title;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)selectedCircle;
- (void)setPressIndicatorHidden:(bool)arg1;
- (void)setSelectedCircle:(id)arg1;
- (void)setSelectedCircleBlendMode:(bool)arg1;
- (void)setSymbol:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)symbol;
- (id)symbolFont;
- (id)title;
- (id)titleFont;

@end
