/* made by EzioChiu.
 */

@protocol DASettingsResponseDelegate

@required

- (void)settingsRequestFinishedWithResults:(ASSettingsTaskResponse *)arg1 status:(long long)arg2 error:(NSError *)arg3;

@end
