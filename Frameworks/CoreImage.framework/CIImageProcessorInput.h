/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>

@property (nonatomic, readonly) const void*baseAddress;
@property (nonatomic, readonly) unsigned long long bytesPerRow;
@property (nonatomic, readonly) int format;
@property (nonatomic, readonly) <MTLTexture> *metalTexture;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } region;
@property (nonatomic, readonly) struct __IOSurface { }*surface;

- (const void*)baseAddress;
- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface { }*)arg1 texture:(struct Texture { union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; void *x_1_1_2; } x1; })arg2 allowSRGB:(bool)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*)arg5;
- (id)metalTexture;

@end
