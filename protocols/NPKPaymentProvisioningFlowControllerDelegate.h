/* made by EzioChiu.
 */

@protocol NPKPaymentProvisioningFlowControllerDelegate <NSObject>

@required

- (void)paymentProvisioningFlowController:(NPKPaymentProvisioningFlowController *)arg1 didTransitionFromStep:(unsigned long long)arg2 toStep:(unsigned long long)arg3 withContext:(NPKPaymentProvisioningFlowStepContext *)arg4;

@end
