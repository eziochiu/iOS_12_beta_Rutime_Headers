/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSerializableKeyedData : NSObject {
    NSData * _data;
    unsigned char  _dataChecksum;
    bool  _dataChecksumNeedsUpdate;
    NSData * _encodedKey;
    NSString * _key;
    unsigned char  _keyChecksum;
}

@property (readonly) NSData *data;
@property (readonly) NSString *key;

+ (unsigned char)byteChecksumOfData:(id)arg1;
+ (id)dataDeseralizedFrom:(void*)arg1 maxSize:(unsigned long long)arg2 checksum:(char *)arg3 bytesRead:(unsigned long long*)arg4;
+ (id)errorForInvalidKeyEncoding;
+ (id)keyedDataDeserializedFrom:(void*)arg1 maxSize:(unsigned long long)arg2;
+ (id)log;

- (void).cxx_destruct;
- (id)data;
- (id)initWithKey:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)key;
- (unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void*)arg3;
- (unsigned long long)serializeTo:(void*)arg1 maxSize:(unsigned long long)arg2;
- (bool)setData:(id)arg1;
- (unsigned long long)sizeWhenSerialized;

@end