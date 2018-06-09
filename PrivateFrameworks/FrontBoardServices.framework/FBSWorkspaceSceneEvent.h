/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneEvent : FBSWorkspaceEvent {
    NSString * _sceneID;
}

@property (nonatomic, copy) NSString *sceneID;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)sceneID;
- (void)setSceneID:(id)arg1;

@end
