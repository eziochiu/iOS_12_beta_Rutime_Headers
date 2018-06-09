/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLDuotoneFilter : CIFilter {
    CIFilter * _colorCubeFilter;
    NSNumber * _inputAddColor;
    NSNumber * _inputAmount;
    CIImage * _inputImage;
    NSNumber * _inputStrength;
    NSNumber * _inputVersion;
    bool  _lastAddColor;
    float  _lastAmount;
    float  _lastStrength;
    long long  _lastVersion;
    bool  _needsReprocess;
}

@property (nonatomic, retain) CIFilter *colorCubeFilter;
@property (nonatomic, copy) NSNumber *inputAddColor;
@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputStrength;
@property (nonatomic, copy) NSNumber *inputVersion;

- (void).cxx_destruct;
- (id)colorCubeFilter;
- (id)inputAddColor;
- (id)inputAmount;
- (id)inputImage;
- (id)inputStrength;
- (id)inputVersion;
- (id)outputImage;
- (void)setColorCubeFilter:(id)arg1;
- (void)setInputAddColor:(id)arg1;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputStrength:(id)arg1;
- (void)setInputVersion:(id)arg1;

@end
