/* made by EzioChiu
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol> {
    PKPaymentAuthorizationDataModel * _dataModel;
    <PKPaymentAuthorizationHostProtocol> * _delegate;
    PKPaymentAuthorizationLayout * _paymentAuthorizationLayout;
    long long  _paymentAuthorizationStyle;
    PKPaymentAuthorizationStateMachine * _stateMachine;
}

@property (nonatomic, readonly) PKPaymentAuthorizationDataModel *dataModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentAuthorizationHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKPaymentAuthorizationLayout *paymentAuthorizationLayout;
@property (nonatomic, readonly) long long paymentAuthorizationStyle;
@property (nonatomic, readonly) PKPaymentAuthorizationStateMachine *stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataModel;
- (id)delegate;
- (id)paymentAuthorizationLayout;
- (long long)paymentAuthorizationStyle;
- (void)setDelegate:(id)arg1;
- (id)stateMachine;

@end
