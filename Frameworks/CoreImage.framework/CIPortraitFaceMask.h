/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitFaceMask : CIFilter {
    NSDictionary * _inputFaceLandmarks;
    CIImage * _inputImage;
}

@property (nonatomic, retain) NSDictionary *inputFaceLandmarks;
@property (nonatomic, retain) CIImage *inputImage;

- (id)inputFaceLandmarks;
- (id)inputImage;
- (id)outputImage;
- (void)setInputFaceLandmarks:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
