/* made by EzioChiu.
 */

@protocol ICSDelegationProviderServiceXPC <NSObject>

@required

- (void)delegationProviderServiceAddAssertion:(ICDelegationProviderServiceAssertion *)arg1;
- (void)delegationProviderServiceRemoveAssertion:(ICDelegationProviderServiceAssertion *)arg1;

@end
