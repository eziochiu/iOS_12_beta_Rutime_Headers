/* made by EzioChiu.
 */

@protocol EKEventGestureControllerDelegate <NSObject>

@required

- (EKEvent *)createEventForEventGestureController:(EKEventGestureController *)arg1;
- (EKDayOccurrenceView *)createOccurrenceViewForEventGestureController:(EKEventGestureController *)arg1;
- (UIViewController *)currentPresentationController;
- (bool)didScrollWhenEventGestureController:(EKEventGestureController *)arg1 scrollTimerFiredToMoveLeft:(bool)arg2 right:(bool)arg3 vertically:(bool)arg4 towardPoint:(struct CGPoint { double x1; double x2; })arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 addViewToScroller:(UIView *)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 adjustDraggingViewForAllDay:(bool)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 dateAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 didCancelEditingOccurrence:(EKEvent *)arg2 fadedOut:(bool)arg3;
- (bool)eventGestureController:(EKEventGestureController *)arg1 didCommitOccurrence:(EKEvent *)arg2 toDate:(double)arg3 isAllDay:(bool)arg4 span:(long long)arg5;
- (void)eventGestureController:(EKEventGestureController *)arg1 didMoveToDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSetUpAtDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 didSingleTapOccurrence:(EKEvent *)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 heightForOccurrenceViewOfDuration:(double)arg2 allDay:(bool)arg3;
- (bool)eventGestureController:(EKEventGestureController *)arg1 isAllDayAtPoint:(struct CGPoint { double x1; double x2; })arg2 requireInsistence:(bool)arg3;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (EKDayOccurrenceView *)eventGestureController:(EKEventGestureController *)arg1 occurrenceViewForOccurrence:(EKEvent *)arg2;
- (struct CGPoint { double x1; double x2; })eventGestureController:(EKEventGestureController *)arg1 pointAtDate:(double)arg2 isAllDay:(bool)arg3;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsPresentationOfViewController:(UIViewController *)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 widthForOccurrenceViewOfDays:(unsigned long long)arg2;
- (double)eventGestureController:(EKEventGestureController *)arg1 yPositionPerhapsMatchingAllDayOccurrence:(EKEvent *)arg2 atPoint:(struct CGPoint { double x1; double x2; })arg3;
- (UIView *)occurrenceViewSuperviewForEventGestureController:(EKEventGestureController *)arg1;
- (double)timedRegionOriginForEventGestureController:(EKEventGestureController *)arg1;
- (UIView *)touchTrackingViewForEventGestureController:(EKEventGestureController *)arg1;

@optional

- (void)cleanUpAfterGestureFailureForEventGestureController:(EKEventGestureController *)arg1;
- (double)computeXDragOffsetForEventGestureController:(EKEventGestureController *)arg1 currentX:(double)arg2 startX:(double)arg3;
- (bool)eventEditorPopoverActiveWhileDraggingForEventGestureController:(EKEventGestureController *)arg1;
- (double)eventGestureController:(EKEventGestureController *)arg1 convertXForMargin:(double)arg2;
- (void)eventGestureController:(EKEventGestureController *)arg1 requestsShowEvent:(EKEvent *)arg2;
- (bool)eventGestureController:(EKEventGestureController *)arg1 shouldFadeOccurrenceAfterFling:(EKEvent *)arg2;
- (void)eventGestureControllerDidEndDragSession:(EKEventGestureController *)arg1;
- (bool)eventGestureControllerShouldAllowLongPress:(EKEventGestureController *)arg1;
- (bool)hasCorrectParentForDraggingView:(UIView *)arg1 isAllDay:(bool)arg2;
- (double)horizontalOffsetForPagingForEventGestureController:(EKEventGestureController *)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })marginFrameForEventGestureController:(EKEventGestureController *)arg1;
- (bool)moreThanOneDayVisibleForEventGestureController:(EKEventGestureController *)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })pageChangeMarginsForEventGestureController:(EKEventGestureController *)arg1;

@end
