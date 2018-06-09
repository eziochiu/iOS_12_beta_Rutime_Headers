/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIRAWFaceBalance : CIFilter {
    CIImage * _inputImage;
    double  _inputOrigI;
    double  _inputOrigQ;
    double  _inputStrength;
    double  _inputWarmth;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic) double inputOrigI;
@property (nonatomic) double inputOrigQ;
@property (nonatomic) double inputStrength;
@property (nonatomic) double inputWarmth;

+ (id)faceBalanceKernels;
+ (struct CGColorSpace { }*)linearWideGamutColorSpace;
+ (struct CGColorSpace { }*)newLinearWideGamutColorSpace;

- (void).cxx_destruct;
- (id)inputImage;
- (double)inputOrigI;
- (double)inputOrigQ;
- (double)inputStrength;
- (double)inputWarmth;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputOrigI:(double)arg1;
- (void)setInputOrigQ:(double)arg1;
- (void)setInputStrength:(double)arg1;
- (void)setInputWarmth:(double)arg1;

@end
