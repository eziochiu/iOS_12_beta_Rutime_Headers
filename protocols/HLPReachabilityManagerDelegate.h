/* made by EzioChiu.
 */

@protocol HLPReachabilityManagerDelegate <NSObject>

@required

- (void)reachabilityManagerConnectionStatusChanged:(HLPReachabilityManager *)arg1 connected:(bool)arg2;

@end
