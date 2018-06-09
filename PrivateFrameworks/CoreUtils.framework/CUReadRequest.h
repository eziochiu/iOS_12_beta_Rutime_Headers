/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUReadRequest : NSObject {
    void * _bufferBytes;
    NSMutableData * _bufferData;
    char * _bufferPtr;
    id /* block */  _completion;
    NSData * _data;
    NSError * _error;
    unsigned long long  _length;
    unsigned long long  _maxLength;
    unsigned long long  _minLength;
}

@property (nonatomic) void*bufferBytes;
@property (nonatomic, retain) NSMutableData *bufferData;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long minLength;

- (void).cxx_destruct;
- (void*)bufferBytes;
- (id)bufferData;
- (id /* block */)completion;
- (id)data;
- (id)error;
- (unsigned long long)length;
- (unsigned long long)maxLength;
- (unsigned long long)minLength;
- (void)setBufferBytes:(void*)arg1;
- (void)setBufferData:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setData:(id)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setMinLength:(unsigned long long)arg1;

@end
