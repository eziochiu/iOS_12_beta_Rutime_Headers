/* made by EzioChiu.
 */

@protocol HMAccessorySettingsDelegate <NSObject>

@required

- (void)settingsDidUpdate:(HMAccessorySettings *)arg1;

@optional

- (void)settingsWillUpdate:(HMAccessorySettings *)arg1;

@end
