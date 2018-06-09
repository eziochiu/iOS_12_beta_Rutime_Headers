/* made by EzioChiu.
 */

@protocol MTLTexture <MTLResource>

@required

- (bool)allowGPUOptimizedContents;
- (unsigned long long)arrayLength;
- (<MTLBuffer> *)buffer;
- (unsigned long long)bufferBytesPerRow;
- (unsigned long long)bufferOffset;
- (unsigned long long)depth;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6;
- (void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg3 mipmapLevel:(unsigned long long)arg4;
- (unsigned long long)height;
- (struct __IOSurface { }*)iosurface;
- (unsigned long long)iosurfacePlane;
- (bool)isFramebufferOnly;
- (unsigned long long)mipmapLevelCount;
- (<MTLTexture> *)newTextureViewWithPixelFormat:(unsigned long long)arg1;
- (<MTLTexture> *)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 slices:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (unsigned long long)parentRelativeLevel;
- (unsigned long long)parentRelativeSlice;
- (<MTLTexture> *)parentTexture;
- (unsigned long long)pixelFormat;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6;
- (void)replaceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4;
- (<MTLResource> *)rootResource;
- (unsigned long long)sampleCount;
- (unsigned long long)textureType;
- (unsigned long long)usage;
- (unsigned long long)width;

@end
