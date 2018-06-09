/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SABinaryLoadInfo : NSObject <SAJSONSerialization, SASerializable> {
    SABinary * _binary;
    unsigned long long  _textSegmentLoadAddress;
}

@property (readonly) SABinary *binary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isInKernelAddressSpace;
@property (readonly) Class superclass;
@property unsigned long long textSegmentLoadAddress;

+ (id)binaryLoadInfoForAddress:(unsigned long long)arg1 inBinaryLoadInfos:(id)arg2;
+ (id)binaryLoadInfoForLiveProcessWithPid:(int)arg1;
+ (id)binaryLoadInfoForLiveProcessWithPid:(int)arg1 dataGatheringOptions:(unsigned long long)arg2;
+ (id)binaryLoadInfoWithBinary:(id)arg1 textSegmentLoadAddress:(unsigned long long)arg2 isInKernelAddressSpace:(bool)arg3;
+ (id)binaryLoadInfoWithoutReferencesFromPAStyleSerializedImageInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; union { unsigned char x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; union { unsigned char x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (id)binary;
- (id)debugDescription;
- (id)initWithBinary:(id)arg1 textSegmentLoadAddress:(unsigned long long)arg2;
- (id)initWithDyldUUIDInfo:(const void*)arg1 is64Bit:(bool)arg2;
- (bool)isInKernelAddressSpace;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; union { unsigned char x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)populateReferencesUsingPAStyleSerializedImageInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; }*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (void)setTextSegmentLoadAddress:(unsigned long long)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)textSegmentLoadAddress;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
