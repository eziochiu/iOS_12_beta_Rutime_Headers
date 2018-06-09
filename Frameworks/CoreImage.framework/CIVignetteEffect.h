/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVignetteEffect : CIFilter {
    CIVector * inputCenter;
    NSNumber * inputFalloff;
    CIImage * inputImage;
    NSNumber * inputIntensity;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) NSNumber *inputFalloff;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_negkernel;
- (id)_poskernel;
- (id)inputCenter;
- (id)inputFalloff;
- (id)inputImage;
- (id)inputIntensity;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputFalloff:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
