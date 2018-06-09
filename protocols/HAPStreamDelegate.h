/* made by EzioChiu.
 */

@protocol HAPStreamDelegate <NSObject>

@required

- (void)stream:(HAPRelayStream *)arg1 didCloseWithError:(NSError *)arg2;
- (void)stream:(HAPRelayStream *)arg1 didFailToWriteDataWithIdentifier:(NSString *)arg2 error:(NSError *)arg3;
- (void)stream:(HAPRelayStream *)arg1 didReceiveData:(NSData *)arg2 withIdentifier:(NSString *)arg3;
- (void)streamDidResume:(HAPRelayStream *)arg1;
- (void)streamDidSuspend:(HAPRelayStream *)arg1;

@end
