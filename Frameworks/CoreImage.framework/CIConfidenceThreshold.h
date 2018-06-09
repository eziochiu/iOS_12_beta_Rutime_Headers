/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIConfidenceThreshold : CIFilter {
    CIVector * inputFocusRect;
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, copy) CIVector *inputFocusRect;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputScale;

+ (id)customAttributes;

- (id)inputFocusRect;
- (id)inputImage;
- (id)inputScale;
- (id)outputImage;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (id)thresholdKernel;
- (id)transitionDepthsKernel;

@end
