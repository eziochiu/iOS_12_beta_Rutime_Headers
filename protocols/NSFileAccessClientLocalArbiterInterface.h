/* made by EzioChiu.
 */

@protocol NSFileAccessClientLocalArbiterInterface <NSFileAccessArbiter>

@required

- (NSObject<OS_dispatch_semaphore> *)grantAccessClaim:(NSFileAccessClaim *)arg1 synchronouslyIfPossible:(bool)arg2;
- (void)grantSubarbitrationClaim:(NSFileSubarbitrationClaim *)arg1 withServer:(NSXPCListener *)arg2;

@end
