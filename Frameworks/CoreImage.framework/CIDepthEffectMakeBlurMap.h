/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthEffectMakeBlurMap : CIFilter {
    NSNumber * inputAperture;
    id  inputAuxDataMetadata;
    AVCameraCalibrationData * inputCalibrationData;
    CIVector * inputChinPosition;
    CIVector * inputFaceMidPoint;
    CIVector * inputFocusRect;
    CIImage * inputImage;
    CIVector * inputLeftEyePosition;
    CIImage * inputMatteImage;
    CIVector * inputRightEyePosition;
    NSNumber * inputScale;
    CIImage * inputShiftmapImage;
    NSNumber * inputShouldAutoRotate;
    float  simulatedAperture;
    NSDictionary * tuningParameters;
}

@property (nonatomic, copy) NSNumber *inputAperture;
@property (nonatomic, retain) id inputAuxDataMetadata;
@property (nonatomic, retain) AVCameraCalibrationData *inputCalibrationData;
@property (retain) CIVector *inputChinPosition;
@property (retain) CIVector *inputFaceMidPoint;
@property (nonatomic, retain) CIVector *inputFocusRect;
@property (retain) CIImage *inputImage;
@property (retain) CIVector *inputLeftEyePosition;
@property (retain) CIImage *inputMatteImage;
@property (retain) CIVector *inputRightEyePosition;
@property (nonatomic, copy) NSNumber *inputScale;
@property (retain) CIImage *inputShiftmapImage;
@property (nonatomic, retain) NSNumber *inputShouldAutoRotate;

+ (id)customAttributes;

- (id)blurMapV2:(id)arg1;
- (id)blurMapV3:(id)arg1 shiftmap:(id)arg2 alphaImage:(id)arg3;
- (id)calibrationData;
- (id)faceMaskApply:(id)arg1 blurMap:(id)arg2;
- (id)faceMaskParams:(id)arg1;
- (id)inputAperture;
- (id)inputAuxDataMetadata;
- (id)inputCalibrationData;
- (id)inputChinPosition;
- (id)inputFaceMidPoint;
- (id)inputFocusRect;
- (id)inputImage;
- (id)inputLeftEyePosition;
- (id)inputMatteImage;
- (id)inputRightEyePosition;
- (id)inputScale;
- (id)inputShiftmapImage;
- (id)inputShouldAutoRotate;
- (float)intrinsicMatrixFocalLength;
- (id)lensModelApply:(id)arg1 shiftMap:(id)arg2;
- (id)lensModelParams:(id)arg1;
- (bool)needToRunFaceMask;
- (struct CGSize { double x1; double x2; })originalShiftMapSize;
- (id)outputImage;
- (id)refineShiftMapV3:(id)arg1 mainImage:(id)arg2 shiftmap:(id)arg3;
- (void)setInputAperture:(id)arg1;
- (void)setInputAuxDataMetadata:(id)arg1;
- (void)setInputCalibrationData:(id)arg1;
- (void)setInputChinPosition:(id)arg1;
- (void)setInputFaceMidPoint:(id)arg1;
- (void)setInputFocusRect:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLeftEyePosition:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputRightEyePosition:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputShiftmapImage:(id)arg1;
- (void)setInputShouldAutoRotate:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)smoothShiftMapV2:(id)arg1;
- (id)transformPoints:(id)arg1 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (id)upsampledShiftMap:(id)arg1;

@end
