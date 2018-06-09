/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTriggerDurationPickerCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    HUTriggerDurationPickerValue * _currentDurationValue;
    <HUTriggerDurationPickerDelegate> * _delegate;
    NSArray * _durationOptions;
    UIPickerView * _pickerView;
}

@property (nonatomic, retain) NSNumber *currentDuration;
@property (nonatomic, retain) HUTriggerDurationPickerValue *currentDurationValue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUTriggerDurationPickerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *durationOptions;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIPickerView *pickerView;
@property (readonly) Class superclass;

+ (id)_defaultDurationOptions;

- (void).cxx_destruct;
- (void)_updateDurationOptions;
- (id)currentDuration;
- (id)currentDurationValue;
- (id)delegate;
- (id)durationOptions;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerDurationValue;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setCurrentDuration:(id)arg1;
- (void)setCurrentDurationValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDurationOptions:(id)arg1;

@end
