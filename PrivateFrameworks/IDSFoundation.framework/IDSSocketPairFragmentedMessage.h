/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage {
    NSData * _data;
    unsigned int  _fragmentIndex;
    unsigned int  _fragmentedMessageID;
    unsigned long long  _offset;
    unsigned int  _totalFragmentCount;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) unsigned int fragmentIndex;
@property (nonatomic, readonly) unsigned int fragmentedMessageID;
@property (nonatomic, readonly) unsigned int totalFragmentCount;

+ (id)createMessageFragmentsFromOriginalMessage:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentSize:(unsigned int)arg3;
+ (id)createOriginalMessageFromFragmentedMessages:(id)arg1;

- (void).cxx_destruct;
- (id)_nonHeaderData;
- (unsigned char)command;
- (id)data;
- (id)description;
- (unsigned int)fragmentIndex;
- (unsigned int)fragmentedMessageID;
- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)initWithData:(id)arg1 withFragmentedMessageID:(unsigned int)arg2 fragmentIndex:(unsigned int)arg3 totalFragmentCount:(unsigned int)arg4;
- (unsigned int)totalFragmentCount;

@end