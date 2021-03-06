/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceCreateSceneRequestEvent : FBSWorkspaceEvent {
    FBSSceneClientSettingsDiff * _clientSettings;
    NSString * _identifier;
}

@property (nonatomic, retain) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id)clientSettingsDiff;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)identifier;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setClientSettingsDiff:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
