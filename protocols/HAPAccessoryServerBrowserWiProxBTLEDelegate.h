/* made by EzioChiu.
 */

@protocol HAPAccessoryServerBrowserWiProxBTLEDelegate

@required

- (void)accessoryServerBrowserBTLE:(HAPAccessoryServerBrowserWiProxBTLE *)arg1 didDiscoverHAPPeripheral:(NSUUID *)arg2 accessoryName:(NSString *)arg3 pairingIdentifier:(NSString *)arg4 advertisementFormat:(unsigned long long)arg5 statusFlags:(NSNumber *)arg6 stateNumber:(NSNumber *)arg7 category:(NSNumber *)arg8 configurationNumber:(NSNumber *)arg9 setupHash:(NSData *)arg10 encryptedPayload:(NSData *)arg11;

@end
