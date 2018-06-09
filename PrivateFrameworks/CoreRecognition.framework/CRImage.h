/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRImage : NSObject {
    struct CGImage { } * _cgImage;
    CIImage * _ciImage;
    unsigned long long  _height;
    struct __CVBuffer { } * _pixelBuffer;
    struct vImage_Buffer { 
        void *data; 
        unsigned long long height; 
        unsigned long long width; 
        unsigned long long rowBytes; 
    }  _vImage;
    bool  _vImageDataNeedsRelease;
    unsigned long long  _width;
}

@property (nonatomic) struct CGImage { }*cgImage;
@property (nonatomic, retain) CIImage *ciImage;
@property unsigned long long height;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;
@property struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } vImage;
@property (nonatomic) bool vImageDataNeedsRelease;
@property unsigned long long width;

+ (void)cgOrientation:(unsigned int)arg1 toVImageRotationMode:(char *)arg2 andReflection:(int*)arg3;

- (void).cxx_destruct;
- (struct CGImage { }*)cgImage;
- (id)ciImage;
- (void)dealloc;
- (unsigned long long)height;
- (id)imageByApplyingHistogramCorrection;
- (id)imageByCroppingRectangle:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)imageByCroppingTextFeature:(id)arg1 correctedBoundingBox:(id)arg2;
- (id)imageByInvertingIntensity;
- (id)imageByPaddingToRatioAndScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)imageByRotating180;
- (id)imageByRotating90CW;
- (id)imageByScalingToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 properties:(id)arg2;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCVPixelBufferFromLumaNoCopy:(struct __CVBuffer { }*)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithVImageBuffer:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setCgImage:(struct CGImage { }*)arg1;
- (void)setCiImage:(id)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setVImage:(struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })arg1;
- (void)setVImageDataNeedsRelease:(bool)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (struct vImage_Buffer { void *x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; })vImage;
- (bool)vImageDataNeedsRelease;
- (unsigned long long)width;
- (void)writeToFile:(id)arg1;

@end
