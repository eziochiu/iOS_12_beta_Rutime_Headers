/* made by EzioChiu.
 */

@protocol CAMClosedViewfinderControllerDelegate <NSObject>

@required

- (void)closedViewfinderController:(CAMClosedViewfinderController *)arg1 wantsViewfinderClosedForReason:(long long)arg2;
- (void)closedViewfinderController:(CAMClosedViewfinderController *)arg1 wantsViewfinderOpenForReason:(long long)arg2;

@end
