/* made by EzioChiu.
 */

@protocol AXIDCManagerSecurityDelegate <NSObject>

@required

- (NSArray *)securityTrustChainForStream:(NSStream *)arg1;
- (bool)shouldTrustStream:(NSStream *)arg1;

@end
