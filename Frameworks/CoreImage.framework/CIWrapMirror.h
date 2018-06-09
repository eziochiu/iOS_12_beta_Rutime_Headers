/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIWrapMirror : CIFilter {
    CIImage * inputImage;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_kernel;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
