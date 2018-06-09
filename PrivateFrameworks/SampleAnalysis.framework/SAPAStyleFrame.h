/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleFrame : NSObject {
    SAFrame * _frame;
}

@property (retain) SAFrame *frame;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; unsigned long long x6; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)frame;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; unsigned long long x6; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)setFrame:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
