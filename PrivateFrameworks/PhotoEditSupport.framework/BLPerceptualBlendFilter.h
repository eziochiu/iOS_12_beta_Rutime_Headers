/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLPerceptualBlendFilter : CIFilter {
    CIImage * _inputBackgroundImage;
    CIImage * _inputImage;
    CIImage * _inputMaskImage;
}

@property (retain) CIImage *inputBackgroundImage;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMaskImage;

- (void).cxx_destruct;
- (id)inputBackgroundImage;
- (id)inputImage;
- (id)inputMaskImage;
- (id)outputImage;
- (void)setInputBackgroundImage:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaskImage:(id)arg1;

@end
