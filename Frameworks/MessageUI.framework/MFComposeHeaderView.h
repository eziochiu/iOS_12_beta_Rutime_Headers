/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeHeaderView : UIView {
    id  _delegate;
    UIView * _highlightBackgroundView;
    MFHeaderLabelView * _labelView;
    NSString * _navTitle;
    UIView * _separator;
    bool  _showsHighlightWhenTouched;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) MFHeaderLabelView *labelView;
@property (nonatomic, copy) NSString *navTitle;
@property (nonatomic) bool showsHighlightWhenTouched;

+ (double)_labelTopPaddingSpecification;
+ (id)defaultFont;
+ (id)defaultSeparatorColor;
+ (double)preferredHeight;
+ (double)separatorHeight;

- (id)_automationID;
- (id)_baseAttributes;
- (bool)_canBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_exclusionRectForView:(id)arg1 alongEdge:(unsigned long long)arg2;
- (id)_highlightedBackgroundView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_recipientViewEdgeInsets;
- (bool)_shouldEmbedLabelInTextView;
- (void)dealloc;
- (void)handleTouchesEnded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (id)labelColor;
- (double)labelTopPadding;
- (id)labelView;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (id)navTitle;
- (void)refreshPreferredContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setLabel:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setShowsHighlightWhenTouched:(bool)arg1;
- (bool)showsHighlightWhenTouched;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleLabelBaselineAlignmentRectForLabel:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
