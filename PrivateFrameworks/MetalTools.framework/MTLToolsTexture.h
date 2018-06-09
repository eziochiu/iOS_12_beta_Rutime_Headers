/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation> {
    <MTLBuffer> * _buffer;
    <MTLTexture> * _parentTexture;
    MTLToolsPointerArray * _views;
}

@property (readonly) unsigned long long allocatedSize;
@property (readonly) bool allowGPUOptimizedContents;
@property (readonly) unsigned long long arrayLength;
@property (readonly) <MTLBuffer> *buffer;
@property (readonly) unsigned long long bufferBytesPerRow;
@property (readonly) unsigned long long bufferOffset;
@property (readonly) MTLResourceAllocationInfo *cachedAllocationInfo;
@property (readonly) unsigned long long cpuCacheMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long depth;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (getter=isFramebufferOnly, readonly) bool framebufferOnly;
@property (readonly) unsigned long long hash;
@property (readonly) <MTLHeap> *heap;
@property (readonly) unsigned long long height;
@property (readonly) struct __IOSurface { }*iosurface;
@property (readonly) unsigned long long iosurfacePlane;
@property (readonly) bool isCompressed;
@property (readonly) bool isDrawable;
@property (copy) NSString *label;
@property (readonly) unsigned long long mipmapLevelCount;
@property (readonly) unsigned long long numFaces;
@property (readonly) unsigned long long parentRelativeLevel;
@property (readonly) unsigned long long parentRelativeSlice;
@property (readonly) <MTLTexture> *parentTexture;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long resourceIndex;
@property int responsibleProcess;
@property (readonly) <MTLResource> *rootResource;
@property (readonly) unsigned long long rotation;
@property (readonly) unsigned long long sampleCount;
@property (readonly) MTLResourceAllocationInfo *sharedAllocationInfo;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property unsigned long long swizzle;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly) unsigned long long usage;
@property (nonatomic, readonly) MTLToolsPointerArray *views;
@property (readonly) unsigned long long width;

- (void)acceptVisitor:(id)arg1;
- (bool)allowGPUOptimizedContents;
- (unsigned long long)arrayLength;
- (id)buffer;
- (unsigned long long)bufferBytesPerRow;
- (unsigned long long)bufferOffset;
- (bool)canGenerateMipmapLevels;
- (void)copyFromPixels:(const void*)arg1 rowBytes:(unsigned long long)arg2 imageBytes:(unsigned long long)arg3 toSlice:(unsigned long long)arg4 mipmapLevel:(unsigned long long)arg5 origin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg6 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg7;
- (void)copyFromSlice:(unsigned long long)arg1 mipmapLevel:(unsigned long long)arg2 origin:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg3 size:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 toPixels:(void*)arg5 rowBytes:(unsigned long long)arg6 imageBytes:(unsigned long long)arg7;
- (void)dealloc;
- (unsigned long long)depth;
- (id)formattedDescription:(unsigned long long)arg1;
- (void)generateMipmapLevel:(unsigned long long)arg1 slice:(unsigned long long)arg2;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned long long)arg4;
- (unsigned long long)height;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 buffer:(id)arg3;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2 parentTexture:(id)arg3;
- (struct __IOSurface { }*)iosurface;
- (unsigned long long)iosurfacePlane;
- (bool)isCompressed;
- (bool)isDrawable;
- (bool)isFramebufferOnly;
- (unsigned long long)mipmapLevelCount;
- (id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 swizzle:(unsigned long long)arg5;
- (unsigned long long)numFaces;
- (unsigned long long)parentRelativeLevel;
- (unsigned long long)parentRelativeSlice;
- (id)parentTexture;
- (unsigned long long)pixelFormat;
- (id)realRootResource;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 options:(unsigned long long)arg7;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (unsigned long long)resourceIndex;
- (id)rootResource;
- (unsigned long long)rotation;
- (unsigned long long)sampleCount;
- (void)setSwizzle:(unsigned long long)arg1;
- (unsigned long long)swizzle;
- (unsigned long long)textureType;
- (unsigned long long)uniqueIdentifier;
- (unsigned long long)usage;
- (id)views;
- (unsigned long long)width;

@end
