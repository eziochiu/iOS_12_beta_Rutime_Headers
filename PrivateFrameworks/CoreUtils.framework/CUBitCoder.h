/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUBitCoder : NSObject {
    id /* block */  _decryptHandler;
    id /* block */  _encryptHandler;
    NSDictionary * _schema;
}

@property (nonatomic, copy) id /* block */ decryptHandler;
@property (nonatomic, copy) id /* block */ encryptHandler;
@property (nonatomic, copy) NSDictionary *schema;

- (void).cxx_destruct;
- (unsigned long long)_readValue:(struct __CFBitVector { }*)arg1 bitCount:(unsigned int)arg2 bitIndex:(unsigned int*)arg3 err:(int*)arg4;
- (void)_writeValue:(unsigned long long)arg1 bitCount:(unsigned int)arg2 bitVector:(struct __CFBitVector { }*)arg3;
- (void)dealloc;
- (id)decodeBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)decodeBytes:(const void*)arg1 length:(unsigned long long)arg2 info:(id)arg3 error:(id*)arg4;
- (id)decodeData:(id)arg1 error:(id*)arg2;
- (id)decodeData:(id)arg1 info:(id)arg2 error:(id*)arg3;
- (id /* block */)decryptHandler;
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 error:(id*)arg3;
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 info:(id)arg3 error:(id*)arg4;
- (id /* block */)encryptHandler;
- (void)invalidate;
- (id)schema;
- (void)setDecryptHandler:(id /* block */)arg1;
- (void)setEncryptHandler:(id /* block */)arg1;
- (void)setSchema:(id)arg1;

@end
