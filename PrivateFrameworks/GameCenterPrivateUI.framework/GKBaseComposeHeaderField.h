/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBaseComposeHeaderField : UIImageView {
    SEL  _actionWhenTouched;
    unsigned long long  _maxLineCount;
    GKLabel * _nameLabel;
    GKHairlineView * _separatorView;
}

@property (nonatomic) SEL actionWhenTouched;
@property (nonatomic) unsigned long long maxLineCount;
@property (nonatomic, retain) GKLabel *nameLabel;
@property (nonatomic, retain) NSString *nameText;
@property (nonatomic, retain) GKHairlineView *separatorView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } valueFrame;
@property (nonatomic, retain) NSString *valueText;

- (SEL)actionWhenTouched;
- (void)addConstraintsForValueView:(id)arg1;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (unsigned long long)maxLineCount;
- (id)nameLabel;
- (id)nameText;
- (id)separatorView;
- (void)setActionWhenTouched:(SEL)arg1;
- (void)setMaxLineCount:(unsigned long long)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setNameText:(id)arg1;
- (void)setSeparatorView:(id)arg1;
- (void)setValueText:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })valueFrame;
- (id)valueText;
- (id)viewForBaselineLayout;

@end
