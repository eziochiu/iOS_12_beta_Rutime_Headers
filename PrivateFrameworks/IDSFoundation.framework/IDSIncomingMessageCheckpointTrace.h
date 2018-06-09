/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSIncomingMessageCheckpointTrace : CUTCheckpointTrace {
    long long  _command;
    CUTCheckpointRange * _decryption;
    NSString * _guid;
    CUTCheckpointRange * _sendToClient;
    NSString * _service;
    CUTCheckpointRange * _storeInMessageStore;
}

@property (nonatomic, readonly) long long command;
@property (nonatomic, readonly) CUTCheckpointRange *decryption;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) CUTCheckpointRange *sendToClient;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) CUTCheckpointRange *storeInMessageStore;

- (void).cxx_destruct;
- (id)_reportMetadata;
- (long long)command;
- (id)decryption;
- (id)guid;
- (id)initWithService:(id)arg1 command:(long long)arg2 uniqueIdentifier:(id)arg3;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4;
- (id)sendToClient;
- (id)service;
- (void)setGuid:(id)arg1;
- (id)storeInMessageStore;

@end
