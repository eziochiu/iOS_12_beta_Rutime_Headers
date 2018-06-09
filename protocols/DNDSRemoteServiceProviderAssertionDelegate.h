/* made by EzioChiu.
 */

@protocol DNDSRemoteServiceProviderAssertionDelegate <NSObject>

@required

- (DNDSModeAssertion *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 assertionWithClientIdentifer:(NSString *)arg2 error:(id*)arg3;
- (NSArray *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 invalidateAllModeAssertionsTakenBeforeDate:(NSDate *)arg2 forReason:(unsigned long long)arg3 error:(id*)arg4;
- (DNDSModeAssertionInvalidation *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 invalidateModeAssertionWithUUID:(NSUUID *)arg2 reason:(unsigned long long)arg3 error:(id*)arg4;
- (DNDSModeAssertion *)remoteServiceProvider:(DNDSRemoteServiceProvider *)arg1 takeModeAssertionWithDetails:(DNDModeAssertionDetails *)arg2 clientIdentifier:(NSString *)arg3 error:(id*)arg4;

@end
