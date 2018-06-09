/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelTexture : MTLIOAccelResource {
    bool  _allowGPUOptimizedContents;
    unsigned long long  _arrayLength;
    MTLIOAccelBuffer * _buffer;
    unsigned long long  _bufferBytesPerRow;
    unsigned long long  _bufferOffset;
    id /* block */  _deallocator;
    unsigned long long  _depth;
    bool  _framebufferOnly;
    unsigned long long  _height;
    struct __IOSurface { } * _iosurface;
    unsigned long long  _iosurfacePlane;
    bool  _isCompressed;
    bool  _isDrawable;
    unsigned long long  _length;
    MTLIOAccelBuffer * _masterBuffer;
    short  _masterBufferIndex;
    unsigned long long  _masterBufferOffset;
    short  _masterHeapIndex;
    unsigned long long  _mipmapLevelCount;
    unsigned long long  _numFaces;
    unsigned long long  _parentRelativeLevel;
    unsigned long long  _parentRelativeSlice;
    MTLIOAccelTexture * _parentTexture;
    unsigned long long  _pixelFormat;
    void * _pointer;
    bool  _rootResourceIsSuballocatedBuffer;
    unsigned long long  _rotation;
    unsigned long long  _sampleCount;
    unsigned long long  _swizzle;
    unsigned long long  _textureType;
    unsigned long long  _usage;
    unsigned long long  _width;
}

@property (readonly) bool allowGPUOptimizedContents;
@property (readonly) unsigned long long arrayLength;
@property (readonly) MTLIOAccelBuffer *buffer;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) unsigned long long depth;
@property (getter=isFramebufferOnly, readonly) bool framebufferOnly;
@property (readonly) unsigned long long height;
@property (readonly) struct __IOSurface { }*iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) bool isCompressed;
@property (readonly) bool isDrawable;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long numFaces;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) MTLIOAccelTexture *parentTexture;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) MTLIOAccelResource *rootResource;
@property (readonly) bool rootResourceIsSuballocatedBuffer;
@property (readonly) unsigned long long rotation;
@property (readonly) unsigned long long sampleCount;
@property (readonly) unsigned long long swizzle;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long usage;
@property (readonly) unsigned long long width;

+ (void)initNewTextureDataWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg7;

- (bool)allowGPUOptimizedContents;
- (unsigned long long)arrayLength;
- (id)buffer;
- (unsigned long long)bufferBytesPerRow;
- (unsigned long long)bufferOffset;
- (struct __CFArray { }*)copyAnnotations;
- (void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg6 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7;
- (void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7;
- (void)dealloc;
- (unsigned long long)depth;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned long long)arg4;
- (unsigned long long)height;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 offset:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg7 argsSize:(unsigned int)arg8;
- (id)initWithBuffer:(id)arg1 descriptor:(id)arg2 sysMemOffset:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg7 argsSize:(unsigned int)arg8 isStrideTexture:(bool)arg9;
- (id)initWithCompressedTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 level:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 iosurface:(struct __IOSurface { }*)arg3 plane:(unsigned int)arg4 field:(unsigned int)arg5 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg6 argsSize:(unsigned int)arg7;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemPointer:(void*)arg3 sysMemSize:(unsigned long long)arg4 sysMemLength:(unsigned long long)arg5 sysMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg7 argsSize:(unsigned int)arg8 deallocator:(id /* block */)arg9;
- (id)initWithDevice:(id)arg1 descriptor:(id)arg2 sysMemSize:(unsigned long long)arg3 sysMemRowBytes:(unsigned long long)arg4 vidMemSize:(unsigned long long)arg5 vidMemRowBytes:(unsigned long long)arg6 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg7 argsSize:(unsigned int)arg8;
- (id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned long long)arg3 length:(unsigned long long)arg4 device:(id)arg5 descriptor:(id)arg6;
- (id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(unsigned long long)arg4 length:(unsigned long long)arg5 descriptor:(id)arg6 sysMemRowBytes:(unsigned long long)arg7 vidMemSize:(unsigned long long)arg8 vidMemRowBytes:(unsigned long long)arg9 args:(struct IOAccelNewResourceArgs { struct IOAccelNewResourceData { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned short x_1_1_3; unsigned short x_1_1_4; unsigned short x_1_1_5; unsigned short x_1_1_6; unsigned long long x_1_1_7; unsigned long long x_1_1_8; unsigned char x_1_1_9; unsigned char x_1_1_10; unsigned char x_1_1_11; unsigned char x_1_1_12; unsigned int x_1_1_13; unsigned long long x_1_1_14[2]; union { struct { unsigned long long x_1_3_1; unsigned long long x_1_3_2; unsigned long long x_1_3_3; unsigned long long x_1_3_4; unsigned int x_1_3_5; } x_15_2_1; struct { unsigned int x_2_3_1; unsigned int x_2_3_2; unsigned long long x_2_3_3[3]; } x_15_2_2; struct { unsigned int x_3_3_1; unsigned int x_3_3_2; unsigned int x_3_3_3; unsigned int x_3_3_4; unsigned long long x_3_3_5[2]; } x_15_2_3; } x_1_1_15; } x1; }*)arg10 argsSize:(unsigned int)arg11;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5;
- (id)initWithTexture:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 swizzle:(unsigned long long)arg6;
- (id)initWithTextureInternal:(id)arg1 pixelFormat:(unsigned long long)arg2 textureType:(unsigned long long)arg3 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 swizzle:(unsigned long long)arg6 compressedView:(bool)arg7;
- (struct __IOSurface { }*)iosurface;
- (unsigned long long)iosurfacePlane;
- (bool)isAliasable;
- (bool)isCompressed;
- (bool)isDrawable;
- (bool)isFramebufferOnly;
- (void)makeAliasable;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)numFaces;
- (unsigned long long)parentRelativeLevel;
- (unsigned long long)parentRelativeSlice;
- (id)parentTexture;
- (unsigned long long)pixelFormat;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (id)rootResource;
- (bool)rootResourceIsSuballocatedBuffer;
- (unsigned long long)rotation;
- (unsigned long long)sampleCount;
- (unsigned long long)swizzle;
- (unsigned long long)textureType;
- (unsigned long long)uniqueIdentifier;
- (unsigned long long)usage;
- (unsigned long long)width;

@end
