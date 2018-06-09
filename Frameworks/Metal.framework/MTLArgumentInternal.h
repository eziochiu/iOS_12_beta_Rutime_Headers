/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArgumentInternal : MTLArgument {
    unsigned long long  _access;
    bool  _active;
    unsigned long long  _arrayLength;
    unsigned long long  _index;
    NSString * _name;
    unsigned long long  _type;
    MTLType * _typeInfo;
}

@property (readonly) unsigned long long bufferALUType;
@property (readonly) unsigned long long bufferPixelFormat;

- (unsigned long long)access;
- (unsigned long long)arrayLength;
- (unsigned long long)bufferAlignment;
- (unsigned long long)bufferDataSize;
- (unsigned long long)bufferDataType;
- (id)bufferIndirectArgumentType;
- (id)bufferPointerType;
- (id)bufferStructType;
- (id)dataTypeDescription;
- (void)dealloc;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)index;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)indirectConstantDataType;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(bool)arg5 arrayLength:(unsigned long long)arg6;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 access:(unsigned long long)arg3 index:(unsigned long long)arg4 active:(bool)arg5 arrayLength:(unsigned long long)arg6 typeDescription:(id)arg7;
- (bool)isActive;
- (id)name;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;
- (unsigned long long)threadgroupMemoryAlignment;
- (unsigned long long)threadgroupMemoryDataSize;
- (unsigned long long)type;

@end
