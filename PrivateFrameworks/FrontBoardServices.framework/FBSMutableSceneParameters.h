/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneParameters : FBSSceneParameters {
    FBSDisplayConfiguration * _displayConfiguration;
}

@property (nonatomic, copy) FBSSceneClientSettings *clientSettings;
@property (nonatomic, copy) FBSSceneSettings *settings;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setDisplay:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)updateClientSettingsWithBlock:(id /* block */)arg1;
- (void)updateSettingsWithBlock:(id /* block */)arg1;

@end
