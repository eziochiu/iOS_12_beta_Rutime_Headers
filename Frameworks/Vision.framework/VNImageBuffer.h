/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageBuffer : NSObject {
    VNImageSourceManager * _imageSourceManager;
    NSDictionary * _options;
    int  _orientation;
    CIImage * _origCIImage;
    unsigned long long  _origImageHeight;
    unsigned long long  _origImageWidth;
    struct __CVBuffer { } * _origPixelBuffer;
    CIContext * _passedInCIContext;
    struct __CFArray { } * _pixelBufferReps;
}

@property (readonly) unsigned long long height;
@property (readonly) unsigned long long width;

+ (int)_helpReadOrientationFromOptionsDictionary:(id)arg1;
+ (struct CGColorSpace { }*)copyColorspaceForFormat:(unsigned int)arg1 bitmapInfo:(unsigned int*)arg2;
+ (struct __CFDictionary { }*)pixelBufferAttributes;

- (void).cxx_destruct;
- (id)_baseCIImage;
- (struct __CVBuffer { }*)_baseCVPixelBuffer;
- (bool)_cropCIImage:(id)arg1 outBuffer:(struct __CVBuffer {}**)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 performCrop:(bool)arg7 options:(id)arg8 error:(id*)arg9;
- (bool)_cropCVPixelBuffer:(struct __CVBuffer { }*)arg1 outBuffer:(struct __CVBuffer {}**)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 performCrop:(bool)arg7 options:(id)arg8 error:(id*)arg9;
- (bool)_cropImageSourceManager:(id)arg1 outBuffer:(struct __CVBuffer {}**)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 format:(unsigned int)arg5 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 performCrop:(bool)arg7 options:(id)arg8 error:(id*)arg9;
- (bool)_useCoreImageForFormat:(unsigned int)arg1;
- (id)augmentedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 augmentationOptions:(id)arg5 error:(id*)arg6;
- (id)augmentedCroppedBuffersWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 options:(id)arg5 augmentationOptions:(id)arg6 error:(id*)arg7;
- (struct __CVBuffer { }*)bufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 options:(id)arg4 error:(id*)arg5;
- (void)calculateOrientationCorrectedImageDimensions;
- (struct __CVBuffer { }*)createBufferWithMaxSideLengthOf:(unsigned long long)arg1 andPixelFormat:(unsigned int)arg2 andOptions:(id)arg3 error:(id*)arg4;
- (struct __CVBuffer { }*)createCroppedBufferWithMaxSideLengthOf:(unsigned long long)arg1 andCropBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 andPixelFormat:(unsigned int)arg3 andOptions:(id)arg4 error:(id*)arg5;
- (struct __CVBuffer { }*)croppedBufferWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 format:(unsigned int)arg3 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 options:(id)arg5 error:(id*)arg6;
- (void)dealloc;
- (id)fileURL;
- (bool)getCameraIntrinsicsAvailable:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; }*)arg1;
- (bool)getCameraOpticalCenterIfAvailable:(struct CGPoint { double x1; double x2; }*)arg1;
- (bool)getPixelFocalLengthIfAvailable:(float*)arg1;
- (unsigned long long)height;
- (id)imageProperties;
- (id)initWithCGImage:(struct CGImage { }*)arg1 options:(id)arg2;
- (id)initWithCIImage:(id)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer { }*)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })makeClippedRectAgainstImageExtentUsingOriginalRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)orientation;
- (struct __CVBuffer { }*)originalPixelBuffer;
- (bool)processInChunksOfSize:(unsigned long long)arg1 overlapFraction:(float)arg2 options:(id)arg3 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 handler:(id /* block */)arg5 error:(id*)arg6;
- (void)purgeCachedRepresentations;
- (unsigned long long)width;

@end
