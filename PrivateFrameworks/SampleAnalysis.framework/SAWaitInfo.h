/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
 */

@interface SAWaitInfo : NSObject <SASerializable> {
    unsigned long long  _context;
    unsigned long long  _owner;
    int  _type;
}

@property (readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long owner;
@property (readonly) Class superclass;
@property (readonly) int type;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2;
+ (id)stateWithPAStyleSerializedWaitInfo:(const struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg1;
+ (id)waitInfoWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;

- (bool)addSelfToBuffer:(struct { unsigned char x1; unsigned char x2; unsigned short x3; unsigned long long x4; unsigned long long x5; }*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3;
- (void)addSelfToSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg1;
- (long long)compare:(id)arg1;
- (unsigned long long)context;
- (id)description;
- (id)descriptionForPid:(int)arg1 tid:(unsigned long long)arg2 options:(unsigned long long)arg3 nameCallback:(id /* block */)arg4;
- (bool)displaysSameContentAs:(id)arg1 withDisplayOptions:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)initWithKCDataWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesKCDataWaitInfo:(const struct stackshot_thread_waitinfo { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned char x4; }*)arg1;
- (unsigned long long)owner;
- (void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg3 andDataBufferDictionary:(struct NSMutableDictionary { Class x1; }*)arg4;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (int)type;

@end
