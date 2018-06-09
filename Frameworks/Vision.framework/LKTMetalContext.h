/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface LKTMetalContext : NSObject {
    <MTLCommandQueue> * _commandQueue;
    <MTLDevice> * _device;
    <MTLLibrary> * _library;
}

@property (nonatomic, readonly) <MTLCommandQueue> *commandQueue;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) <MTLLibrary> *library;

+ (unsigned long long)bytesPerPixelForTextureFormat:(unsigned long long)arg1;
+ (void)makeTextureCoherent:(id)arg1 texture:(id)arg2;
+ (id)metalContextForDevice:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)bindIOSurfaceToMTL2DTexture:(struct __IOSurface { }*)arg1 pixelFormat:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 plane:(unsigned long long)arg5 error:(id*)arg6;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 plane:(unsigned long long)arg3 error:(id*)arg4;
- (id)bindPixelBufferToMTL2DTexture:(struct __CVBuffer { }*)arg1 pixelFormat:(unsigned long long)arg2 textureSize:(struct CGSize { double x1; double x2; })arg3 plane:(unsigned long long)arg4 error:(id*)arg5;
- (id)commandQueue;
- (id)device;
- (id)initWithDevice:(id)arg1 error:(id*)arg2;
- (id)library;
- (unsigned long long)textureBytesPerRow:(unsigned long long)arg1 format:(unsigned long long)arg2;

@end
