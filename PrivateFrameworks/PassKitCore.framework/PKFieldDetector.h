/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKFieldDetector : NSObject <NFFieldDetectSessionDelegate, NFLoyaltyAndPaymentSessionDelegate> {
    <PKFieldDetectorDelegate> * _delegate;
    NFFieldDetectSession * _fieldDetectSession;
    bool  _fieldDetectSessionRequested;
    unsigned long long  _fieldDetectSessionRetryCount;
    NSObject<OS_dispatch_queue> * _fieldDetectorSerialQueue;
    bool  _fieldPresent;
    PKFieldProperties * _fieldProperties;
    NFLoyaltyAndPaymentSession * _fieldPropertiesLookupSession;
    NSObject<NFSession> * _fieldPropertiesLookupSessionHandle;
    NSObject<OS_dispatch_source> * _fieldPropertiesLookupTimer;
    PKFieldProperties * _fieldPropertiesToLookup;
    unsigned long long  _fieldPropertieslookupSynchronizer;
    NSHashTable * _observers;
    NSLock * _observersLock;
    NSObject<OS_dispatch_queue> * _replyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKFieldDetectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKFieldProperties *fieldProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endFieldPropertiesLookup;
- (void)_endLookupAndNotifyForFieldProperties:(id)arg1;
- (void)_restartFieldDetectSession;
- (void)_startFieldDetectSession;
- (void)_startLookupForFieldProperties:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)fieldDetectSession:(id)arg1 didEnterFieldWithNotification:(id)arg2;
- (void)fieldDetectSessionDidEndUnexpectedly:(id)arg1;
- (void)fieldDetectSessionDidExitField:(id)arg1;
- (id)fieldProperties;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)loyaltyAndPaymentSession:(id)arg1 didPerformValueAddedServiceTransactions:(id)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPersistentFieldDetectionEnabled:(bool)arg1;
- (void)unregisterObserver:(id)arg1;

@end
