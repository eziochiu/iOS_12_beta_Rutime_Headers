/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIHighlightRecovery : CIFilter {
    CIImage * inputImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) NSNumber *inputScale;
@property (retain) NSDictionary *inputTuningParameters;

- (id)inputImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
