/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISmartToneFilter : CIFilter {
    CIContext * _cubeContext;
    NSData * _cubeData;
    CIImage * _cubeImage;
    NSData * _inputLightMap;
    NSNumber * inputBlack;
    NSNumber * inputBrightness;
    NSNumber * inputContrast;
    NSNumber * inputExposure;
    NSNumber * inputHighlights;
    CIImage * inputImage;
    NSNumber * inputLocalLight;
    NSNumber * inputRawHighlights;
    NSNumber * inputShadows;
    NSNumber * inputUseCube;
    id  inputUseCubeColorSpace;
}

@property (nonatomic, retain) NSNumber *inputBlack;
@property (nonatomic, retain) NSNumber *inputBrightness;
@property (nonatomic, retain) NSNumber *inputContrast;
@property (nonatomic, retain) NSNumber *inputExposure;
@property (nonatomic, retain) NSNumber *inputHighlights;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSData *inputLightMap;
@property (nonatomic, retain) NSNumber *inputLocalLight;
@property (nonatomic, retain) NSNumber *inputRawHighlights;
@property (nonatomic, retain) NSNumber *inputShadows;
@property (nonatomic, retain) NSNumber *inputUseCube;
@property (nonatomic, retain) id inputUseCubeColorSpace;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernelBneg;
- (id)_kernelBpos;
- (id)_kernelC;
- (id)_kernelH;
- (id)_kernelRH;
- (void)dealloc;
- (id)inputBlack;
- (id)inputBrightness;
- (id)inputContrast;
- (id)inputExposure;
- (id)inputHighlights;
- (id)inputImage;
- (id)inputLightMap;
- (id)inputLocalLight;
- (id)inputRawHighlights;
- (id)inputShadows;
- (id)inputUseCube;
- (id)inputUseCubeColorSpace;
- (id)outputImage;
- (void)setInputBlack:(id)arg1;
- (void)setInputBrightness:(id)arg1;
- (void)setInputContrast:(id)arg1;
- (void)setInputExposure:(id)arg1;
- (void)setInputHighlights:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLightMap:(id)arg1;
- (void)setInputLocalLight:(id)arg1;
- (void)setInputRawHighlights:(id)arg1;
- (void)setInputShadows:(id)arg1;
- (void)setInputUseCube:(id)arg1;
- (void)setInputUseCubeColorSpace:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;

@end
