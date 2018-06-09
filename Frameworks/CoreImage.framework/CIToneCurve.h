/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIToneCurve : CIFilter <_CIFilterProperties> {
    CIImage * _curveImage;
    CIImage * inputImage;
    CIVector * inputPoint0;
    CIVector * inputPoint1;
    CIVector * inputPoint2;
    CIVector * inputPoint3;
    CIVector * inputPoint4;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) CIVector *inputPoint0;
@property (nonatomic, copy) CIVector *inputPoint1;
@property (nonatomic, copy) CIVector *inputPoint2;
@property (nonatomic, copy) CIVector *inputPoint3;
@property (nonatomic, copy) CIVector *inputPoint4;

+ (id)curveImageFromPoints:(const struct CGPoint { double x1; double x2; }*)arg1;
+ (id)curveImageFromPoints:(const struct CGPoint { double x1; double x2; }*)arg1 linear:(bool)arg2;
+ (id)customAttributes;
+ (void)splineCurveTable:(double*)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const struct CGPoint { double x1; double x2; }*)arg4;

- (id)_initFromProperties:(id)arg1;
- (bool)_isIdentity;
- (id)_kernel16;
- (id)_outputProperties;
- (void)dealloc;
- (id)inputImage;
- (id)inputPoint0;
- (id)inputPoint1;
- (id)inputPoint2;
- (id)inputPoint3;
- (id)inputPoint4;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputPoint0:(id)arg1;
- (void)setInputPoint1:(id)arg1;
- (void)setInputPoint2:(id)arg1;
- (void)setInputPoint3:(id)arg1;
- (void)setInputPoint4:(id)arg1;

@end
