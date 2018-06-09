/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLAuraFilter : CIFilter {
    CIFilter * _colorCubeFilter;
    NSNumber * _inputAmount;
    CIImage * _inputImage;
    NSNumber * _inputSaturationHighPoint;
    NSNumber * _inputVersion;
    float  _lastAmount;
    float  _lastSaturationHighPoint;
    long long  _lastVersion;
    bool  _needsReprocess;
}

@property (nonatomic, retain) CIFilter *colorCubeFilter;
@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputSaturationHighPoint;
@property (nonatomic, copy) NSNumber *inputVersion;

- (void).cxx_destruct;
- (id)colorCubeFilter;
- (id)init;
- (id)inputAmount;
- (id)inputImage;
- (id)inputSaturationHighPoint;
- (id)inputVersion;
- (id)outputImage;
- (void)setColorCubeFilter:(id)arg1;
- (void)setDefaults;
- (void)setInputAmount:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputSaturationHighPoint:(id)arg1;
- (void)setInputVersion:(id)arg1;

@end