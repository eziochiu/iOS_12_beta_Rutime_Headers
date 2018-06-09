/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIMotionBlur : CILinearBlur {
    NSNumber * inputAngle;
}

@property (nonatomic, retain) NSNumber *inputAngle;

+ (id)customAttributes;

- (id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3;
- (id)_kernel;
- (id)inputAngle;
- (void)setInputAngle:(id)arg1;

@end
