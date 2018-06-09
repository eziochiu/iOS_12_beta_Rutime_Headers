/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKBlendNoiseModifier : GKNoiseModifier {
    double  _blendDistance;
    double  _lowerBound;
    double  _upperBound;
}

- (id)cloneModule;
- (id)init;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)initWithSelectionRangeLowerBound:(double)arg1 selectionRangeUpperBound:(double)arg2 selectionBoundaryBlendDistance:(double)arg3;
- (int)requiredInputModuleCount;
- (double)valueAt;

@end
