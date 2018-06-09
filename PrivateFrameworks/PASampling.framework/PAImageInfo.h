/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAImageInfo : NSObject <PASerializable> {
    NSUUID * _imageUUID;
    bool  _isTextExecSegment;
    unsigned long long  _loadAddress;
    NSString * _path;
    unsigned long long  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *imageUUID;
@property (readonly) bool isTextExecSegment;
@property (readonly) unsigned long long loadAddress;
@property (readonly) NSString *path;
@property (readonly) unsigned long long size;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (void)addNewInformationFromImageInfo:(id)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)debugDescription;
- (id)imageUUID;
- (id)initWithImageInfo:(const void*)arg1 is64Bit:(bool)arg2;
- (id)initWithSerializedImageInfo:(const struct { unsigned long long x1; long long x2; unsigned long long x3; }*)arg1;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andPath:(id)arg3;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4;
- (id)initWithUUID:(id)arg1 andAddress:(unsigned long long)arg2 andSize:(unsigned long long)arg3 andPath:(id)arg4 isTextExecSegment:(bool)arg5;
- (bool)isTextExecSegment;
- (unsigned long long)loadAddress;
- (id)path;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned long long)size;
- (unsigned long long)sizeInBytesForSerializedVersion;

@end
