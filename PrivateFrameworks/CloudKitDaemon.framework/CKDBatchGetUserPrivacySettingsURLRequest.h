/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest {
    NSArray * _containerPrivacySettings;
}

@property (nonatomic, retain) NSArray *containerPrivacySettings;

- (void).cxx_destruct;
- (id)containerPrivacySettings;
- (long long)databaseScope;
- (id)generateRequestOperations;
- (int)operationType;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;
- (void)setContainerPrivacySettings:(id)arg1;

@end
