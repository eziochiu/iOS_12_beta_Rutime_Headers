/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIStraightenFilter : CIFilter {
    NSNumber * inputAngle;
    CIImage * inputImage;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)inputAngle;
- (id)inputImage;
- (id)outputImage;
- (void)setInputAngle:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
