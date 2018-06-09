/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailProposedTimeCell : EKEventDetailCell {
    EKCalendarEventInvitationNotificationAttendee * _attendee;
    EKEventDetailsHighlightControl * _control;
    EKEvent * _event;
}

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (bool)hasCustomLayout;
- (id)initWithEvent:(id)arg1 andAttendee:(id)arg2;
- (bool)shouldDisplayForEvent;
- (bool)update;

@end
