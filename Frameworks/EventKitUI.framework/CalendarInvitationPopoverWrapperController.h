/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface CalendarInvitationPopoverWrapperController : UINavigationController {
    EKEventViewController * _eventViewController;
}

@property (nonatomic, retain) EKEventViewController *eventViewController;

- (void).cxx_destruct;
- (id)eventViewController;
- (id)initForEventUID:(int)arg1;
- (void)setEventViewController:(id)arg1;

@end
