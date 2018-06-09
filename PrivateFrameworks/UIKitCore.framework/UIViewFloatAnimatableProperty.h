/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIViewFloatAnimatableProperty : NSObject {
    UIAnimatablePropertyState * _animatablePropertyState;
    NSObject<OS_dispatch_queue> * _animatablePropertyStateLockingQueue;
    bool  _invalidated;
    NSObject<OS_dispatch_queue> * _invalidationLockingQueue;
    bool  _performingInterpolationBetweenTwoStates;
    double  _presentationValue;
    NSObject<OS_dispatch_queue> * _presentationValueLockingQueue;
    _UIViewAnimatablePropertyTransformer * _transformer;
    double  _value;
}

@property (nonatomic, retain) UIAnimatablePropertyState *animatablePropertyState;
@property (getter=isInvalidated, nonatomic, readonly) bool invalidated;
@property (nonatomic) bool performingInterpolationBetweenTwoStates;
@property (nonatomic) double presentationValue;
@property (nonatomic, retain) _UIViewAnimatablePropertyTransformer *transformer;
@property (nonatomic) double value;
@property (nonatomic) double velocity;

- (void).cxx_destruct;
- (bool)_performAnimation;
- (id)animatablePropertyState;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)invalidateAndStopImmediately:(bool)arg1;
- (bool)isInvalidated;
- (bool)performingInterpolationBetweenTwoStates;
- (double)presentationValue;
- (void)setAnimatablePropertyState:(id)arg1;
- (void)setPerformingInterpolationBetweenTwoStates:(bool)arg1;
- (void)setPresentationValue:(double)arg1;
- (void)setTransformer:(id)arg1;
- (void)setValue:(double)arg1;
- (void)setVelocity:(double)arg1;
- (id)transformer;
- (double)value;
- (double)velocity;

@end
