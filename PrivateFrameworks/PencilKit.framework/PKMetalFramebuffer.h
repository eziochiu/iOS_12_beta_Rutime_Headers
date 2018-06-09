/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalFramebuffer : NSObject {
    bool  _backedByIOSurface;
    <MTLTexture> * _colorTexture;
    <MTLDevice> * _device;
    struct __IOSurface { } * _ioSurface;
    bool  _memoryless;
    struct __CVBuffer { } * _pixelBuffer;
    unsigned long long  _pixelFormat;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) bool backedByIOSurface;
@property (nonatomic, readonly) <MTLTexture> *colorTexture;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (nonatomic, readonly) bool memoryless;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (bool)backedByIOSurface;
- (id)colorTexture;
- (void)createColorTextureIfNecessary;
- (struct __IOSurface { }*)createIOSurface;
- (void)dealloc;
- (id)device;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 pixelFormat:(unsigned long long)arg2 device:(id)arg3 memoryless:(bool)arg4 backedByIOSurface:(bool)arg5;
- (bool)memoryless;
- (struct __CVBuffer { }*)pixelBuffer;
- (unsigned long long)pixelFormat;
- (struct CGSize { double x1; double x2; })size;

@end
