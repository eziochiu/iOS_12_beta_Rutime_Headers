/* made by EzioChiu.
 */

@protocol DNDSSettingsManagerDelegate <NSObject>

@required

- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedBehaviorSettings:(DNDBehaviorSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedPhoneCallBypassSettings:(DNDBypassSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedScheduleSettings:(DNDScheduleSettings *)arg2;
- (void)settingsManager:(DNDSSettingsManager *)arg1 didReceiveUpdatedSyncSettings:(DNDSSyncSettings *)arg2;

@end
