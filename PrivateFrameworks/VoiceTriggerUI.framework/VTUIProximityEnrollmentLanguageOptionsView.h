/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

@interface VTUIProximityEnrollmentLanguageOptionsView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIView * _containerView;
    VTUIButton * _continueButton;
    NSArray * _continueButtonsLanguages;
    UIView * _footerView;
    UIPickerView * _languagesPickerView;
    UIView * _languagesView;
    UILabel * _settingsLabel;
    UILabel * _titleLabel;
    VTUIStyle * _vtStyle;
}

@property (nonatomic, readonly) VTUIButton *continueButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPickerView *languagesPickerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupContent;
- (id)continueButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 languageOptions:(id)arg2;
- (id)languagesPickerView;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;

@end
