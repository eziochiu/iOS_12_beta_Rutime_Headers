/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKPaymentProvisioningFlowControllerRemoteCredentialsStepContext : NPKPaymentProvisioningFlowStepContext {
    bool  _allowsManualEntry;
    NSArray * _credentials;
    PKPaymentSetupProduct * _product;
}

@property (nonatomic) bool allowsManualEntry;
@property (nonatomic, retain) NSArray *credentials;
@property (nonatomic, retain) PKPaymentSetupProduct *product;

- (void).cxx_destruct;
- (bool)allowsManualEntry;
- (id)credentials;
- (id)description;
- (id)product;
- (void)setAllowsManualEntry:(bool)arg1;
- (void)setCredentials:(id)arg1;
- (void)setProduct:(id)arg1;

@end
