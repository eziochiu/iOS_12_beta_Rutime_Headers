/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLUnderwaterBalanceFilter : CIFilter {
    CIVector * _inputAverageLinearColor;
    NSNumber * _inputDepthStrength;
    CIImage * _inputImage;
    NSNumber * _inputWaterBlend;
    float  _lastDepthStrength;
    float  _lastWaterBlend;
    bool  _needsReprocess;
    CIFilter * _underwaterAdditionFilter;
    CIFilter * _underwaterBalanceFilter;
    CIFilter * _underwaterColorMatrixIQFilter;
    CIFilter * _underwaterColorMatrixRGB2YIQFilter;
    CIFilter * _underwaterColorMatrixScaleFilter;
    CIFilter * _underwaterColorMatrixYFilter;
    CIFilter * _underwaterColorMatrixYIQ2RGBFilter;
    CIFilter * _underwaterGamma1Filter;
    CIFilter * _underwaterGamma2Filter;
}

@property (nonatomic, copy) CIVector *inputAverageLinearColor;
@property (nonatomic, copy) NSNumber *inputDepthStrength;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputWaterBlend;
@property (nonatomic, retain) CIFilter *underwaterAdditionFilter;
@property (nonatomic, retain) CIFilter *underwaterBalanceFilter;
@property (nonatomic, retain) CIFilter *underwaterColorMatrixIQFilter;
@property (nonatomic, retain) CIFilter *underwaterColorMatrixRGB2YIQFilter;
@property (nonatomic, retain) CIFilter *underwaterColorMatrixScaleFilter;
@property (nonatomic, retain) CIFilter *underwaterColorMatrixYFilter;
@property (nonatomic, retain) CIFilter *underwaterColorMatrixYIQ2RGBFilter;
@property (nonatomic, retain) CIFilter *underwaterGamma1Filter;
@property (nonatomic, retain) CIFilter *underwaterGamma2Filter;

- (void).cxx_destruct;
- (id)init;
- (id)inputAverageLinearColor;
- (id)inputDepthStrength;
- (id)inputImage;
- (id)inputWaterBlend;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputAverageLinearColor:(id)arg1;
- (void)setInputDepthStrength:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputWaterBlend:(id)arg1;
- (void)setUnderwaterAdditionFilter:(id)arg1;
- (void)setUnderwaterBalanceFilter:(id)arg1;
- (void)setUnderwaterColorMatrixIQFilter:(id)arg1;
- (void)setUnderwaterColorMatrixRGB2YIQFilter:(id)arg1;
- (void)setUnderwaterColorMatrixScaleFilter:(id)arg1;
- (void)setUnderwaterColorMatrixYFilter:(id)arg1;
- (void)setUnderwaterColorMatrixYIQ2RGBFilter:(id)arg1;
- (void)setUnderwaterGamma1Filter:(id)arg1;
- (void)setUnderwaterGamma2Filter:(id)arg1;
- (id)underwaterAdditionFilter;
- (id)underwaterBalanceFilter;
- (id)underwaterColorMatrixIQFilter;
- (id)underwaterColorMatrixRGB2YIQFilter;
- (id)underwaterColorMatrixScaleFilter;
- (id)underwaterColorMatrixYFilter;
- (id)underwaterColorMatrixYIQ2RGBFilter;
- (id)underwaterGamma1Filter;
- (id)underwaterGamma2Filter;

@end
