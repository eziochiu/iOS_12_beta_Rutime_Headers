/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBDataTransferMonitor : NSObject <NSProgressReporting, PBItemCollectionDataTransferDelegate> {
    <PBDataTransferMonitorDelegate> * _delegate;
    unsigned long long  _outstandingItemsCount;
    NSArray * _outstandingRequests;
    NSMutableSet * _transferQueue_allEncounteredItemUUIDs;
    NSMutableArray * _transferQueue_childProgresses;
    bool  _transferQueue_hasSentBeganCallback;
    bool  _transferQueue_hasSentFinishedCallback;
    NSProgress * _transferQueue_masterProgress;
    NSMutableDictionary * _transferQueue_requestsBySourceItemUUID;
    NSMutableSet * _transferQueue_requestsInProgress;
    bool  _transferQueue_shouldSendBeganCallback;
    bool  _transferQueue_shouldSendFinishedCallback;
    bool  _transferQueue_suppressEventsUntilRequested;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PBDataTransferMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long outstandingItemsCount;
@property (nonatomic, readonly, copy) NSArray *outstandingRequests;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressEventsUntilRequested;
@property (nonatomic, readonly) unsigned long long totalItemsCount;

- (void).cxx_destruct;
- (void)_transferQueue_recomputeMasterProgress;
- (void)_transferQueue_scheduleBeganCallback;
- (void)_transferQueue_scheduleFinishedCallback;
- (void)_transferQueue_sendBeganCallback;
- (void)_transferQueue_sendFinishedCallback;
- (void)cancelOutstandingRequests;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)itemCollection:(id)arg1 item:(id)arg2 representation:(id)arg3 beganDataTransferWithProgress:(id)arg4;
- (void)itemCollection:(id)arg1 item:(id)arg2 representationFinishedDataTransfer:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (unsigned long long)outstandingItemsCount;
- (id)outstandingRequests;
- (id)progress;
- (void)sendDelegateEventsIfNeeded;
- (void)setDelegate:(id)arg1;
- (void)setSuppressEventsUntilRequested:(bool)arg1;
- (bool)suppressEventsUntilRequested;
- (unsigned long long)totalItemsCount;

@end