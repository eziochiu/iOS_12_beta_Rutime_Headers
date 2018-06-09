/* made by EzioChiu.
 */

@protocol HKHealthStoreClientInterface <NSObject>

@required

- (void)clientRemote_presentAuthorizationWithRequestRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKAuthorizationRequestRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clientRemote_presentAuthorizationWithSession:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKObjectAuthorizationPromptSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)clientRemote_unitPreferencesDidUpdate;
- (void)clientRemote_waitOnHealthCloudSyncWithProgressDidStartWithUUID:(NSUUID *)arg1;

@end
