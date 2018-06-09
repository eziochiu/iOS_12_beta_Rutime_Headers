/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAdminEnforcementMessageFilter : HMDMessageFilter {
    NSMutableDictionary * _adminsOfHomes;
    HMDHomeManager * _homeManager;
    NSString * _localAdminName;
    NSMutableDictionary * _objectsContainedInHomes;
    NSMutableDictionary * _ownersOfHomes;
}

@property (nonatomic, retain) NSMutableDictionary *adminsOfHomes;
@property (nonatomic) HMDHomeManager *homeManager;
@property (nonatomic, retain) NSString *localAdminName;
@property (nonatomic, retain) NSMutableDictionary *objectsContainedInHomes;
@property (nonatomic, retain) NSMutableDictionary *ownersOfHomes;

+ (bool)_isBlacklistedMessageForSharedAdmin:(id)arg1;
+ (bool)_isWhitelistedMessageForSharedAdmin:(id)arg1;
+ (bool)isBlackListedMessage:(id)arg1;
+ (bool)isWhitelistedMessage:(id)arg1;

- (void).cxx_destruct;
- (id)_localAdministratorName;
- (bool)acceptMessage:(id)arg1 target:(id)arg2 errorReason:(id*)arg3;
- (void)addAdministratorName:(id)arg1 forHomeWithUUID:(id)arg2;
- (void)addObjectWithUUID:(id)arg1 containedInHome:(id)arg2;
- (void)addOwnerName:(id)arg1 forHomeWithUUID:(id)arg2;
- (id)adminsOfHomes;
- (id)homeManager;
- (id)homedIdentifierForObjectWithIdentifier:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isHomeUUIDRegistered:(id)arg1;
- (id)localAdminName;
- (void)localAdministratorName;
- (id)objectsContainedInHomes;
- (id)ownersOfHomes;
- (void)removeAdministratorName:(id)arg1 forHomeWithUUID:(id)arg2;
- (void)removeOwnerName:(id)arg1 forHomeWithUUID:(id)arg2;
- (void)resetConfiguration;
- (void)setAdminsOfHomes:(id)arg1;
- (void)setHomeManager:(id)arg1;
- (void)setLocalAdminName:(id)arg1;
- (void)setObjectsContainedInHomes:(id)arg1;
- (void)setOwnersOfHomes:(id)arg1;

@end
