/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleTimeInsensitiveTaskData : NSObject {
    SATask * _task;
}

@property (retain) SATask *task;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; int x2; int x3; int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; bool x12; bool x13; double x14; unsigned long long x15; unsigned long long x16; struct _CSArchitecture { int x_17_1_1; int x_17_1_2; } x17; double x18; bool x19; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; int x2; int x3; int x4; unsigned int x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; bool x10; bool x11; bool x12; bool x13; double x14; unsigned long long x15; unsigned long long x16; struct _CSArchitecture { int x_17_1_1; int x_17_1_2; } x17; double x18; bool x19; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setTask:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)task;

@end
