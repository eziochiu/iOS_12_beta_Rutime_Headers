/* made by EzioChiu.
 */

@protocol XRFrameActivityManager <NSObject>

@required

- (void)_activityYielded:(XRFrameActivity *)arg1;
- (bool*)_shouldYieldFlag;

@end
