/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SADispatchQueue : NSObject <SASerializable> {
    unsigned long long  _dispatchQueueId;
    NSMutableArray * _dispatchQueueStates;
    bool  _isConcurrent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long dispatchQueueId;
@property (readonly) NSArray *dispatchQueueStates;
@property (readonly) unsigned long long hash;
@property bool isConcurrent;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)dispatchQueueWithId:(unsigned long long)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned int x4; union { unsigned short x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned int x4; union { unsigned short x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (unsigned long long)addState:(id)arg1;
- (unsigned long long)addStates:(id)arg1;
- (id)debugDescription;
- (unsigned long long)dispatchQueueId;
- (id)dispatchQueueStates;
- (void)enumerateThreadStatesBetweenStartTime:(id)arg1 endTime:(id)arg2 reverseOrder:(bool)arg3 withSampleIndex:(bool)arg4 block:(id /* block */)arg5;
- (id)firstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (unsigned long long)indexOfFirstDispatchQueueStateOnOrAfterTime:(id)arg1 withSampleIndex:(bool)arg2;
- (unsigned long long)indexOfLastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (id)initWithId:(unsigned long long)arg1;
- (bool)isConcurrent;
- (id)lastDispatchQueueStateOnOrBeforeTime:(id)arg1 withSampleIndex:(bool)arg2;
- (void)paDeserializationAppendState:(id)arg1;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned int x4; union { unsigned short x_5_1_1; struct { unsigned int x_2_2_1 : 1; } x_5_1_2; } x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)setIsConcurrent:(bool)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
