/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKBezierPathPointModel : NSObject {
    NSDictionary * _horizontalPercentageCache;
    UIBezierPath * _path;
    NSArray * _pathElements;
}

@property (nonatomic, readonly) UIBezierPath *path;

- (void).cxx_destruct;
- (id)_buildHorizontalPercentageCache;
- (struct CGPoint { double x1; double x2; })_computePointOnPathForHorizontalPercentage:(double)arg1;
- (id)initWithPath:(id)arg1;
- (id)path;
- (struct CGPoint { double x1; double x2; })pointOnPathForHorizontalPercentage:(double)arg1;

@end
