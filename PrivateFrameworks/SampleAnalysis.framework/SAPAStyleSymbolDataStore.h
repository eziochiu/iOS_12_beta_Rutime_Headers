/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleSymbolDataStore : NSObject {
    SAKernelCache * _kernelCache;
    SASharedCache * _sharedCache32Bit;
    SASharedCache * _sharedCache64Bit;
}

@property (retain) SAKernelCache *kernelCache;
@property (retain) SASharedCache *sharedCache32Bit;
@property (retain) SASharedCache *sharedCache64Bit;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)kernelCache;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setKernelCache:(id)arg1;
- (void)setSharedCache32Bit:(id)arg1;
- (void)setSharedCache64Bit:(id)arg1;
- (id)sharedCache32Bit;
- (id)sharedCache64Bit;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
