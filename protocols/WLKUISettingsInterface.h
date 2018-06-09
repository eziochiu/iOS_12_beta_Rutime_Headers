/* made by EzioChiu.
 */

@protocol WLKUISettingsInterface <JSExport>

@required

- (NSArray *)consentedBrands;
- (NSArray *)deniedBrands;
- (void)forceUpdate;
- (unsigned long long)privacyFlowContentVersion;
- (bool)privateModeEnabled;
- (NSDictionary *)settings;
- (bool)sportsScoreSpoilersAllowed;

@end
