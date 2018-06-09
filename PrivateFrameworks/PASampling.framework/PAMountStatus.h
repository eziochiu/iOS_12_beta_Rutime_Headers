/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAMountStatus : NSObject {
    NSString * _path;
    NSMutableArray * _snapshots;
    NSString * _type;
}

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)addStatus:(struct netfs_status { unsigned int x1; BOOL x2[512]; unsigned int x3; unsigned int x4; unsigned long long x5[0]; }*)arg1 atMachTime:(double)arg2;
- (id)copyName;
- (id)copySanitizedName;
- (id)copyUnresponsiveDescriptionForThread:(unsigned long long)arg1 withSanitizedPaths:(bool)arg2 betweenMachStartTime:(double)arg3 andEndTime:(double)arg4 includeThreadIDs:(bool)arg5;
- (id)initWithName:(id)arg1 andType:(id)arg2;
- (bool)isBlockingThread:(unsigned long long)arg1 betweenMachStartTime:(double)arg2 andEndTime:(double)arg3;
- (bool)isUnresponsiveBetweenMachStartTime:(double)arg1 andEndTime:(double)arg2;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
