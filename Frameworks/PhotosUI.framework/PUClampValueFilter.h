/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUClampValueFilter : PUValueFilter {
    double  _maximumValue;
    double  _minimumValue;
}

@property (nonatomic) double maximumValue;
@property (nonatomic) double minimumValue;

- (double)maximumValue;
- (double)minimumValue;
- (void)setMaximumValue:(double)arg1;
- (void)setMinimumValue:(double)arg1;
- (double)updatedValue:(double)arg1 withTargetValue:(double)arg2;

@end
