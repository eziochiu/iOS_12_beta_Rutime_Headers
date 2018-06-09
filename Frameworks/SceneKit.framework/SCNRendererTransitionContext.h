/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNRendererTransitionContext : NSObject {
    SCNNode * _outgoingPointOfView;
    SCNScene * _outgoingScene;
    SCNOffscreenRenderer * _renderers;
    SKTransition * _transition;
    struct __C3DFXPass { } * _transitionPass;
    double  _transitionStartTime;
    id /* block */  completionHandler;
}

@property (nonatomic, retain) SCNNode *outgoingPointOfView;
@property (nonatomic, retain) SCNScene *outgoingScene;
@property (nonatomic, retain) SKTransition *transition;
@property (nonatomic) double transitionStartTime;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)outgoingPointOfView;
- (id)outgoingScene;
- (id)prepareRendererAtIndex:(int)arg1 withScene:(id)arg2 renderSize:(struct CGSize { double x1; double x2; })arg3 pointOfView:(id)arg4 parentRenderer:(id)arg5;
- (void)setOutgoingPointOfView:(id)arg1;
- (void)setOutgoingScene:(id)arg1;
- (void)setTransition:(id)arg1;
- (void)setTransitionStartTime:(double)arg1;
- (id)transition;
- (struct __C3DFXPass { }*)transitionPass;
- (double)transitionStartTime;

@end
