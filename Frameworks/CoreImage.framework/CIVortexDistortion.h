/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIVortexDistortion : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
