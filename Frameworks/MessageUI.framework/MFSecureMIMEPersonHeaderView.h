/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFSecureMIMEPersonHeaderView : UIView {
    NSArray * _buttons;
    unsigned int  _editing;
    UILabel * _label;
    UIView * _secureLabel;
    UIView * _signedLabel;
    UIView * _warningLabel;
}

@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic) bool editing;
@property (nonatomic, copy) NSString *explanationText;
@property (nonatomic, copy) NSString *secureLabelText;
@property (nonatomic, copy) NSString *signedLabelText;
@property (nonatomic, copy) NSString *warningLabelText;

+ (id)_explanationLabelDefaultAttributes;

- (void)_insert:(bool)arg1 subview:(id)arg2;
- (id)_secureLabel;
- (void)_setText:(id)arg1 forLabel:(id)arg2;
- (id)_signedLabel;
- (id)_warningLabel;
- (id)buttons;
- (void)dealloc;
- (bool)editing;
- (id)explanationText;
- (double)heightOfBottomMargin;
- (double)heightThatFitsButtons;
- (double)heightThatFitsMainLabel:(struct CGSize { double x1; double x2; })arg1;
- (double)heightThatFitsSubview:(id)arg1 padding:(double)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)secureLabelText;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButtons:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setExplanationText:(id)arg1;
- (void)setSecureLabelText:(id)arg1;
- (void)setSignedLabelText:(id)arg1;
- (void)setWarningLabelText:(id)arg1;
- (bool)showsButtons;
- (id)signedLabelText;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)warningLabelText;
- (double)widthForSizingToFitSize:(struct CGSize { double x1; double x2; })arg1;

@end
