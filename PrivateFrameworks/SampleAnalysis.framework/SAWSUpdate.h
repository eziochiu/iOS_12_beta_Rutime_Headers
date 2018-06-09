/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAWSUpdate : NSObject {
    double  _deferStartTime;
    double  _frameStartTime;
    double  _workEndTime;
    double  _workStartTime;
}

@property (readonly) double deferDuration;
@property (readonly) double deferEndTime;
@property (readonly) double deferStartTime;
@property (readonly) double frameDuration;
@property (readonly) double frameEndTime;
@property (readonly) double frameStartTime;
@property (readonly) double waitDuration;
@property (readonly) double waitEndTime;
@property (readonly) double waitStartTime;
@property (readonly) bool wasIdle;
@property (readonly) double workDuration;
@property (readonly) double workEndTime;
@property (readonly) double workStartTime;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2;
+ (void)printASCIIBarLegendToStream:(id)arg1;

- (bool)addSelfToBuffer:(void*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (double)deferDuration;
- (double)deferEndTime;
- (double)deferStartTime;
- (double)frameDuration;
- (double)frameEndTime;
- (double)frameStartTime;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)printFPSASCIIBarToStream:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (double)waitDuration;
- (double)waitEndTime;
- (double)waitStartTime;
- (bool)wasIdle;
- (double)workDuration;
- (double)workEndTime;
- (double)workStartTime;

@end