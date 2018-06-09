/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeData : HMFObject <NSCopying, NSMutableCopying> {
    NSArray * _UUIDsOfRemovedHomes;
    bool  _accessAllowedWhenLocked;
    NSArray * _accessories;
    HMDAccount * _account;
    HMDApplicationData * _applicationData;
    unsigned long long  _assistantGenerationCounter;
    NSArray * _cloudZones;
    NSString * _currentDevice;
    NSUUID * _dataTag;
    long long  _dataVersion;
    NSDictionary * _demoAccessories;
    bool  _demoFinalized;
    NSArray * _homes;
    NSArray * _incomingInvitations;
    NSUUID * _lastCurrentHomeUUID;
    NSArray * _pendingReasonSaved;
    NSArray * _pendingUserManagementOperations;
    NSUUID * _primaryHomeUUID;
    NSArray * _remoteAccounts;
    long long  _residentEnabledState;
    long long  _schemaVersion;
    NSArray * _unprocessedOperationIdentifiers;
}

@property (nonatomic, readonly, copy) NSArray *UUIDsOfRemovedHomes;
@property (nonatomic, readonly) bool accessAllowedWhenLocked;
@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly) HMDAccount *account;
@property (nonatomic, readonly, copy) HMDApplicationData *applicationData;
@property (nonatomic, readonly) unsigned long long assistantGenerationCounter;
@property (nonatomic, readonly, copy) NSArray *cloudZones;
@property (nonatomic, readonly, copy) NSString *currentDevice;
@property (nonatomic, readonly, copy) NSUUID *dataTag;
@property (nonatomic) long long dataVersion;
@property (nonatomic, readonly, copy) NSDictionary *demoAccessories;
@property (nonatomic, readonly) bool demoFinalized;
@property (nonatomic, readonly, copy) NSArray *homes;
@property (nonatomic, readonly, copy) NSArray *incomingInvitations;
@property (nonatomic, readonly, copy) NSUUID *lastCurrentHomeUUID;
@property (nonatomic, readonly, copy) NSArray *pendingReasonSaved;
@property (nonatomic, readonly, copy) NSArray *pendingUserManagementOperations;
@property (nonatomic, readonly, copy) NSUUID *primaryHomeUUID;
@property (nonatomic, readonly, copy) NSArray *remoteAccounts;
@property (nonatomic, readonly) long long residentEnabledState;
@property (nonatomic, readonly) long long schemaVersion;
@property (nonatomic, readonly, copy) NSArray *unprocessedOperationIdentifiers;

- (void).cxx_destruct;
- (id)UUIDsOfRemovedHomes;
- (bool)accessAllowedWhenLocked;
- (id)accessories;
- (id)account;
- (id)applicationData;
- (unsigned long long)assistantGenerationCounter;
- (id)cloudZones;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentDevice;
- (id)dataTag;
- (long long)dataVersion;
- (id)demoAccessories;
- (bool)demoFinalized;
- (id)homes;
- (id)incomingInvitations;
- (id)lastCurrentHomeUUID;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)pendingReasonSaved;
- (id)pendingUserManagementOperations;
- (id)primaryHomeUUID;
- (id)remoteAccounts;
- (long long)residentEnabledState;
- (long long)schemaVersion;
- (void)setDataVersion:(long long)arg1;
- (id)unprocessedOperationIdentifiers;

@end
