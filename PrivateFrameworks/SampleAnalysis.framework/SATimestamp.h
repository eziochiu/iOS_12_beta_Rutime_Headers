/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SATimestamp : NSObject <SAJSONSerialization, SASerializable> {
    unsigned long long  _machAbsTime;
    double  _machAbsTimeSeconds;
    unsigned long long  _machContTime;
    double  _machContTimeSeconds;
    double  _wallTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property unsigned long long machAbsTime;
@property double machAbsTimeSeconds;
@property unsigned long long machContTime;
@property double machContTimeSeconds;
@property (readonly) Class superclass;
@property double wallTime;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; double x5; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)timestamp;
+ (id)timestampWithKTraceEvent:(const struct trace_point { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; struct timeval { long long x_9_1_1; int x_9_1_2; } x9; char *x10; char *x11; int x12; }*)arg1 fromSession:(const struct ktrace_session { }*)arg2;
+ (id)timestampWithMachAbsTime:(unsigned long long)arg1 machAbsTimeSec:(double)arg2 machContTime:(unsigned long long)arg3 machContTimeSec:(double)arg4 wallTime:(double)arg5;
+ (id)timestampWithMachAbsTime:(unsigned long long)arg1 machContTime:(unsigned long long)arg2 wallTime:(double)arg3 machTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg4;

- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned long long x3; unsigned long long x4; double x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)applyMachTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (bool)isEqualToTimestamp:(id)arg1;
- (unsigned long long)machAbsTime;
- (double)machAbsTimeSeconds;
- (unsigned long long)machContTime;
- (double)machContTimeSeconds;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (void)setMachAbsTime:(unsigned long long)arg1;
- (void)setMachAbsTimeSeconds:(double)arg1;
- (void)setMachContTime:(unsigned long long)arg1;
- (void)setMachContTimeSeconds:(double)arg1;
- (void)setWallTime:(double)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (double)wallTime;
- (void)writeJSONDictionaryEntriesToStream:(id)arg1;

@end
