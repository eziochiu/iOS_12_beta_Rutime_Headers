/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNNOPRequest : VNImageBasedRequest {
    double  _detectorExecutionTimeInterval;
    VNSupportedImageSize * _detectorPreferredImageSize;
    bool  _detectorWantsAnisotropicScaling;
}

@property (nonatomic) double detectorExecutionTimeInterval;
@property (nonatomic, copy) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) bool detectorWantsAnisotropicScaling;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_actualSizeForDesiredSize:(id)arg1 ofSourceImageWidth:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct __CVBuffer { }*)_createScaledImagePixelBufferFromCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 ofImageBuffer:(id)arg2 inPixelFormat:(unsigned int)arg3 forDetectorInputImageSize:(struct CGSize { double x1; double x2; })arg4 usingAnisotropicScaling:(bool)arg5 options:(id)arg6 error:(id*)arg7;
- (struct __CVBuffer { }*)_createScaledImagePixelBufferFromImageBuffer:(id)arg1 inPixelFormat:(unsigned int)arg2 forDetectorInputImageSize:(struct CGSize { double x1; double x2; })arg3 usingAnisotropicScaling:(bool)arg4 options:(id)arg5 error:(id*)arg6;
- (double)detectorExecutionTimeInterval;
- (id)detectorPreferredImageSize;
- (bool)detectorWantsAnisotropicScaling;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (void)setDetectorExecutionTimeInterval:(double)arg1;
- (void)setDetectorPreferredImageSize:(id)arg1;
- (void)setDetectorWantsAnisotropicScaling:(bool)arg1;
- (id)supportedImageSizeSet;

@end
