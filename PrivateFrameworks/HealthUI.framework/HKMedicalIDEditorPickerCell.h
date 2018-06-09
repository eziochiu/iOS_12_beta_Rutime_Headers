/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    long long  _chosenValueIndex;
    UIPickerView * _picker;
    NSArray * _possibleValues;
}

@property (nonatomic) long long chosenValueIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *possibleValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hidePicker;
- (void)_showPicker;
- (void)beginEditing;
- (long long)chosenValueIndex;
- (void)commitEditing;
- (void)dealloc;
- (id)formattedValue;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)possibleValues;
- (void)setChosenValueIndex:(long long)arg1;
- (void)setPossibleValues:(id)arg1;

@end
