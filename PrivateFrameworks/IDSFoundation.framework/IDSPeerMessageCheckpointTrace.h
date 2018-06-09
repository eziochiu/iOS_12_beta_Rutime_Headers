/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPeerMessageCheckpointTrace : CUTCheckpointTrace {
    CUTCheckpointRange * _IDQuery;
    NSString * _guid;
    CUTCheckpointRange * _messageOnQueue;
    NSMutableArray * _mutableAggregateMessageSendCheckpoints;
    NSMutableArray * _mutableEncryptionCheckpoints;
}

@property (nonatomic, readonly) CUTCheckpointRange *IDQuery;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) CUTCheckpointRange *messageOnQueue;
@property (nonatomic, retain) NSMutableArray *mutableAggregateMessageSendCheckpoints;
@property (nonatomic, retain) NSMutableArray *mutableEncryptionCheckpoints;

- (void).cxx_destruct;
- (id)IDQuery;
- (id)aggregateMessageSendCheckpoints;
- (id)checkpointByAppendingAggregateMessageSendCheckpoint;
- (id)checkpointByAppendingEncryptionCheckpoint;
- (id)checkpoints;
- (id)encryptionCheckpoints;
- (id)guid;
- (id)initWithGuid:(id)arg1 uniqueIdentifier:(id)arg2;
- (id)messageOnQueue;
- (id)mutableAggregateMessageSendCheckpoints;
- (id)mutableEncryptionCheckpoints;
- (void)setMutableAggregateMessageSendCheckpoints:(id)arg1;
- (void)setMutableEncryptionCheckpoints:(id)arg1;

@end
