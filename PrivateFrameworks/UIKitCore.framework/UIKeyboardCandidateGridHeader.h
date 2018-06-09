/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardCandidateGridHeader : UIView {
    UIKBBackdropView * _backdropView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _inlineTextInsets;
    UILabel * _inlineTextLabel;
    UIButton * _toggleButton;
}

@property (nonatomic, copy) NSString *arrowDirection;
@property (nonatomic, retain) UIKBBackdropView *backdropView;
@property (nonatomic, copy) NSString *inlineText;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } inlineTextInsets;
@property (nonatomic, retain) UILabel *inlineTextLabel;
@property (nonatomic, retain) UIButton *toggleButton;

- (void).cxx_destruct;
- (id)arrowDirection;
- (id)backdropView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inlineText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })inlineTextInsets;
- (id)inlineTextLabel;
- (void)layoutSubviews;
- (void)setArrowDirection:(id)arg1;
- (void)setBackdropView:(id)arg1;
- (void)setInlineText:(id)arg1;
- (void)setInlineTextInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInlineTextLabel:(id)arg1;
- (void)setToggleButton:(id)arg1;
- (id)toggleButton;

@end
