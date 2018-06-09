/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISparseRenderer : CIFilter {
    CIImage * inputImage;
    CIImage * inputMatteImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMatteImage;
@property (nonatomic, copy) NSNumber *inputScale;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)_kernel:(bool)arg1;
- (id)_packageParams:(bool)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 image:(id)arg3;
- (bool)_useD2XRenderer;
- (id)inputImage;
- (id)inputMatteImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
