/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CICircleSplashDistortion : CIFilter {
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputRadius;
}

@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
