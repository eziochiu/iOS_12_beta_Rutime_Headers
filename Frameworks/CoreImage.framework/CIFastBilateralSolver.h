/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFastBilateralSolver : CIFilter {
    CIImage * inputConfidenceMapImage;
    CIImage * inputDisparityImage;
    CIImage * inputImage;
    NSNumber * inputLambda;
    NSNumber * inputMaxNumIterations;
    NSNumber * inputMaxNumVertices;
    NSNumber * inputSigmaRChroma;
    NSNumber * inputSigmaRLuma;
    NSNumber * inputSigmaS;
}

@property (retain) CIImage *inputConfidenceMapImage;
@property (retain) CIImage *inputDisparityImage;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLambda;
@property (nonatomic, copy) NSNumber *inputMaxNumIterations;
@property (nonatomic, copy) NSNumber *inputMaxNumVertices;
@property (nonatomic, copy) NSNumber *inputSigmaRChroma;
@property (nonatomic, copy) NSNumber *inputSigmaRLuma;
@property (nonatomic, copy) NSNumber *inputSigmaS;

+ (id)customAttributes;

- (id)inputConfidenceMapImage;
- (id)inputDisparityImage;
- (id)inputImage;
- (id)inputLambda;
- (id)inputMaxNumIterations;
- (id)inputMaxNumVertices;
- (id)inputSigmaRChroma;
- (id)inputSigmaRLuma;
- (id)inputSigmaS;
- (id)outputImage;
- (void)setInputConfidenceMapImage:(id)arg1;
- (void)setInputDisparityImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLambda:(id)arg1;
- (void)setInputMaxNumIterations:(id)arg1;
- (void)setInputMaxNumVertices:(id)arg1;
- (void)setInputSigmaRChroma:(id)arg1;
- (void)setInputSigmaRLuma:(id)arg1;
- (void)setInputSigmaS:(id)arg1;

@end
