/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPanelAnimationState : NSObject {
    long long  _affectedSides;
    UIViewPropertyAnimator * _animator;
    UISlidingBarStateRequest * _fromRequest;
    double  _progress;
    UISlidingBarStateRequest * _toRequest;
}

@property (nonatomic) long long affectedSides;
@property (nonatomic, retain) UIViewPropertyAnimator *animator;
@property (nonatomic, copy) UISlidingBarStateRequest *fromRequest;
@property (nonatomic) double progress;
@property (nonatomic, readonly) UISlidingBarStateRequest *stateRequest;
@property (nonatomic, copy) UISlidingBarStateRequest *toRequest;

+ (double)defaultDuration;
+ (id)timingCurveProvider;

- (void).cxx_destruct;
- (long long)affectedSides;
- (id)animator;
- (id)fromRequest;
- (double)progress;
- (void)setAffectedSides:(long long)arg1;
- (void)setAnimator:(id)arg1;
- (void)setFromRequest:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setToRequest:(id)arg1;
- (id)stateRequest;
- (id)toRequest;

@end
