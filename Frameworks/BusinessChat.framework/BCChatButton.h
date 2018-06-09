/* made by EzioChiu
   Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

@interface BCChatButton : UIControl {
    UIView * _centeredView;
    UIImageView * _iconImageView;
    bool  _isInverted;
    UILabel * _label;
    UILabel * _smallLabel;
    long long  _style;
}

@property (nonatomic, retain) UIView *centeredView;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic) bool isInverted;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UILabel *smallLabel;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_setStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })calculateButtonLayout;
- (id)centeredView;
- (id)color:(struct BCColor { double x1; double x2; double x3; double x4; })arg1;
- (void)createSubviews;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)iconImageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isInverted;
- (id)label;
- (void)layoutSubviews;
- (void)setAccessibilityValues;
- (void)setCenteredView:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setIsInverted:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setOpacityForView:(id)arg1 opacity:(double)arg2;
- (void)setSmallLabel:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTextForLabel:(id)arg1 label:(id)arg2;
- (void)setup;
- (void)sizeToFit;
- (id)smallLabel;
- (long long)style;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateAppearanceForState:(long long)arg1;
- (void)updateButtonLayout;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
