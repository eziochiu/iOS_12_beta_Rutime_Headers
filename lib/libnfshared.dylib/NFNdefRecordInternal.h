/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFNdefRecordInternal : NSObject <NFNdefRecord, NSSecureCoding> {
    unsigned char  _firstOctet;
    NSData * _identifier;
    NSData * _payload;
    NSData * _type;
}

@property (nonatomic) bool chunked;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned char header;
@property (nonatomic, retain) NSData *identifier;
@property (nonatomic) bool messageBegin;
@property (nonatomic) bool messageEnd;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic) bool shortRecord;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *type;
@property (nonatomic) unsigned char typeNameFormat;

+ (id)_decodeTextRecord:(id)arg1;
+ (id)_decodeURIRecord:(id)arg1;
+ (id)dataFromRecord:(id)arg1;
+ (id)decodeFromRecord:(id)arg1;
+ (bool)parseRecordUsingScanner:(struct _NFDataScanner { struct _NFData {} *x1; unsigned long long x2; void *x3; }*)arg1 header:(char *)arg2 type:(id*)arg3 identifier:(id*)arg4 payload:(id*)arg5;
+ (id)recordsFromBytes:(const void*)arg1 length:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (bool)_idLengthPresent;
- (void)_setIdLengthPresent:(bool)arg1;
- (id)asData;
- (bool)chunked;
- (void)dealloc;
- (id)decode;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)header;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeader:(unsigned char)arg1 type:(id)arg2 identifier:(id)arg3 payload:(id)arg4;
- (id)initWithNDEFRecord:(id)arg1;
- (bool)isURIRecord;
- (bool)messageBegin;
- (bool)messageEnd;
- (id)payload;
- (void)setChunked:(bool)arg1;
- (void)setHeader:(unsigned char)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMessageBegin:(bool)arg1;
- (void)setMessageEnd:(bool)arg1;
- (void)setPayload:(id)arg1;
- (void)setShortRecord:(bool)arg1;
- (void)setType:(id)arg1;
- (void)setTypeNameFormat:(unsigned char)arg1;
- (bool)shortRecord;
- (id)type;
- (unsigned char)typeNameFormat;

@end
