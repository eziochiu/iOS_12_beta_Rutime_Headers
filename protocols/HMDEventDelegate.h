/* made by EzioChiu.
 */

@protocol HMDEventDelegate <NSObject>

@required

- (HMDEventTriggerExecutionSession *)didOccurEvent:(HMDEvent *)arg1 causingDevice:(HMDEventTriggerDevice *)arg2;

@end
