/* made by EzioChiu.
 */

@protocol HMDLogEventObserver <NSObject>

@required

- (void)dispatcher:(HMDLogEventDispatcher *)arg1 didReceiveEvent:(HMDLogEvent *)arg2;

@end
