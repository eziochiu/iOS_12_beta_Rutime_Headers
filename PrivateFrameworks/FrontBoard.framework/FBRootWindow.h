/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBRootWindow : _UIRootWindow <FBSceneTransformTarget> {
    CALayer * _bezelLayer;
    CALayer * _maskLayer;
    UIView * _sceneContainerView;
    UIView * _systemGestureView;
    NSHashTable * _transforms;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSecure;

- (void).cxx_destruct;
- (bool)_appearsInLoupe;
- (bool)_canBecomeKeyWindow;
- (id)_focusResponder;
- (bool)_shouldPrepareScreenForWindow;
- (id)_systemGestureView;
- (void)_updateTransforms;
- (bool)_usesWindowServerHitTesting;
- (void)attachSceneTransform:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDisplay:(id)arg1;
- (id)initWithDisplayConfiguration:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)removeSceneTransform:(id)arg1;
- (id)sceneContainerView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)transformDidInvalidate:(id)arg1;
- (void)transformDidUpdate:(id)arg1;

@end
