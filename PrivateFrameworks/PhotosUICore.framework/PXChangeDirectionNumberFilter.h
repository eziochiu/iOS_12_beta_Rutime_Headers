/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXChangeDirectionNumberFilter : PXNumberFilter {
    double  _minimumChange;
    double  _threshold;
}

@property (nonatomic) double minimumChange;

- (id)initWithInput:(double)arg1;
- (double)initialOutputForInput:(double)arg1;
- (double)minimumChange;
- (void)setMinimumChange:(double)arg1;
- (double)updatedOutput;

@end
