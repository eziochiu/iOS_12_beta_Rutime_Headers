/* made by EzioChiu.
 */

@protocol HAPAccessoryServerBrowserDelegate <NSObject>

@required

- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 accessoryServer:(HAPAccessoryServer *)arg2 didUpdateValuesForCharacteristics:(NSArray *)arg3 stateNumber:(NSNumber *)arg4 broadcast:(bool)arg5;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didChangeReachability:(bool)arg2 forAccessoryServerWithIdentifier:(NSString *)arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFailToDiscoverAccessoryServerWithIdentifier:(NSString *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFindAccessoryServer:(HAPAccessoryServer *)arg2 stateChanged:(bool)arg3 stateNumber:(NSNumber *)arg4;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFindAccessoryServerForReprovisioning:(HAPAccessoryServer *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFindAccessoryServerNeedingReprovisioning:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didFinishWACForAccessoryWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didRemoveAccessoryServer:(HAPAccessoryServer *)arg2 error:(NSError *)arg3;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didStartDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 didStopDiscoveringWithError:(NSError *)arg2;
- (void)accessoryServerBrowser:(void *)arg1 getCacheForAccessoryWithIdentifier:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 8: HAPAccessoryServerBrowser *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 removeCacheForAccessoryWithIdentifier:(NSString *)arg2;
- (void)accessoryServerBrowser:(HAPAccessoryServerBrowser *)arg1 saveCache:(NSData *)arg2 serverIdentifier:(NSString *)arg3;

@end
