/* made by EzioChiu.
 */

@protocol DNDSModeAssertionTransformer <NSObject>

@optional

- (DNDModeAssertionLifetime *)transformedLifetimeForModeAssersion:(DNDModeAssertion *)arg1;
- (NSString *)transformedModeIdentifierForModeAssertion:(DNDModeAssertion *)arg1;

@end
