/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceCreateSceneEvent : FBSWorkspaceSceneUpdateEvent {
    FBSSceneClientSettingsDiff * _clientSettings;
    NSString * _specificationClassName;
}

@property (nonatomic, retain) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (nonatomic, retain) FBSSceneSpecification *specification;

- (void).cxx_destruct;
- (id)clientSettingsDiff;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;
- (void)setSpecification:(id)arg1;
- (id)specification;

@end
