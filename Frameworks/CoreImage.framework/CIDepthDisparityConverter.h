/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthDisparityConverter : CIFilter {
    CIImage * inputImage;
}

@property (retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
