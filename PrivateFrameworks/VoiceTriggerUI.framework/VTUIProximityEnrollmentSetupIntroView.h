/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIProximityEnrollmentSetupIntroView : UIView <UITextViewDelegate> {
    UIView * _containerView;
    UIImageView * _imageView;
    UIView * _imageViewContainer;
    NSString * _languageCode;
    VTUIButton * _notNowButton;
    VTUIButton * _setupButton;
    <VTUIEnrollmentSetupIntroViewDelegate> * _stateViewDelegate;
    UILabel * _subtitleLabel;
    UITextView * _termsAndConds;
    UILabel * _titleLabel;
    VTPreferences * _vtPrefs;
    VTUIStyle * _vtStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VTUIButton *notNowButton;
@property (nonatomic, readonly) VTUIButton *setupButton;
@property (nonatomic) <VTUIEnrollmentSetupIntroViewDelegate> *stateViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setImage:(id)arg1;
- (void)_setupConstraints;
- (void)_setupContent;
- (void)_setupImage;
- (void)_setupTermsAndConditions;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)notNowButton;
- (void)setStateViewDelegate:(id)arg1;
- (id)setupButton;
- (id)stateViewDelegate;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;

@end
