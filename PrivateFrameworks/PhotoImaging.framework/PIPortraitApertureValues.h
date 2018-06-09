/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PIPortraitApertureValues : NSObject {
    float  _aperture;
    NSNumber * _minimumAperture;
}

@property (nonatomic) float aperture;
@property (nonatomic, retain) NSNumber *minimumAperture;

+ (id)apertureValuesFromImageProperties:(id)arg1 error:(out id*)arg2;

- (void).cxx_destruct;
- (float)aperture;
- (id)minimumAperture;
- (void)setAperture:(float)arg1;
- (void)setMinimumAperture:(id)arg1;

@end
