/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKExpressPassController : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    PKPass * _currentTransactionPass;
    <NPKExpressPassControllerDelegate> * _delegate;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
    int  _expressPassChangedNotifyToken;
    NSDictionary * _expressPasses;
    NSSet * _expressPassesInformation;
    NSObject<OS_dispatch_queue> * _internalQueue;
    PKPassLibrary * _passLibrary;
    PKPaymentService * _queue_paymentService;
    unsigned long long  _transactionStatus;
}

@property (nonatomic, retain) PKPass *currentTransactionPass;
@property <NPKExpressPassControllerDelegate> *delegate;
@property (nonatomic, readonly) NSDistributedNotificationCenter *distributedNotificationCenter;
@property (retain) NSSet *expressPassesInformation;
@property (nonatomic, readonly) PKPassLibrary *passLibrary;

- (void).cxx_destruct;
- (id)_expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (void)_handleEnterNearFieldNotification:(id)arg1;
- (void)_handleExitNearFieldNotification:(id)arg1;
- (void)_handleExpressTransactionEndNotification:(id)arg1;
- (void)_handleExpressTransactionFailedNotification:(id)arg1;
- (void)_handleExpressTransactionStartNotification:(id)arg1;
- (void)_handleExpressTransactionTimeOutNotification:(id)arg1;
- (void)_handlePassesLibraryChangedNotification:(id)arg1;
- (id)_queue_expressPassForTransactionApplicationIdentifier:(id)arg1;
- (id)_queue_paymentService;
- (void)_queue_updateExpressPasses;
- (void)_startListeningNotifications;
- (void)_stopListeningNotifications;
- (void)_transactionEndedWithApplicationIdentifier:(id)arg1;
- (void)_transactionFailedWithApplicationIdentifier:(id)arg1;
- (void)_transactionStartedWithApplicationIdentifier:(id)arg1;
- (void)_transitionToStatus:(unsigned long long)arg1 forExpressPass:(id)arg2;
- (void)_updateExpressPasses;
- (id)currentTransactionPass;
- (void)dealloc;
- (id)delegate;
- (id)distributedNotificationCenter;
- (id)expressPassesInformation;
- (id)initWithDelegate:(id)arg1;
- (id)initWithPaymentService:(id)arg1 passLibrary:(id)arg2 distributedNotificationCenter:(id)arg3 delegate:(id)arg4;
- (id)passLibrary;
- (void)reset;
- (void)setCurrentTransactionPass:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpressPassesInformation:(id)arg1;

@end
