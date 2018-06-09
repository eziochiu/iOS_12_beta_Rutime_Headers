/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PISelectiveColorFilter : CIFilter {
    NSArray * _inputCorrections;
    CIImage * _inputImage;
}

@property (nonatomic, retain) NSArray *inputCorrections;
@property (nonatomic, retain) CIImage *inputImage;

+ (id)convertFromIPT:(id)arg1;
+ (id)convertToIPT:(id)arg1;
+ (float)hueAngleFrom:(const float*)arg1;
+ (void)iptFromLinearInto:(float*)arg1 fromRed:(float)arg2 green:(float)arg3 blue:(float)arg4;
+ (double)iptHueAngleFromRed:(double)arg1 green:(double)arg2 blue:(double)arg3;
+ (id)selectiveColorKernels;

- (void).cxx_destruct;
- (id)hueSatLumTable;
- (id)inputCorrections;
- (id)inputImage;
- (id)outputImage;
- (void)setInputCorrections:(id)arg1;
- (void)setInputImage:(id)arg1;

@end
