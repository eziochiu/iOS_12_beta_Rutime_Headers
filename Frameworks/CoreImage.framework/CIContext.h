/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIContext : NSObject {
    void * _priv;
}

@property (readonly) struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*_internalContext;
@property (nonatomic, readonly) struct CGColorSpace { }*workingColorSpace;
@property (nonatomic, readonly) int workingFormat;

+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
+ (id)_singletonContext;
+ (id)context;
+ (id)contextWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
+ (id)contextWithEAGLContext:(id)arg1;
+ (id)contextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLDevice:(id)arg1;
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (id)contextWithOptions:(id)arg1;
+ (struct CGColorSpace { }*)defaultGrayColorSpace;
+ (struct CGColorSpace { }*)defaultRGBColorSpace;
+ (struct CGColorSpace { }*)defaultWorkingColorSpace;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*)internalCLContextWithOptions:(id)arg1;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*)internalCLContextWithOptions:(id)arg1 glContext:(void*)arg2;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*)internalContextWithEAGLContext:(id)arg1 options:(id)arg2;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*)internalContextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*)internalGLContextWithOptions:(id)arg1;

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })CTM;
- (id)HEIFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace { }*)arg2 options:(id)arg3;
- (id)PNGRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4;
- (int)_contextColorForInstruments;
- (struct CGImage { }*)_createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 deferred:(bool)arg5 textureLimit:(unsigned long long)arg6;
- (void)_gpuContextCheck;
- (id)_initWithInternalRepresentation:(void*)arg1;
- (void)_insertEventMarker:(const char *)arg1;
- (struct Context { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; struct CGColorSpace {} *x3; struct CGColorSpace {} *x4; int x5; bool x6; bool x7; bool x8; bool x9; bool x10; struct CGContext {} *x11; float x12; bool x13; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_14_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_14_1_2; } x14; struct CGAffineTransform { double x_15_1_1; double x_15_1_2; double x_15_1_3; double x_15_1_4; double x_15_1_5; double x_15_1_6; } x15; unsigned int x16; unsigned long long x17; unsigned long long x18; int x19; BOOL x20[64]; bool x21; struct TreeCacheElement { unsigned long long x_22_1_1; struct Kernel {} *x_22_1_2; } x22[1024]; unsigned long long x23; struct ObjectCache<CI::Node> {} *x24; struct ObjectCache<CI::Node> {} *x25; double x26; double x27; id x28; struct RenderTask {} x29; int x30; int x31; struct Context {} *x32; unsigned long long x33; id x34; }*)_internalContext;
- (bool)_isCGBackedContext;
- (bool)_isGLBackedContext;
- (bool)_isGLInternalContext;
- (bool)_isMetalInternalContext;
- (struct CGColorSpace { }*)_outputColorSpace;
- (id)_pdfDataRepresentation;
- (id)_startTaskToRender:(id)arg1 toDestination:(id)arg2 forPrepareRender:(bool)arg3 error:(id*)arg4;
- (void)abort;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void)clearCaches;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (struct CGImage { }*)createCGImage:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 deferred:(bool)arg5;
- (struct CGLayer { }*)createCGLayerWithSize:(struct CGSize { double x1; double x2; })arg1 info:(struct __CFDictionary { }*)arg2;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (struct __IOSurface { }*)createIOSurface:(id)arg1;
- (struct __IOSurface { }*)createIOSurface:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (id)description;
- (id)device;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)flatten:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (id)init;
- (id)initWithCGContext:(struct CGContext { }*)arg1 options:(id)arg2;
- (id)initWithEAGLContext:(id)arg1;
- (id)initWithEAGLContext:(id)arg1 options:(id)arg2;
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })inputImageMaximumSize;
- (void)invalidate;
- (void)lock;
- (unsigned long long)maximumInputImageSize;
- (unsigned long long)maximumOutputImageSize;
- (bool)measureRequirementsOf:(id)arg1 query:(int)arg2 :(id*)arg3 results:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (id)objectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })outputImageMaximumSize;
- (bool)prepareRender:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toDestination:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 error:(id*)arg5;
- (void)reclaimResources;
- (void)render:(id)arg1;
- (void)render:(id)arg1 toBitmap:(void*)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 format:(int)arg5 colorSpace:(struct CGColorSpace { }*)arg6;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toIOSurface:(struct __IOSurface { }*)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 colorSpace:(struct CGColorSpace { }*)arg4;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 target:(unsigned int)arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 colorSpace:(struct CGColorSpace { }*)arg5;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCTM:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)startTaskToClear:(id)arg1 error:(id*)arg2;
- (id)startTaskToRender:(id)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 toDestination:(id)arg3 atPoint:(struct CGPoint { double x1; double x2; })arg4 error:(id*)arg5;
- (id)startTaskToRender:(id)arg1 toDestination:(id)arg2 error:(id*)arg3;
- (void)unlock;
- (struct CGColorSpace { }*)workingColorSpace;
- (int)workingFormat;
- (bool)writeHEIFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;
- (bool)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace { }*)arg3 options:(id)arg4 error:(id*)arg5;
- (bool)writePNGRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;
- (bool)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace { }*)arg4 options:(id)arg5 error:(id*)arg6;

@end
