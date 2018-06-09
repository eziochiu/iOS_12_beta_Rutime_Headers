/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UINavBarPrompt : UIView {
    UILabel * _label;
    UINavigationBar * _navBar;
}

@property (nonatomic, copy) NSString *prompt;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelFrame;
- (struct CGSize { double x1; double x2; })_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGSize { double x1; double x2; })_updateLabelTextColorAndFontReturningShadowOffset_legacy;
- (id)initWithNavBar:(id)arg1;
- (void)layoutSubviews;
- (id)prompt;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })promptBounds;
- (void)setPrompt:(id)arg1;

@end
