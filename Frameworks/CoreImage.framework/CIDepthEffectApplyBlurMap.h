/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthEffectApplyBlurMap : CIFilter {
    id  inputAuxDataMetadata;
    CIImage * inputBlurMap;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseScale;
    CIImage * inputMatteImage;
    NSNumber * inputScale;
    NSString * inputShape;
    NSNumber * inputShouldAutoRotate;
}

@property (nonatomic, retain) id inputAuxDataMetadata;
@property (retain) CIImage *inputBlurMap;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseScale;
@property (retain) CIImage *inputMatteImage;
@property (nonatomic, retain) NSNumber *inputScale;
@property (nonatomic, retain) NSString *inputShape;
@property (nonatomic, retain) NSNumber *inputShouldAutoRotate;

+ (id)customAttributes;

- (id)inputAuxDataMetadata;
- (id)inputBlurMap;
- (id)inputImage;
- (id)inputLumaNoiseScale;
- (id)inputMatteImage;
- (id)inputScale;
- (id)inputShape;
- (id)inputShouldAutoRotate;
- (id)outputImage;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputBlurMap:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseScale:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShape:(id)arg1;
- (void)setInputShouldAutoRotate:(id)arg1;

@end
