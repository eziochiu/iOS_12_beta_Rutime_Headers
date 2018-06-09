/* made by EzioChiu.
 */

@protocol DNDSModeAssertionStateProviderDataSource <NSObject>

@required

- (NSArray *)currentlyActiveModeAssertionsForStateProvider:(DNDSModeAssertionStateProvider *)arg1;
- (NSString *)stateProvider:(DNDSModeAssertionStateProvider *)arg1 effectiveModeIdentifierForModeAssertion:(DNDModeAssertion *)arg2;

@end
