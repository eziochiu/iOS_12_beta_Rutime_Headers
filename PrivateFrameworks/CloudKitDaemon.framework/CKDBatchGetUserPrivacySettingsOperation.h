/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBatchGetUserPrivacySettingsOperation : CKDOperation {
    NSArray * _containerPrivacySettings;
}

@property (nonatomic, copy) NSArray *containerPrivacySettings;

+ (id)appPermissionGroupsFromContainerPrivacySettings:(id)arg1;

- (void).cxx_destruct;
- (id)activityCreate;
- (id)containerPrivacySettings;
- (void)main;
- (void)setContainerPrivacySettings:(id)arg1;
- (bool)shouldCheckAppVersion;

@end