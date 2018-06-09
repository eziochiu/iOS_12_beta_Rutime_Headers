/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAMountStatusTracker : NSObject <PASerializable> {
    NSMutableDictionary * _mountStatusDict;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (unsigned long long)forEachMountBlockingThread:(unsigned long long)arg1 withSanitizedPaths:(bool)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 runBlock:(id /* block */)arg5;
- (unsigned long long)forEachUnresponsiveMountWithSanitizedPaths:(bool)arg1 BetweenMachStartTime:(double)arg2 andEndTime:(double)arg3 runBlock:(id /* block */)arg4;
- (id)init;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)takeCurrentMountStatusForMachTime:(double)arg1;

@end
