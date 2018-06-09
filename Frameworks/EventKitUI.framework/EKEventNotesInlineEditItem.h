/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventNotesInlineEditItem : EKEventEditItem <EKCalendarItemInlineEditItem, UITextViewDelegate> {
    CalendarNotesCell * _cell;
    NSString * _lastTextChange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;
- (bool)isInline;
- (bool)isSaveable;
- (void)reset;
- (bool)saveAndDismissWithForce:(bool)arg1;
- (id)searchStringForEventAutocomplete;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (bool)textViewShouldReturn:(id)arg1;

@end
