/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUBrushMaskGenerator : CIFilter {
    NSNumber * _inputClosed;
    NSNumber * _inputOpacity;
    NSArray * _inputPoints;
    NSNumber * _inputPressureMode;
    NSNumber * _inputRadius;
    NSNumber * _inputSoftness;
    NSNumber * _inputTiled;
}

@property (nonatomic, retain) NSNumber *inputClosed;
@property (nonatomic, retain) NSNumber *inputOpacity;
@property (nonatomic, retain) NSArray *inputPoints;
@property (nonatomic, retain) NSNumber *inputPressureMode;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputSoftness;
@property (nonatomic, retain) NSNumber *inputTiled;

- (void).cxx_destruct;
- (id)_applyOpacity:(double)arg1 toMask:(id)arg2;
- (id)inputClosed;
- (id)inputOpacity;
- (id)inputPoints;
- (id)inputPressureMode;
- (id)inputRadius;
- (id)inputSoftness;
- (id)inputTiled;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputClosed:(id)arg1;
- (void)setInputOpacity:(id)arg1;
- (void)setInputPoints:(id)arg1;
- (void)setInputPressureMode:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputSoftness:(id)arg1;
- (void)setInputTiled:(id)arg1;

@end
