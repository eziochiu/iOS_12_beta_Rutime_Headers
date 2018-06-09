/* made by EzioChiu.
 */

@protocol FCAppleAccount <NSObject>

@required

- (NSString *)DSID;
- (void)checkAlliOSDevicesRunningMinimumOSVersion:(void *)arg1 orInactiveForTimeInterval:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: struct { long long x1; long long x2; }, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (NSString *)contentStoreFrontID;
- (NSString *)currentStoreFrontID;
- (NSString *)endpointConnectionClientID;
- (bool)iCloudAccountChanged;
- (NSString *)iTunesAccountDSID;
- (NSString *)iTunesAccountName;
- (bool)isContentStoreFrontSupported;
- (bool)isPrimaryAccountEmailAddress;
- (bool)isPrivateDataSyncingEnabled;
- (bool)isUserSignedInToiCloud;
- (bool)isUserSignedIntoiTunes;
- (void)loadStoreFrontIfNeededWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)supportedContentStoreFrontID;
- (NSString *)userStoreFrontID;

@end
