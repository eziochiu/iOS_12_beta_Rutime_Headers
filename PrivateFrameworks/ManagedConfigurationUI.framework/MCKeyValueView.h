/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCKeyValueView : UIView {
    UILabel * _keyLabel;
    double  _preferredValueLabelOriginX;
    UILabel * _valueLabel;
    UIImageView * _verifiedImageView;
    UILabel * _verifiedLabel;
}

@property (nonatomic, retain) UILabel *keyLabel;
@property (nonatomic) double preferredValueLabelOriginX;
@property (nonatomic, retain) UILabel *valueLabel;
@property (nonatomic, retain) UIImageView *verifiedImageView;
@property (nonatomic, retain) UILabel *verifiedLabel;

+ (double)defaultPreferredValueLabelOriginX;

- (void).cxx_destruct;
- (void)_createVerifiedComponentsIfNeeded;
- (double)desiredValueLabelOriginXForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)detailFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)keyLabel;
- (void)layoutSubviews;
- (double)preferredValueLabelOriginX;
- (void)setCheckmarkLabelText:(id)arg1 checkmarkLabelColor:(id)arg2 showCheckmark:(bool)arg3;
- (void)setHighlightTextColor:(id)arg1;
- (void)setItemDetail:(id)arg1;
- (void)setKey:(id)arg1 value:(id)arg2;
- (void)setKeyLabel:(id)arg1;
- (void)setPreferredValueLabelOriginX:(double)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setVerifiedImageView:(id)arg1;
- (void)setVerifiedLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleFont;
- (id)valueLabel;
- (id)verifiedColor;
- (id)verifiedFont;
- (id)verifiedImageView;
- (id)verifiedLabel;

@end
