/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface _FBClientSettingObserverContext : NSObject {
    FBScene * _scene;
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, retain) FBScene *scene;
@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (id)initWithScene:(id)arg1 transitionContext:(id)arg2;
- (id)scene;
- (void)setScene:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;

@end
