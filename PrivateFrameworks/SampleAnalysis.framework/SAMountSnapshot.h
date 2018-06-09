/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAMountSnapshot : NSObject <SASerializable> {
    NSArray * _blockedThreadIDs;
    SATimestamp * _timeWhenMeasured;
    double  _timestampOfLastResponse;
}

@property (readonly) NSArray *blockedThreadIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isUnresponsive;
@property (readonly) Class superclass;
@property (readonly) SATimestamp *timeWhenMeasured;
@property (readonly) double timestampOfLastResponse;

+ (id)classDictionaryKey;
+ (id)mountSnapshotWithoutReferencesFromPAStyleMountSnapshot:(const struct { unsigned long long x1; double x2; double x3; unsigned int x4; }*)arg1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned int x3; unsigned long long x4; double x5; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned int x3; unsigned long long x4; double x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)blockedThreadIDs;
- (id)initWithStatus:(struct netfs_status { unsigned int x1; BOOL x2[512]; unsigned int x3; unsigned int x4; unsigned long long x5[0]; }*)arg1 atTimestamp:(id)arg2;
- (bool)isBlockingThread:(unsigned long long)arg1;
- (bool)isUnresponsive;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned int x3; unsigned long long x4; double x5; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (double)secondsUntilUnresponsiveFromTimestamp:(id)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (id)timeWhenMeasured;
- (double)timestampOfLastResponse;

@end
