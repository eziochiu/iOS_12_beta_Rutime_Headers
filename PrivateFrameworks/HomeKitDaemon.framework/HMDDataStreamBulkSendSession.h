/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamBulkSendSession : NSObject <HMDDataStreamBulkSendSession> {
    id /* block */  _activeReadHandler;
    HMDDataStreamBulkSendProtocol * _bulkSendProtocol;
    bool  _hasReceivedEof;
    bool  _isClosed;
    NSMutableArray * _pendingReads;
    NSObject<OS_dispatch_queue> * _queue;
    NSError * _receivedFailure;
    NSNumber * _sessionIdentifier;
}

@property (nonatomic, copy) id /* block */ activeReadHandler;
@property (nonatomic, readonly) HMDDataStreamBulkSendProtocol *bulkSendProtocol;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool hasMoreData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *pendingReads;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSError *receivedFailure;
@property (nonatomic, readonly) NSNumber *sessionIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeSession;
- (void)_pumpReadDataIfPossible;
- (id /* block */)activeReadHandler;
- (void)asyncHandleIncomingPackets:(id)arg1 isEof:(bool)arg2;
- (void)asyncHandleRemoteCloseWithError:(id)arg1;
- (id)bulkSendProtocol;
- (void)cancelWithReason:(unsigned char)arg1;
- (void)dealloc;
- (bool)hasMoreData;
- (id)initWithProtocol:(id)arg1 sessionIdentifier:(id)arg2 queue:(id)arg3;
- (id)pendingReads;
- (id)queue;
- (void)read:(id /* block */)arg1;
- (id)receivedFailure;
- (id)sessionIdentifier;
- (void)setActiveReadHandler:(id /* block */)arg1;
- (void)setPendingReads:(id)arg1;
- (void)setReceivedFailure:(id)arg1;

@end
