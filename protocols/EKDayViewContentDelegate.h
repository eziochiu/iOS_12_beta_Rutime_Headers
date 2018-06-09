/* made by EzioChiu.
 */

@protocol EKDayViewContentDelegate <NSObject>

@required

- (void)dayViewContent:(EKDayViewContent *)arg1 didTapInEmptySpaceOnDay:(double)arg2;
- (void)dayViewContent:(EKDayViewContent *)arg1 didTapPinnedOccurrence:(EKEvent *)arg2;

@optional

- (void)dayViewContent:(EKDayViewContent *)arg1 didCreateOccurrenceViews:(NSArray *)arg2;
- (void)dayViewContent:(EKDayViewContent *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)occurrencePressed:(EKEvent *)arg1 onDay:(double)arg2;

@end
