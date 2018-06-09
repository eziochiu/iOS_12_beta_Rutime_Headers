/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryMultipleChoiceItem : HKSimpleDataEntryItem <UIPickerViewDataSource, UIPickerViewDelegate> {
    HKSimpleDataEntryPlainTextCell * _cell;
    NSArray * _choiceDisplayValues;
    NSArray * _choices;
    NSNumber * _chosenIndex;
    UIPickerView * _picker;
    NSString * _registrantModelKey;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setTextForInputTextField:(id)arg1;
- (void)_setupPlaceholder;
- (id)cell;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 choices:(id)arg3 choiceDisplayNames:(id)arg4 defaultChoice:(id)arg5;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)updateCellDisplay;

@end
