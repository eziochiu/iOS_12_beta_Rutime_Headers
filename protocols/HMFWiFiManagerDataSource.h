/* made by EzioChiu.
 */

@protocol HMFWiFiManagerDataSource <NSObject>

@required

+ (NSString *)MACAddressString;

- (NSString *)currentNetworkSSID;
- (<HMFWiFiManagerDataSourceDelegate> *)delegate;
- (bool)isWoWAsserted;
- (void)performBlockAfterWoWReassertionDelay:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setDelegate:(id <HMFWiFiManagerDataSourceDelegate>)arg1;
- (void)setWoWAsserted:(bool)arg1;

@end
