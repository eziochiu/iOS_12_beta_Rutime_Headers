/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairResourceTransferSender : IDSSocketPairMessage {
    bool  _compressPayload;
    bool  _compressed;
    bool  _done;
    bool  _expectsPeerResponse;
    NSDate * _expiryDate;
    int  _fileDescriptor;
    unsigned int  _maxChunkSize;
    NSString * _messageUUID;
    NSDictionary * _metadata;
    unsigned long long  _nextByte;
    NSString * _peerResponseIdentifier;
    NSDictionary * _resourceAttributes;
    NSString * _resourcePath;
    bool  _resumeResourceTransfers;
    bool  _sentFirstMessage;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned long long  _totalBytes;
    bool  _wantsAppAck;
}

@property (nonatomic, readonly) bool isDone;
@property (nonatomic) unsigned int maxChunkSize;
@property (nonatomic, readonly) NSString *messageUUID;
@property (nonatomic) unsigned long long nextByte;
@property (nonatomic) bool resumeResourceTransfers;
@property (nonatomic, readonly) bool sentFirstMessage;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) unsigned long long totalBytes;

- (void).cxx_destruct;
- (void)closeFileAndMarkDone;
- (unsigned char)command;
- (void)dealloc;
- (id)description;
- (id)initWithResourceAtPath:(id)arg1 metadata:(id)arg2 sequenceNumber:(unsigned int)arg3 streamID:(unsigned short)arg4 expectsPeerResponse:(bool)arg5 wantsAppAck:(bool)arg6 compressPayload:(bool)arg7 compressed:(bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 expiryDate:(id)arg11;
- (bool)isDone;
- (unsigned int)maxChunkSize;
- (id)messageUUID;
- (unsigned long long)nextByte;
- (id)nextMessage;
- (id)nextMessage_old;
- (id)readNextBytes;
- (bool)readNextBytes:(id*)arg1 byteOffset:(unsigned long long*)arg2;
- (void)reset;
- (bool)resumeResourceTransfers;
- (bool)sentFirstMessage;
- (unsigned int)sequenceNumber;
- (void)setMaxChunkSize:(unsigned int)arg1;
- (void)setNextByte:(unsigned long long)arg1;
- (void)setResumeResourceTransfers:(bool)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;
- (unsigned long long)totalBytes;

@end
