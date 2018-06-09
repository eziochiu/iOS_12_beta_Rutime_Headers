/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUBufferImage : _NUImage <NUBufferImage, NUMutableBufferImage, NUMutablePurgeableBufferImage, NUPurgeableBufferImage>

@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) unsigned long long hash;
@property (readonly) NUImageLayout *layout;
@property (readonly) struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;
@property (readonly, copy) NURegion *validRegion;

- (bool)copyBufferStorage:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toPoint:(struct { long long x1; long long x2; })arg3;
- (bool)copySurfaceStorage:(id)arg1 fromRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 toPoint:(struct { long long x1; long long x2; })arg3 device:(id)arg4;
- (id)debugQuickLookObject;
- (void)readBufferRegion:(id)arg1 withBlock:(id /* block */)arg2;
- (void)writeBufferRegion:(id)arg1 withBlock:(id /* block */)arg2;

@end
