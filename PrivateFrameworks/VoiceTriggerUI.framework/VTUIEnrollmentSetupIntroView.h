/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIEnrollmentSetupIntroView : VTUIEnrollmentStateView <UITextViewDelegate> {
    VTUIButton * _continueButton;
    UIView * _footerView;
    NSString * _languageCode;
    VTUIButton * _laterButton;
    <VTUIEnrollmentSetupIntroViewDelegate> * _stateViewDelegate;
}

@property (nonatomic, readonly) VTUIButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *languageCode;
@property (nonatomic, readonly) VTUIButton *laterButton;
@property (nonatomic) <VTUIEnrollmentSetupIntroViewDelegate> *stateViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createFooter;
- (id)_createLightFooter;
- (void)_setupContent;
- (void)_setupImage;
- (void)cleanupEducationalVideos;
- (id)continueButton;
- (id)footerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)languageCode;
- (id)laterButton;
- (void)prepareEducationalVideos;
- (void)setStateViewDelegate:(id)arg1;
- (id)stateViewDelegate;
- (bool)suppressFinishButton;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)viewSupportsEducationalVideo;

@end
