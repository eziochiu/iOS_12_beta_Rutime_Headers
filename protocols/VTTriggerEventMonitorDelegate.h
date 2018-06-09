/* made by EzioChiu.
 */

@protocol VTTriggerEventMonitorDelegate <NSObject>

@required

- (void)earlyDetected;
- (void)voiceTriggered;

@end
