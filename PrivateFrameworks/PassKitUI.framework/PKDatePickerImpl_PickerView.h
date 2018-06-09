/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {
    NSCalendar * _calendar;
    unsigned long long  _calendarUnit;
    SEL  _changeAction;
    id  _changeTarget;
    NSDateFormatter * _dateFormatter;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _possibleRange;
}

@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dateComponentsForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2;
- (id)_dateForIndex:(unsigned long long)arg1;
- (id)_dateFormatForCalendarUnit:(unsigned long long)arg1;
- (unsigned long long)_defaultIndex;
- (unsigned long long)_numberOfItems;
- (id)_stringForIndex:(unsigned long long)arg1;
- (id)date;
- (void)dealloc;
- (id)initShowingDay:(bool)arg1 month:(bool)arg2 year:(bool)arg3 useDarkAppearance:(bool)arg4;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (void)prepareToDie;
- (void)setDate:(id)arg1;
- (void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end
