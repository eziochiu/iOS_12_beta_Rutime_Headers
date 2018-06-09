/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarCardHighlightView : UIView {
    CALayer * _highlightLayer;
}

@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) CALayer *highlightLayer;
@property (nonatomic, readonly) bool highlighted;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)awakeFromNib;
- (id)highlightColor;
- (id)highlightLayer;
- (bool)highlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setHighlightColor:(id)arg1;
- (void)setHighlightLayer:(id)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;

@end
