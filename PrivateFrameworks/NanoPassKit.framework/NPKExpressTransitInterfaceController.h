/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKExpressTransitInterfaceController : NSObject <NPKExpressPassControllerDelegate, NPKTransitAppletHistoryFetcherDelegate> {
    NPKTransitAppletHistoryFetcher * _appletHistoryFetcher;
    <NPKExpressTransitInterfaceControllerDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _dismissalTimer;
    NPKExpressPassController * _expressPassController;
    PKPass * _expressTransitPass;
    PKPaymentApplication * _expressTransitPaymentApplication;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NPKTransitAppletHistoryFetcher *appletHistoryFetcher;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKExpressTransitInterfaceControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *dismissalTimer;
@property (nonatomic, readonly) NPKExpressPassController *expressPassController;
@property (nonatomic, retain) PKPass *expressTransitPass;
@property (nonatomic, retain) PKPaymentApplication *expressTransitPaymentApplication;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_dismissExpressTransitAlert;
- (void)_scheduleDismissalOfExpressTransitAlertWithTimeout:(double)arg1;
- (id)appletHistoryFetcher;
- (void)dealloc;
- (id)delegate;
- (id)dismissalTimer;
- (id)expressPassController;
- (void)expressPassController:(id)arg1 didCompleteTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didFailTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didStartTransactionForPass:(id)arg2;
- (void)expressPassController:(id)arg1 didUpdateExpressPasses:(id)arg2 expressPassesInformation:(id)arg3;
- (id)expressTransitPass;
- (id)expressTransitPaymentApplication;
- (void)getAppletStateForPassWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)queue;
- (void)setAppletHistoryFetcher:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissalTimer:(id)arg1;
- (void)setExpressTransitPass:(id)arg1;
- (void)setExpressTransitPaymentApplication:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)transitAppletHistoryFetcher:(id)arg1 gotTransitAppletHistory:(id)arg2 forAppletWithAID:(id)arg3;

@end
