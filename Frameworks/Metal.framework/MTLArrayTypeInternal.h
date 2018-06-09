/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArrayTypeInternal : MTLArrayType {
    unsigned long long  _aluType;
    unsigned long long  _argumentIndexStride;
    unsigned int  _arrayLength;
    unsigned long long  _dataType;
    id  _details;
    unsigned long long  _elementType;
    MTLType * _elementTypeInfo;
    bool  _isIndirectArgumentBuffer;
    unsigned long long  _pixelFormat;
    unsigned int  _stride;
}

@property (readonly) unsigned long long aluType;
@property (nonatomic) unsigned long long argumentIndexStride;
@property (nonatomic) unsigned long long indirectArgumentIndexStride;
@property bool isIndirectArgumentBuffer;
@property (readonly) unsigned long long pixelFormat;

- (unsigned long long)aluType;
- (unsigned long long)argumentIndexStride;
- (unsigned long long)arrayLength;
- (unsigned long long)dataType;
- (void)dealloc;
- (id)elementArrayType;
- (id)elementIndirectArgumentType;
- (id)elementPointerType;
- (id)elementStructType;
- (id)elementTextureReferenceType;
- (unsigned long long)elementType;
- (id)elementTypeDescription;
- (id)formattedDescription:(unsigned long long)arg1;
- (unsigned long long)indirectArgumentIndexStride;
- (id)initWithArrayLength:(unsigned long long)arg1 elementType:(unsigned long long)arg2 stride:(unsigned long long)arg3 pixelFormat:(unsigned long long)arg4 aluType:(unsigned long long)arg5 details:(id)arg6;
- (bool)isArrayLayoutThreadSafeWith:(id)arg1;
- (bool)isIndirectArgumentBuffer;
- (unsigned long long)pixelFormat;
- (void)setArgumentIndexStride:(unsigned long long)arg1;
- (void)setIndirectArgumentIndexStride:(unsigned long long)arg1;
- (void)setIsIndirectArgumentBuffer:(bool)arg1;
- (void)setStride:(unsigned long long)arg1;
- (unsigned long long)stride;

@end
