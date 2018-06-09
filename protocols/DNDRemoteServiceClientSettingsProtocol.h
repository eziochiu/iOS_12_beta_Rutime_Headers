/* made by EzioChiu.
 */

@protocol DNDRemoteServiceClientSettingsProtocol <NSObject>

@required

- (void)deliverUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg1;
- (void)deliverUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg1;
- (void)deliverUpdatedScheduleSettings:(DNDScheduleSettings *)arg1;

@end
