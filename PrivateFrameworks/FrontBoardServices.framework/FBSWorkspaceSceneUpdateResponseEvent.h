/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneUpdateResponseEvent : FBSWorkspaceSceneEvent {
    FBSWorkspaceSceneUpdateResponse * _response;
}

@property (nonatomic, retain) FBSWorkspaceSceneUpdateResponse *response;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;

@end
