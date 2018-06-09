/* made by EzioChiu.
 */

@protocol DNDSLifetimeMonitorDataSource <NSObject>

@required

- (NSArray *)allModeAssertionsForLifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1;
- (DNDModeAssertionLifetime *)lifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1 effectiveLifetimeForModeAssertion:(DNDModeAssertion *)arg2;

@end
