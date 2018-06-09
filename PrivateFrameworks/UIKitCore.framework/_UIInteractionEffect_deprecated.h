/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInteractionEffect_deprecated : NSObject <_UIDynamicReferenceSystem> {
    UIDynamicAnimator * _animator;
    double  _damping;
    double  _density;
    UIPushBehavior * _forceBehavior;
    double  _forceFactor;
    double  _frequency;
    UIDynamicItemBehavior * _itemProperties;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _preferredContentTransform;
    double  _progress;
    double  _resistance;
    _UISpringBehavior * _springBehavior;
    _UIDynamicTransformer * _transformer;
    id /* block */  _updateBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double forceFactor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredContentTransform;
@property (nonatomic, readonly) double progress;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateBlock;

- (void).cxx_destruct;
- (void)_prepareAnimatorIfNeeded;
- (void)_stopAnimations;
- (void)_updateAnimatorIfNeeded;
- (void)_updateFromTransformer:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)forceFactor;
- (id)init;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredContentTransform;
- (double)progress;
- (void)setForceFactor:(double)arg1;
- (void)setUpdateBlock:(id /* block */)arg1;
- (id /* block */)updateBlock;

@end
