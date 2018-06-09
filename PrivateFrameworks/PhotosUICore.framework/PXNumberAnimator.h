/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator> {
    NSMutableArray * _animations;
    struct _PXValueAnimationSpec { 
        long long type; 
        double epsilon; 
        double stiffness; 
        double dampingRatio; 
        double initialVelocity; 
    }  _currentAnimationSpec;
    CADisplayLink * _displayLink;
    double  _epsilon;
    bool  _isPerformingChanges;
    struct { 
        bool presentationValue; 
    }  _needsUpdateFlags;
    double  _presentationValue;
    double  _value;
}

@property (nonatomic, readonly) double epsilon;
@property (setter=_setPresentationValue:, nonatomic) double presentationValue;
@property (nonatomic, readonly) double value;

- (void).cxx_destruct;
- (void)_handleDisplayLink:(id)arg1;
- (void)_invalidatePresentationValue;
- (bool)_needsUpdate;
- (void)_setAnimating:(bool)arg1;
- (void)_setNeedsUpdate;
- (void)_setPresentationValue:(double)arg1;
- (void)_updateIfNeeded;
- (void)_updatePresentationValueIfNeeded;
- (void)dealloc;
- (void)didPerformChanges;
- (double)epsilon;
- (id)init;
- (id)initWithValue:(double)arg1;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(double)arg1 changes:(id /* block */)arg2;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)arg1 dampingRatio:(double)arg2 initialVelocity:(double)arg3 changes:(id /* block */)arg4;
- (void)performChangesWithoutAnimation:(id /* block */)arg1;
- (double)presentationValue;
- (void)setValue:(double)arg1;
- (double)value;

@end
