/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAPAStyleTaskData : NSObject {
    SATaskState * _taskState;
    NSArray * _threadStates;
}

@property (retain) SATaskState *taskState;
@property (retain) NSArray *threadStates;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)populateReferencesUsingBuffer:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)setTaskState:(id)arg1;
- (void)setThreadStates:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)taskState;
- (id)threadStates;

@end
