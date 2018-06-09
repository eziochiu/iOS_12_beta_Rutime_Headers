/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKOrganDonationAddressEntryItem : HKSimpleDataEntryItem <HKSimpleDataEntryCellDelegate, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSString * _address1;
    NSString * _address2;
    HKOrganDonationAddressCell * _cell;
    NSString * _city;
    NSArray * _sortedStateKeys;
    NSString * _state;
    UIPickerView * _statePicker;
    NSDictionary * _statesDict;
    NSString * _zipcode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cell;
- (id)formattedKeyAndValue;
- (id)initWithRegistrant:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2;
- (void)updateCellDisplay;

@end
