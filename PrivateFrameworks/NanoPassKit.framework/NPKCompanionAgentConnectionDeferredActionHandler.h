/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKCompanionAgentConnectionDeferredActionHandler : NSObject {
    NSMutableDictionary * _deferredActions;
    NSMutableDictionary * _deferredAddedPaymentPasses;
    NSMutableDictionary * _deferredSharedPaymentWebServiceContexts;
    NSObject<OS_dispatch_queue> * _internalQueue;
}

@property (nonatomic, retain) NSMutableDictionary *deferredActions;
@property (nonatomic, retain) NSMutableDictionary *deferredAddedPaymentPasses;
@property (nonatomic, retain) NSMutableDictionary *deferredSharedPaymentWebServiceContexts;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *internalQueue;

+ (id)sharedDeferredActionHandler;

- (void).cxx_destruct;
- (void)_cleanUpDeferredDataForPairingID:(id)arg1;
- (void)_handleCompanionAgentStarted;
- (void)_handleDeviceBecameActive:(id)arg1;
- (void)_handleDevicePaired:(id)arg1;
- (void)_handleDevicePairingFailure:(id)arg1;
- (void)_handleDeviceUnpaired:(id)arg1;
- (void)_performDeferredActions;
- (void)addDeferredPaymentPass:(id)arg1 forDevice:(id)arg2;
- (void)dealloc;
- (id)deferredActions;
- (id)deferredAddedPaymentPasses;
- (id)deferredPaymentPassUniqueIDsForDevice:(id)arg1;
- (id)deferredPaymentPassWithUniqueID:(id)arg1 forDevice:(id)arg2;
- (id)deferredPaymentPassesForDevice:(id)arg1;
- (id)deferredSharedPaymentWebServiceContextForDevice:(id)arg1;
- (id)deferredSharedPaymentWebServiceContexts;
- (id)init;
- (id)internalQueue;
- (void)performActionWhenCompanionAgentIsAvailable:(id /* block */)arg1 forDevice:(id)arg2;
- (void)setDeferredActions:(id)arg1;
- (void)setDeferredAddedPaymentPasses:(id)arg1;
- (void)setDeferredSharedPaymentWebServiceContext:(id)arg1 forDevice:(id)arg2;
- (void)setDeferredSharedPaymentWebServiceContexts:(id)arg1;
- (void)setInternalQueue:(id)arg1;

@end
