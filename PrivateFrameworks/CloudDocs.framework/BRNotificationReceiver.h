/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving> {
    <NSObject> * _accountTokenDidChangeNotificationObserver;
    unsigned long long  _batchingChanges;
    double  _batchingDelay;
    <BRNotificationReceiverDelegate> * _delegate;
    int  _gatherDones;
    NSObject<OS_dispatch_queue> * _ipcQueue;
    bool  _isInvalidated;
    bool  _isNetworkReachable;
    NSMutableDictionary * _itemInTransferByID;
    unsigned long long  _lastBatchTime;
    int  _networkReachabilityToken;
    BRNotificationQueue * _notifs;
    NSMutableDictionary * _progressObserverByID;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _receivedChanges;
    <BRItemNotificationSending> * _sender;
    NSObject<OS_dispatch_source> * _source;
    int  _suspendCount;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic) unsigned long long batchingChanges;
@property (nonatomic) double batchingDelay;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <BRNotificationReceiverDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long pendingCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAndNotify:(bool)arg1;
- (id)_obtainNotificationSenderFromDaemon;
- (void)_receiveUpdates:(id)arg1;
- (void)_signalSourceIfNeeded;
- (void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (unsigned long long)batchingChanges;
- (double)batchingDelay;
- (void)dealloc;
- (id)delegate;
- (void)dequeue:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)flush;
- (id)init;
- (oneway void)invalidate;
- (oneway void)invalidateAndDontNotifyDelegate;
- (void)invalidateAndNotify:(bool)arg1;
- (void)networkDidChangeReachabilityStatusTo:(bool)arg1;
- (unsigned long long)pendingCount;
- (void)receiveProgressUpdates:(id)arg1 reply:(id /* block */)arg2;
- (void)receiveStitchingUpdates:(id)arg1;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(id /* block */)arg4;
- (void)resume;
- (void)setBatchingChanges:(unsigned long long)arg1;
- (void)setBatchingDelay:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)suspend;
- (void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;

@end
