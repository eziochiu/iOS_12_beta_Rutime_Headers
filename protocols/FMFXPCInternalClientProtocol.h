/* made by EzioChiu.
 */

@protocol FMFXPCInternalClientProtocol <FMFXPCClientProtocol>

@required

- (oneway void)modelDidLoad;
- (oneway void)networkReachabilityUpdated:(bool)arg1;

@end
