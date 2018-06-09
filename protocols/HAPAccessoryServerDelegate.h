/* made by EzioChiu.
 */

@protocol HAPAccessoryServerDelegate <NSObject>

@required

- (void)accessoryServer:(HAPAccessoryServer *)arg1 authenticateUUID:(NSUUID *)arg2 token:(NSData *)arg3;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 confirmUUID:(NSUUID *)arg2 token:(NSData *)arg3;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didDiscoverAccessories:(NSArray *)arg2 transaction:(HMFOSTransaction *)arg3 error:(NSError *)arg4;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didFinishAuth:(NSError *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didReceiveBadPasswordThrottleAttemptsWithDelay:(long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didStopPairingWithError:(NSError *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateCategory:(NSNumber *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateHasPairings:(bool)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateName:(NSString *)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 didUpdateValuesForCharacteristics:(NSArray *)arg2 stateNumber:(NSNumber *)arg3 broadcast:(bool)arg4;
- (void)accessoryServer:(void *)arg1 isBlockedWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: HAPAccessoryServer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)accessoryServer:(HAPAccessoryServer *)arg1 promptUserForPasswordWithType:(unsigned long long)arg2;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 requestUserPermission:(long long)arg2 accessoryInfo:(HAPAccessoryInfo *)arg3 error:(NSError *)arg4;
- (void)accessoryServer:(HAPAccessoryServer *)arg1 validateUUID:(NSUUID *)arg2 token:(NSData *)arg3 model:(NSString *)arg4;
- (void)accessoryServerDidUpdateStateNumber:(HAPAccessoryServer *)arg1;

@end
