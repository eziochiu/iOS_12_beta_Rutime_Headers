/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarAccountEditItem : EKCalendarEditItem

- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (bool)calendarEditor:(id)arg1 shouldSelectSubitem:(unsigned long long)arg2;
- (bool)canAddCalendarToMoreThanOneAccount;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)currentSource;

@end
