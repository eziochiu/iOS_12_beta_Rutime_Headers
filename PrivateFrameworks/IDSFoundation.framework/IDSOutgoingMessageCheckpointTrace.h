/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSOutgoingMessageCheckpointTrace : CUTCheckpointTrace {
    long long  _command;
    CUTCheckpointRange * _compressPayload;
    unsigned long long  _compressedMessageSize;
    NSString * _guid;
    IDSPeerMessageCheckpointTrace * _peerMessageTrace;
    long long  _priority;
    CUTCheckpointRange * _sendToDaemon;
    NSString * _service;
    CUTCheckpointRange * _storeInDatabase;
    unsigned long long  _uncompressedMessageSize;
}

@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) CUTCheckpointRange *compressPayload;
@property (nonatomic) unsigned long long compressedMessageSize;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) IDSPeerMessageCheckpointTrace *peerMessageTrace;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) CUTCheckpointRange *sendToDaemon;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) CUTCheckpointRange *storeInDatabase;
@property (nonatomic) unsigned long long uncompressedMessageSize;

- (void).cxx_destruct;
- (id)_reportMetadata;
- (long long)command;
- (id)compressPayload;
- (unsigned long long)compressedMessageSize;
- (id)guid;
- (id)initWithGuid:(id)arg1 service:(id)arg2 command:(long long)arg3 priority:(long long)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)peerMessageTrace;
- (long long)priority;
- (id)sendToDaemon;
- (id)service;
- (void)setCompressedMessageSize:(unsigned long long)arg1;
- (void)setUncompressedMessageSize:(unsigned long long)arg1;
- (id)storeInDatabase;
- (unsigned long long)uncompressedMessageSize;

@end
