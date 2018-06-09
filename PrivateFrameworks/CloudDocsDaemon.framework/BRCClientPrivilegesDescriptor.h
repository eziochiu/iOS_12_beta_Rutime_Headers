/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCClientPrivilegesDescriptor : NSObject {
    NSSet * _appLibraryIDs;
    NSString * _applicationIdentifier;
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    bool  _canGetApplicationInfo;
    BOOL  _cloudEnabledStatusWithoutLogOutStatus;
    NSString * _debugIdentifier;
    NSString * _defaultAppLibraryID;
    bool  _hasAuditToken;
    bool  _isAllowedToAccessAnyCloudService;
    bool  _isAutomationEntitled;
    bool  _isFolderSharingProxyEntitled;
    bool  _isNonAppSandboxed;
    bool  _isProxyEntitled;
    bool  _isSharingPrivateInterfaceEntitled;
    bool  _isSharingProxyEntitled;
}

@property (nonatomic, readonly) NSSet *appLibraryIDs;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) bool canFetchUserQuota;
@property (nonatomic, readonly) NSString *defaultAppLibraryID;
@property (nonatomic, readonly) bool hasAuditToken;
@property (nonatomic, readonly) bool isAllowedToAccessAnyCloudService;
@property (nonatomic, readonly) bool isAutomationEntitled;
@property (nonatomic, readonly) bool isFolderSharingProxyEntitled;
@property (nonatomic, readonly) bool isNonAppSandboxed;
@property (nonatomic, readonly) bool isProxyEntitled;
@property (nonatomic, readonly) bool isSharingPrivateInterfaceEntitled;
@property (nonatomic, readonly) bool isSharingProxyEntitled;

+ (bool)_isNonSandboxedForAuditToken:(struct { unsigned int x1[8]; })arg1;

- (void).cxx_destruct;
- (BOOL)_computeCloudEnabledStatusWithoutLogOutStatus;
- (void)_finishSetupWithClientContainerIDs:(id)arg1;
- (id)appLibraryIDs;
- (id)applicationIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (bool)canFetchUserQuota;
- (BOOL)cloudEnabledStatusForSession:(id)arg1;
- (id)defaultAppLibraryID;
- (id)description;
- (bool)hasAuditToken;
- (bool)hasPid;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithNonSandboxedAppWithAppLibraryIDs:(id)arg1 bundleID:(id)arg2 auditToken:(struct { unsigned int x1[8]; })arg3;
- (bool)isAllowedToAccessAnyCloudService;
- (bool)isAutomationEntitled;
- (bool)isFolderSharingProxyEntitled;
- (bool)isNonAppSandboxed;
- (bool)isProxyEntitled;
- (bool)isSharingPrivateInterfaceEntitled;
- (bool)isSharingProxyEntitled;
- (int)pid;
- (void)updateCloudEnabledStatus;

@end
