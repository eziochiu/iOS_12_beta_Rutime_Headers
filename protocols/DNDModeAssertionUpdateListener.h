/* made by EzioChiu.
 */

@protocol DNDModeAssertionUpdateListener <NSObject>

@required

- (void)modeAssertionService:(DNDModeAssertionService *)arg1 didReceiveModeAssertionInvalidation:(DNDModeAssertionInvalidation *)arg2;

@end
