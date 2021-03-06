/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKaleidoscope : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    NSNumber * inputCount;
    CIImage * inputImage;
}

+ (id)customAttributes;

- (id)_kernel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_outputExtent;
- (id)outputImage;

@end
