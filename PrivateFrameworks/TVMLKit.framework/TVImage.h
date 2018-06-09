/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVImage : NSObject {
    bool  _cacheImmediately;
    bool  _enableCache;
    struct CGImage { } * _image;
    bool  _imageBufferInMemory;
    NSData * _imageData;
    double  _imageHeight;
    int  _imageOrientation;
    struct CGImageSource { } * _imageSource;
    NSString * _imageType;
    NSURL * _imageURL;
    double  _imageWidth;
    bool  _rotationEnabled;
}

@property (nonatomic, readonly) int orientation;
@property (nonatomic) bool rotationEnabled;

+ (int)exifOrientationForImageOrientation:(long long)arg1;
+ (long long)imageOrientationForExifOrientation:(int)arg1;
+ (id)imageWithCGImageRef:(struct CGImage { }*)arg1 imageOrientation:(long long)arg2 preserveAlpha:(bool)arg3;
+ (id)imageWithCGImageRef:(struct CGImage { }*)arg1 preserveAlpha:(bool)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithPath:(id)arg1;
+ (id)imageWithPath:(id)arg1 cacheImmediately:(bool)arg2;
+ (id)imageWithRotationFromPath:(id)arg1;
+ (id)imageWithRotationFromURL:(id)arg1;
+ (id)imageWithURL:(id)arg1;
+ (id)imageWithURL:(id)arg1 cacheImmediately:(bool)arg2;

- (void).cxx_destruct;
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource { }*)arg1;
- (void)_initializeCGImageWithRotation;
- (long long)_uiImageOrientation;
- (float)aspectRatio;
- (void)dealloc;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)enableCache;
- (bool)hasAlpha;
- (struct CGImage { }*)image;
- (id)imageType;
- (id)initWithCGImageRef:(struct CGImage { }*)arg1 imageOrientation:(long long)arg2 preserveAlpha:(bool)arg3;
- (id)initWithCGImageRef:(struct CGImage { }*)arg1 preserveAlpha:(bool)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cacheImmediately:(bool)arg2;
- (bool)isImageBufferInMemory;
- (bool)isPowerOfTwo;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })largestSquareRect;
- (int)orientation;
- (struct CGSize { double x1; double x2; })pixelBounds;
- (bool)rotationEnabled;
- (void)setEnableCache:(bool)arg1;
- (void)setRotationEnabled:(bool)arg1;
- (bool)sourceRequiresRotation;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg1;
- (id)uiImage;

@end
