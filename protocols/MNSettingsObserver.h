/* made by EzioChiu.
 */

@protocol MNSettingsObserver <NSObject>

@required

- (void)settingsManager:(MNSettingsManager *)arg1 didUpdateSettings:(MNSettings *)arg2 previousSettings:(MNSettings *)arg3;

@end
