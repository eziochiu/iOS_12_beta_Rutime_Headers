/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKMeans : CIReductionFilter {
    NSNumber * inputCount;
    CIImage * inputMeans;
    NSNumber * inputPasses;
    NSNumber * inputPerceptual;
}

@property (nonatomic, copy) NSNumber *inputCount;
@property (nonatomic, retain) CIImage *inputMeans;
@property (nonatomic, copy) NSNumber *inputPasses;
@property (nonatomic, copy) NSNumber *inputPerceptual;

+ (id)customAttributes;

- (id)_combine:(id)arg1;
- (id)_kernelKmeans;
- (id)inputCount;
- (id)inputMeans;
- (id)inputPasses;
- (id)inputPerceptual;
- (id)outputImage;
- (void)setInputCount:(id)arg1;
- (void)setInputMeans:(id)arg1;
- (void)setInputPasses:(id)arg1;
- (void)setInputPerceptual:(id)arg1;

@end
