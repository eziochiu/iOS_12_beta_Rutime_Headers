/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAMountStatusTracker : NSObject <SASerializable> {
    NSMutableDictionary * _mountStatusDict;
    NSMutableSet * _threadsSeen;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *mountStatusDict;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; }*)arg1 bufferLength:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)addMountStatus:(struct { /* ? */ }**)arg1 forTimestamp:(id)arg2;
- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned short x3; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)applyMachTimebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (void)enumerateMountsBlockingThread:(unsigned long long)arg1 betweenStartTime:(id)arg2 endTime:(id)arg3 block:(id /* block */)arg4;
- (void)enumerateUnresponsiveMountsBetweenStartTime:(id)arg1 endTime:(id)arg2 block:(id /* block */)arg3;
- (void)fillInThreadsSeen;
- (bool)hasUnresponsiveMountsForThreadID:(unsigned long long)arg1;
- (id)init;
- (id)mountStatusDict;
- (void)populateReferencesUsingBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; }*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4;
- (void)populateReferencesUsingPAStyleSerializedMountStatusTracker:(const struct { unsigned long long x1; unsigned int x2; }*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
