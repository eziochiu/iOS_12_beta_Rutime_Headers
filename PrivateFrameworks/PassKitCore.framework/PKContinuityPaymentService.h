/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKContinuityPaymentService : NSObject <PKContinuityPaymentServiceExportedInterface> {
    <PKContinuityPaymentServiceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSLock * _remoteDeviceLock;
    NSArray * _remoteDevices;
    PKXPCService * _remoteService;
}

@property (nonatomic) <PKContinuityPaymentServiceDelegate> *delegate;
@property (nonatomic, readonly) NSArray *remoteDevices;

+ (id)sharedService;

- (void).cxx_destruct;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)canMakePaymentsWithRemoteDevices;
- (void)cancelRemotePaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (void)didReceiveCancellationForRemotePaymentRequest:(id)arg1;
- (void)didReceivePayment:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceivePaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2;
- (void)didReceiveUpdatedPaymentDevices:(id)arg1;
- (bool)hasRemoteDevices;
- (id)init;
- (void)noteAccountDeleted;
- (void)presentContinuityPaymentInterfaceWithRequestIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)remoteDevices;
- (void)requestInstrumentThumbnail:(id)arg1 forRemoteDevice:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (void)sendPayment:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPaymentClientUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPaymentHostUpdate:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPaymentResult:(id)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPaymentSetupRequest:(id)arg1 appDisplayName:(id)arg2 completion:(id /* block */)arg3;
- (void)sendPaymentStatus:(long long)arg1 forRemotePaymentRequest:(id)arg2 completion:(id /* block */)arg3;
- (void)sendRemotePaymentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setRemoteDevices:(id)arg1;
- (void)updatePaymentDevices;

@end
