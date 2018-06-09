/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIInviteesViewAllInviteesCanAttendSection : EKUIInviteesViewAlternativeTimeSection

- (Class)customTimeCellClass;
- (id)headerTitle;
- (unsigned long long)initialNumberOfTimeSlotsToShow;
- (void)searchForMoreTimes;
- (id)searcherTimeSlots;
- (bool)searchingForMoreTimes;

@end
