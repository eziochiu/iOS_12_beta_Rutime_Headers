/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage {
    NSData * _data;
    bool  _encrypted;
    bool  _fileXfer;
    unsigned long long  _offset;
    unsigned short  _priority;
    unsigned int  _sequenceNumber;
    unsigned short  _streamID;
    unsigned char  _versionNumber;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool encrypted;
@property (nonatomic, readonly) bool fileXfer;
@property (nonatomic, readonly) unsigned short priority;
@property (nonatomic, readonly) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (nonatomic, readonly) unsigned char versionNumber;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)data;
- (id)description;
- (bool)encrypted;
- (bool)fileXfer;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithVersion:(unsigned char)arg1 encrypted:(bool)arg2 streamID:(unsigned short)arg3 priority:(unsigned short)arg4 sequenceNumber:(unsigned int)arg5 fileXfer:(bool)arg6 data:(id)arg7;
- (unsigned short)priority;
- (unsigned int)sequenceNumber;
- (void)setStreamID:(unsigned short)arg1;
- (unsigned short)streamID;
- (unsigned char)versionNumber;

@end
