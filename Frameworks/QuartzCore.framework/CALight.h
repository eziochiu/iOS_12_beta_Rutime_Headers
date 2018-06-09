/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CALight : NSObject

@property (copy) NSString *name;
@property struct CAPoint3D { double x1; double x2; double x3; } position;
@property double specularIntensity;

+ (id)lightWithType:(id)arg1;

- (id)initWithType:(id)arg1;
- (id)name;
- (struct CAPoint3D { double x1; double x2; double x3; })position;
- (void)setName:(id)arg1;
- (void)setPosition:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (void)setSpecularIntensity:(double)arg1;
- (double)specularIntensity;

@end
