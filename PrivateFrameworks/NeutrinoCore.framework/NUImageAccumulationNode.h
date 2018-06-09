/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageAccumulationNode : NURenderNode {
    NUColorSpace * _colorSpace;
    <NUMutablePurgeableImage> * _image;
    struct { 
        long long width; 
        long long height; 
    }  _imageSize;
    NUImageLayout * _layout;
    NUPixelFormat * _pixelFormat;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) NUColorSpace *colorSpace;
@property (nonatomic, readonly) <NUMutablePurgeableImage> *image;
@property (nonatomic, readonly) struct { long long x1; long long x2; } imageSize;
@property (nonatomic, readonly) NUImageLayout *layout;
@property (nonatomic, readonly) NUPixelFormat *pixelFormat;

- (void).cxx_destruct;
- (id)_image;
- (id)_newImage;
- (id)colorSpace;
- (id)image;
- (struct { long long x1; long long x2; })imageSize;
- (id)initWithImageSize:(struct { long long x1; long long x2; })arg1 tileSize:(struct { long long x1; long long x2; })arg2 pixelFormat:(id)arg3 colorSpace:(id)arg4 input:(id)arg5;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary { Class x1; }*)arg2;
- (id)layout;
- (id)pixelFormat;

@end
