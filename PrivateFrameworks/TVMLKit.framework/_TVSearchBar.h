/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSearchBar : UIView <UIKeyInput> {
    UIActivityIndicatorView * _activityIndicatorView;
    <_TVSearchBarDelegate> * _delegate;
    UITextField * _textField;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVSearchBarDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, readonly) UITextField *textField;

+ (id)_listItemSelectedOverlayFillColor;
+ (id)_listItemTextColor;

- (void).cxx_destruct;
- (void)_insertSpace:(id)arg1;
- (void)_submit:(id)arg1;
- (id)activityIndicatorView;
- (bool)canBecomeFirstResponder;
- (bool)canBecomeFocused;
- (id)delegate;
- (void)deleteBackward;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (id)keyCommands;
- (void)layoutSubviews;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textField;

@end
