/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSimpleDataEntryPlainTextItem : HKSimpleDataEntryItem <HKSimpleDataEntryCellDelegate> {
    HKSimpleDataEntryPlainTextCell * _cell;
    long long  _intention;
    NSString * _registrantModelKey;
    NSString * _text;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cell;
- (void)doneButtonTapped:(id)arg1;
- (id)formattedKeyAndValue;
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 defaultText:(id)arg3 intention:(long long)arg4;
- (void)textFieldDidChangeValue:(id)arg1 forCell:(id)arg2;
- (void)updateCellDisplay;

@end
