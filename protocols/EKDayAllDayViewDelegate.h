/* made by EzioChiu.
 */

@protocol EKDayAllDayViewDelegate <NSObject>

@optional

- (void)allDayView:(EKDayAllDayView *)arg1 didSelectEvent:(EKEvent *)arg2;
- (void)allDayViewDidLayoutSubviews:(EKDayAllDayView *)arg1;

@end
