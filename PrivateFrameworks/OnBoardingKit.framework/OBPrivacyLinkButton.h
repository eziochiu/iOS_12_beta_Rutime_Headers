/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

@interface OBPrivacyLinkButton : UIButton {
    NSString * _buttonText;
    NSString * _captionText;
    UIView * _containerView;
    OBTintInheritingImageView * _iconView;
    UITextView * _textView;
}

@property (readonly) NSString *buttonText;
@property (readonly) NSString *captionText;
@property (readonly) UIView *containerView;
@property (readonly) OBTintInheritingImageView *iconView;
@property (readonly) UITextView *textView;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_rangeForButtonText;
- (id)_textViewFont;
- (void)_updateButtonColorWithColor:(id)arg1;
- (id)buttonText;
- (id)captionText;
- (id)containerView;
- (id)iconView;
- (id)initWithCaption:(id)arg1 buttonText:(id)arg2 image:(id)arg3 imageSize:(struct CGSize { double x1; double x2; })arg4 useLargeIcon:(bool)arg5;
- (id)labelText;
- (void)layoutSubviews;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (id)textView;
- (void)tintColorDidChange;
- (id)titleForState:(unsigned long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForLastBaselineLayout;

@end
