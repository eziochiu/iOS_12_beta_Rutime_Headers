/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPreviewActionSheetTitleView : UIView {
    UILabel * _label;
    NSString * _title;
}

@property (nonatomic) UILabel *label;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_contentSizeChanged:(id)arg1;
- (void)_updateLabelFont;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 title:(id)arg2;
- (id)label;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
