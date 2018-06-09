/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSUIApplicationExitEvent : FBSWorkspaceEvent {
    FBSSceneTransitionContext * _transitionContext;
}

@property (nonatomic, retain) FBSSceneTransitionContext *transitionContext;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setTransitionContext:(id)arg1;
- (id)transitionContext;

@end
