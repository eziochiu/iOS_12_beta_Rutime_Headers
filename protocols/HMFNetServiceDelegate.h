/* made by EzioChiu.
 */

@protocol HMFNetServiceDelegate <NSObject>

@optional

- (void)netService:(HMFNetService *)arg1 didUpdateAddresses:(NSArray *)arg2;
- (void)netService:(HMFNetService *)arg1 didUpdateTXTRecord:(NSDictionary *)arg2;

@end
