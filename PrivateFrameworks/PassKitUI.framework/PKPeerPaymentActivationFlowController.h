/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentActivationFlowController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 didRepairBlock:(id /* block */)arg2 completeFlowBlock:(id /* block */)arg3 deviceToDeviceEncryptionRepairHandler:(id /* block */)arg4 showErrorAlertBlock:(id /* block */)arg5;
+ (id)alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 didRepairBlock:(id /* block */)arg4 completeFlowBlock:(id /* block */)arg5 showErrorAlertBlock:(id /* block */)arg6;
+ (id)alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 context:(long long)arg2 didRepairBlock:(id /* block */)arg3 completeFlowBlock:(id /* block */)arg4 showErrorAlertBlock:(id /* block */)arg5;

- (void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(id /* block */)arg2;

@end