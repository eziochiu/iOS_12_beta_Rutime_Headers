/* made by EzioChiu.
 */

@protocol DNDSLifetimeMonitorDelegate <NSObject>

@required

- (void)activeAssertionsDidChangeForLifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1;
- (void)lifetimeMonitor:(id <DNDSLifetimeMonitor>)arg1 lifetimeDidExpireForAssertionUUIDs:(NSArray *)arg2;

@end
