/* made by EzioChiu.
 */

@protocol EKDayViewControllerDelegate <NSObject>

@required

- (void)dayViewController:(EKDayViewController *)arg1 didChangeDisplayDate:(NSDateComponents *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 didSelectEvent:(EKEvent *)arg2 animated:(bool)arg3;

@optional

- (void)dayViewController:(EKDayViewController *)arg1 awaitsDeletingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 awaitsRefreshingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 beginEditingOccurrence:(EKEvent *)arg2;
- (EKEvent *)dayViewController:(EKDayViewController *)arg1 createEventAtDate:(NSDate *)arg2 allDay:(bool)arg3;
- (void)dayViewController:(EKDayViewController *)arg1 didStartDeceleratingTargettingDate:(NSDateComponents *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 handleGestureCommittingOccurrence:(EKEvent *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 requestsPresentationOfViewControllerForGestures:(UIViewController *)arg2;
- (void)dayViewController:(EKDayViewController *)arg1 requestsShowEvent:(EKEvent *)arg2 showDetails:(bool)arg3;
- (void)dayViewControllerDidChangeDisplayedOccurrences:(EKDayViewController *)arg1;
- (void)dayViewControllerDidEndDecelerating:(EKDayViewController *)arg1;
- (void)dayViewControllerDidEndScrolling:(EKDayViewController *)arg1;
- (void)dayViewControllerDidFinishPinchingDayView:(EKDayViewController *)arg1;
- (void)dayViewControllerDidReloadData:(EKDayViewController *)arg1;
- (void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(EKDayViewController *)arg1;
- (void)dayViewControllerDidTapEmptySpace:(EKDayViewController *)arg1;
- (void)dayViewControllerDidUpdateScrollPosition:(EKDayViewController *)arg1;
- (void)dayViewControllerIsPinchingDayView:(EKDayViewController *)arg1;
- (bool)dayViewControllerShouldAllowLongPress:(EKDayViewController *)arg1;
- (bool)dayViewControllerShouldEndGestureEditingOnTap:(EKDayViewController *)arg1;
- (bool)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(EKDayViewController *)arg1;
- (void)dayViewcontrollerDidBeginMovingEventWithGesture:(EKDayViewController *)arg1;
- (bool)dayviewControllerShouldAllowSwipeToChangeDays:(EKDayViewController *)arg1;
- (bool)delegateWantsToHandleDayViewController:(EKDayViewController *)arg1 gestureCommittingOccurrence:(EKEvent *)arg2;
- (void)updateSelectedOccurrenceView;

@end
