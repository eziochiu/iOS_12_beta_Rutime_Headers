/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneActionsEvent : FBSWorkspaceSceneEvent {
    NSSet * _actions;
}

@property (nonatomic, copy) NSSet *actions;

- (void).cxx_destruct;
- (id)actions;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setActions:(id)arg1;

@end
