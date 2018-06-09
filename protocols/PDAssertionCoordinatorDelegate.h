/* made by EzioChiu.
 */

@protocol PDAssertionCoordinatorDelegate <NSObject>

@required

- (bool)assertionCoordinator:(PDAssertionCoordinator *)arg1 canAcquireAssertion:(PDAssertion *)arg2;
- (void)assertionCoordinator:(PDAssertionCoordinator *)arg1 didAcquireAssertion:(PDAssertion *)arg2;
- (void)assertionCoordinator:(PDAssertionCoordinator *)arg1 didInvalidateAssertion:(PDAssertion *)arg2;

@end
