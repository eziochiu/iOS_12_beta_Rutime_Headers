/* made by EzioChiu.
 */

@protocol CRKSettingsUIVisibilityProvider <NSObject>

@required

- (void)connectToDaemon;
- (bool)settingsUIVisible;

@end
