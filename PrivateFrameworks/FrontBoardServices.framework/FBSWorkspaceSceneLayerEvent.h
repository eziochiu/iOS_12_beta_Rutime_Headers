/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceSceneLayerEvent : FBSWorkspaceSceneEvent {
    FBSSceneLayer * _layer;
    bool  _orderOut;
}

@property (nonatomic, retain) FBSSceneLayer *layer;
@property (nonatomic) bool orderOut;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)layer;
- (bool)orderOut;
- (void)setLayer:(id)arg1;
- (void)setOrderOut:(bool)arg1;

@end
