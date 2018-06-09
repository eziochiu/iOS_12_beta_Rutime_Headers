/* made by EzioChiu.
 */

@protocol HAPRelayAccessoryDelegate <HAPAccessoryDelegate>

@required

- (void)accessory:(HAPRelayAccessory *)arg1 didActivateRelayWithError:(NSError *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didPairRelayWithError:(NSError *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateRelayEnabled:(bool)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateRelayState:(unsigned long long)arg2;

@optional

- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateAccessoryAccessToken:(NSData *)arg2;
- (void)accessory:(HAPRelayAccessory *)arg1 didUpdateAccessoryIdentifier:(NSString *)arg2;

@end
