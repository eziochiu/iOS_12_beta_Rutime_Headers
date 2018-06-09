/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SATimeRange : NSObject <SAJSONSerialization, SASerializable> {
    SATimestamp * _endTime;
    SATimestamp * _startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long deltaMachAbsTime;
@property (readonly) double deltaMachAbsTimeSeconds;
@property (readonly) unsigned long long deltaMachContTime;
@property (readonly) double deltaMachContTimeSeconds;
@property (readonly) double deltaWallTime;
@property (readonly, copy) NSString *description;
@property (retain) SATimestamp *endTime;
@property (readonly) unsigned long long hash;
@property (retain) SATimestamp *startTime;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)timeRangeStart:(id)arg1 end:(id)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)applyMachTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)deltaMachAbsTime;
- (double)deltaMachAbsTimeSeconds;
- (unsigned long long)deltaMachContTime;
- (double)deltaMachContTimeSeconds;
- (double)deltaWallTime;
- (id)endTime;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)setEndTime:(id)arg1;
- (void)setStartTime:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)startTime;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
