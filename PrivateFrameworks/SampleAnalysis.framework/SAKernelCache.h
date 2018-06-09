/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAKernelCache : NSObject <SAJSONSerialization> {
    NSArray * _binaryLoadInfos;
    unsigned long long  _loadAddress;
    NSUUID * _uuid;
}

@property (retain) NSArray *binaryLoadInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long loadAddress;
@property (readonly) Class superclass;
@property (readonly) unsigned long long textSegmentsEndAddress;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) NSUUID *uuid;

+ (void)_doKernelCachesWork:(id /* block */)arg1;
+ (id)classDictionaryKey;
+ (void)clearCaches;
+ (id)kernelCacheWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (id)binaryLoadInfos;
- (id)debugDescription;
- (id)initWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2;
- (unsigned long long)loadAddress;
- (bool)matchesUUID:(unsigned char)arg1 loadAddress:(unsigned long long)arg2;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned char x3[16]; unsigned short x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)setBinaryLoadInfos:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (unsigned long long)textSegmentsEndAddress;
- (unsigned long long)textSegmentsStartAddress;
- (id)uuid;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
