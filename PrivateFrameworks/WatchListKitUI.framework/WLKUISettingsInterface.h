/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUISettingsInterface : IKJSObject <WLKUISettingsInterface>

- (void)_handleSettingsDidChange:(id)arg1;
- (id)consentedBrands;
- (void)dealloc;
- (id)deniedBrands;
- (void)forceUpdate;
- (id)initWithAppContext:(id)arg1;
- (unsigned long long)privacyFlowContentVersion;
- (bool)privateModeEnabled;
- (id)settings;
- (bool)sportsScoreSpoilersAllowed;

@end
