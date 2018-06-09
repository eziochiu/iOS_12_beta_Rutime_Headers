/* made by EzioChiu.
 */

@protocol TableViewManagerDelegate

@optional

- (void)accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1;
- (void)buttonTouchedInCellAtIndexPath:(NSIndexPath *)arg1 forButtonIndex:(unsigned long long)arg2;
- (void)commitEditingStyle:(long long)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (bool)isRepresentedObject:(id)arg1 identicalToRepresentedObject:(id)arg2;
- (void)segmentedControlTouchedInCellAtIndexPath:(NSIndexPath *)arg1 forSegmentedControlIndex:(long long)arg2 selectedSegment:(long long)arg3;
- (void)selectedDateChangedInCellAtIndexPath:(NSIndexPath *)arg1 forDatePickerIndex:(unsigned long long)arg2 withDate:(NSDate *)arg3;
- (bool)shouldChangeTextField:(UITextField *)arg1 atIndexPath:(NSIndexPath *)arg2 forTextIndex:(unsigned long long)arg3 toString:(NSString *)arg4;
- (bool)shouldHandleReturnForTextField:(UITextField *)arg1 atIndexPath:(NSIndexPath *)arg2 forTextIndex:(unsigned long long)arg3;
- (bool)shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (void)switchTouchedInCellAtIndexPath:(NSIndexPath *)arg1 forSwitchIndex:(unsigned long long)arg2 isOn:(bool)arg3;
- (void)textFieldDidChangeAtIndexPath:(NSIndexPath *)arg1;
- (void)textFieldDidEndEditingAtIndexPath:(NSIndexPath *)arg1;
- (void)touchInCellAtIndexPath:(NSIndexPath *)arg1;
- (id)valueForItemOfType:(NSString *)arg1 atTypeIndex:(unsigned long long)arg2 inCellAtIndexPath:(NSIndexPath *)arg3;
- (id)valueForItemOfType:(NSString *)arg1 atTypeIndex:(unsigned long long)arg2 inCellWithTag:(long long)arg3;

@end
