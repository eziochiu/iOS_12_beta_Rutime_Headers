/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKHealthPrivacyHostAuthorizationViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {
    <HKHealthPrivacyHostAuthorizationViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) <HKHealthPrivacyServiceRemoteAuthorizationViewController> *_healthPrivacyServiceViewControllerProxy;
@property (nonatomic) <HKHealthPrivacyHostAuthorizationViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestRemoteViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;
+ (bool)shouldPropagateAppearanceCustomizations;

- (void).cxx_destruct;
- (id)_healthPrivacyServiceViewControllerProxy;
- (id)delegate;
- (void)didFinishWithError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRequestRecord:(id)arg1 presentationRequests:(id)arg2;
- (void)show;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
