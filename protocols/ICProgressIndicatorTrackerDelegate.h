/* made by EzioChiu.
 */

@protocol ICProgressIndicatorTrackerDelegate <NSObject>

@required

- (void)progressIndicatorTrackerStartAnimation;
- (void)progressIndicatorTrackerStopAnimation;

@end
