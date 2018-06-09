/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamBulkSendSessionCandidate : NSObject <HMDDataStreamBulkSendSessionCandidate> {
    HMDDataStreamBulkSendProtocol * _bulkSendProtocol;
    NSMutableArray * _pendingReads;
    NSError * _receivedFailure;
    NSNumber * _sessionIdentifier;
}

@property (nonatomic, readonly) HMDDataStreamBulkSendProtocol *bulkSendProtocol;
@property (nonatomic, retain) NSMutableArray *pendingReads;
@property (nonatomic, retain) NSError *receivedFailure;
@property (nonatomic, readonly) NSNumber *sessionIdentifier;

- (void).cxx_destruct;
- (void)acceptBulkSendSessionOnQueue:(id)arg1 callback:(id /* block */)arg2;
- (id)bulkSendProtocol;
- (id)initWithProtocol:(id)arg1 sessionIdentifier:(id)arg2;
- (id)pendingReads;
- (id)receivedFailure;
- (void)rejectBulkSendSessionWithReason:(unsigned char)arg1;
- (id)sessionIdentifier;
- (void)setPendingReads:(id)arg1;
- (void)setReceivedFailure:(id)arg1;

@end
