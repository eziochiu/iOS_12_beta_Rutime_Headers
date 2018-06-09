/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMAccount : NSObject <IMSystemMonitorListener> {
    id  _accountImage;
    NSData * _accountImageData;
    NSDictionary * _accountPersistentProperties;
    NSMutableDictionary * _accountPersistentPropertiesChanges;
    NSDictionary * _accountPreferences;
    NSMutableDictionary * _accountPreferencesChanges;
    long long  _accountType;
    NSArray * _aliases;
    bool  _asleep;
    bool  _blockIdleStatus;
    IMPeople * _buddyList;
    NSArray * _cachedAllowList;
    NSArray * _cachedBlockList;
    unsigned int  _cachedBlockingMode;
    unsigned long long  _capabilities;
    int  _coalesceCount;
    NSMutableDictionary * _coalescedChanges;
    NSString * _countryCode;
    NSMutableDictionary * _currentAccountStatus;
    NSDictionary * _data;
    NSMutableDictionary * _dataChanges;
    unsigned long long  _defaultHandleCapabilities;
    NSString * _displayName;
    NSArray * _groups;
    bool  _hasBeenRemoved;
    bool  _hasCheckedDefaultHandleCapabilities;
    bool  _hasPostedOfflineNotification;
    bool  _hasReceivedSync;
    bool  _iconChecked;
    NSMapTable * _imHandles;
    bool  _isActive;
    bool  _justLoggedIn;
    NSArray * _lastReceivedGroupState;
    NSMutableDictionary * _localCache;
    NSRecursiveLock * _lock;
    NSString * _loginID;
    IMHandle * _loginIMHandle;
    unsigned long long  _loginStatus;
    NSDictionary * _members;
    NSDate * _myIdleSince;
    NSDictionary * _myNowPlaying;
    NSData * _myPictureData;
    NSAttributedString * _myProfile;
    unsigned long long  _myStatus;
    NSString * _myStatusMessage;
    bool  _needToCheckForWatchedIMHandles;
    int  _numHolding;
    NSDictionary * _profile;
    NSMutableDictionary * _profileChanges;
    long long  _profileStatus;
    NSDictionary * _registrationAlertInfo;
    long long  _registrationFailureReason;
    long long  _registrationStatus;
    IMServiceImpl * _service;
    id  _smallImage;
    NSMutableDictionary * _sortOrders;
    NSString * _strippedLogin;
    NSDictionary * _subtypeInfo;
    bool  _syncedWithRemoteBuddyList;
    NSArray * _targetGroupState;
    NSString * _uniqueID;
    bool  _useMeCardName;
    NSArray * _vettedAliases;
}

@property (nonatomic, readonly) bool _isUsableForSending;
@property (nonatomic, readonly) NSDictionary *_persistentProperties;
@property (nonatomic, retain) NSString *accountDescription;
@property (nonatomic, readonly) NSData *accountImageData;
@property (nonatomic, readonly) NSDictionary *accountPreferences;
@property (nonatomic, readonly) NSDictionary *accountSubtypeInfo;
@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) NSArray *addressBookProperties;
@property (nonatomic, readonly) NSString *addressBookProperty;
@property (nonatomic, readonly) NSArray *aliases;
@property (nonatomic, readonly) NSArray *aliasesToRegister;
@property (nonatomic, retain) NSArray *allowList;
@property (nonatomic, readonly) bool allowsMMSRelay;
@property (nonatomic, readonly) bool allowsSMSRelay;
@property (nonatomic) bool allowsVCRelay;
@property (nonatomic, readonly) NSArray *arrayOfAllIMHandles;
@property (nonatomic, readonly) NSString *authorizationID;
@property (nonatomic, readonly) NSString *authorizationToken;
@property (nonatomic) bool autoLogin;
@property (nonatomic) bool blockIdleStatus;
@property (nonatomic, retain) NSArray *blockList;
@property (nonatomic) bool blockOtherAddresses;
@property (nonatomic) unsigned int blockingMode;
@property (nonatomic, readonly) IMPeople *buddyList;
@property (nonatomic, readonly) bool canActivate;
@property (nonatomic, readonly) bool canSendMessages;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly) NSArray *emailDomains;
@property (nonatomic) bool goIdle;
@property (nonatomic, readonly) NSArray *groupList;
@property (nonatomic, readonly) bool handlesChatInvites;
@property (nonatomic, readonly) bool hasCustomDescription;
@property (nonatomic, readonly) bool hasSyncedWithRemoteBuddies;
@property (nonatomic, readonly) bool hasTargetGroupStateBeenMet;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) long long invalidSettings;
@property (getter=isInvisible, nonatomic) bool invisible;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isAsleep;
@property (nonatomic, readonly) bool isAwaitingTargetGroupState;
@property (nonatomic, readonly) bool isConnected;
@property (nonatomic, readonly) bool isConnecting;
@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) bool isOperational;
@property (nonatomic, readonly) bool isRegistered;
@property (nonatomic, readonly) bool isSMSRelayCapable;
@property (nonatomic, readonly) bool justLoggedIn;
@property (nonatomic, retain) NSString *login;
@property (nonatomic, readonly) id loginIMHandle;
@property (nonatomic, readonly) unsigned long long loginStatus;
@property (nonatomic, readonly) NSString *loginStatusMessage;
@property (nonatomic, readonly) bool makingChanges;
@property (getter=isMakoAccount, nonatomic, readonly) bool makoAccount;
@property (nonatomic, readonly) NSDate *myIdleSince;
@property (nonatomic, readonly) NSString *myNowPlayingString;
@property (nonatomic, readonly) NSData *myPictureData;
@property (nonatomic, readonly) NSAttributedString *myProfile;
@property (nonatomic, readonly) unsigned long long myStatus;
@property (nonatomic, readonly) NSDictionary *myStatusDictionary;
@property (nonatomic, readonly) NSString *myStatusMessage;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *password;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly) NSDictionary *profileInfo;
@property (nonatomic, readonly) NSDictionary *registrationFailureAlertInfo;
@property (nonatomic, readonly) long long registrationFailureReason;
@property (nonatomic, readonly) long long registrationStatus;
@property (nonatomic, readonly) NSString *server;
@property (nonatomic, readonly) IMServiceImpl *service;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) NSString *strippedLogin;
@property (nonatomic, readonly) bool supportsAuthorization;
@property (nonatomic, readonly) bool supportsRegistration;
@property (nonatomic, readonly) NSString *temporaryPassword;
@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) bool useSSL;
@property (nonatomic, readonly) bool validLogin;
@property (nonatomic, readonly) bool validPort;
@property (nonatomic, readonly) bool validServer;
@property (nonatomic, readonly) NSArray *vettedAliases;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

+ (id)_groupSummaryFromGroupList:(id)arg1;
+ (id)allBuddyListIMHandles;
+ (id)arrayOfAllIMHandles;
+ (id)nameOfLoginStatus:(unsigned long long)arg1;
+ (id)passwordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removePasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)removeTemporaryPasswordForAccount:(id)arg1 forServiceName:(id)arg2;
+ (void)setPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;
+ (void)setTemporaryPassword:(id)arg1 forAccount:(id)arg2 forAuthID:(id)arg3 forServiceName:(id)arg4;
+ (id)temporaryPasswordForAccount:(id)arg1 forAuthID:(id)arg2 forServiceName:(id)arg3;

- (void).cxx_destruct;
- (id)_aliasInfoForAlias:(id)arg1;
- (bool)_aliasIsVisible:(id)arg1;
- (id)_aliases;
- (void)_applyChangesToTemporaryCache:(id)arg1;
- (void)_clearImageCache;
- (void)_ensureGroupsExists:(id)arg1;
- (void)_handleDeliveredCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (void)_handleIncomingCommand:(id)arg1 withProperties:(id)arg2 fromBuddyInfo:(id)arg3;
- (id)_imHandleWithID:(id)arg1 alreadyCanonical:(bool)arg2 originalID:(id)arg3 countryCode:(id)arg4;
- (void)_invalidateCachedAliases;
- (bool)_isUsableForSending;
- (void)_loadFromDictionary:(id)arg1 force:(bool)arg2;
- (void)_loginWithAutoLogin:(bool)arg1;
- (void)_markHasSyncedWithRemoteBuddies;
- (void)_notJustLoggedIn;
- (id)_persistentProperties;
- (id)_persistentPropertyForKey:(id)arg1;
- (void)_refreshLoginIMHandle;
- (void)_registrationStatusChanged:(id)arg1;
- (void)_removeObjectForKey:(id)arg1;
- (void)_removePersistentPropertyForKey:(id)arg1;
- (void)_resumeBuddyUpdatesNow;
- (id)_serverWithSSL:(bool)arg1;
- (void)_serviceDidConnect:(id)arg1;
- (void)_serviceDidDisconnect:(id)arg1;
- (void)_serviceDidReconnect:(id)arg1;
- (void)_setBool:(bool)arg1 forKey:(id)arg2;
- (void)_setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)_setInteger:(long long)arg1 forKey:(id)arg2;
- (void)_setLocalCachedObject:(id)arg1 forKey:(id)arg2;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_setPersistentPropertyObject:(id)arg1 forKey:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2;
- (id)_statuses;
- (void)_syncWithRemoteBuddies;
- (bool)_updateDisplayName:(id)arg1;
- (void)_updateLogin:(id)arg1;
- (void)_updateMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)_updateProfileInfo:(id)arg1;
- (void)_updateRegistrationStatus:(int)arg1 error:(int)arg2 info:(id)arg3;
- (void)_watchBuddiesIfNecessary;
- (id)accountDescription;
- (void)accountDidBecomeActive;
- (void)accountDidDeactivate;
- (id)accountImageData;
- (id)accountPreferences;
- (id)accountSubtypeInfo;
- (long long)accountType;
- (void)accountWillBeRemoved;
- (bool)addAlias:(id)arg1;
- (bool)addAlias:(id)arg1 type:(long long)arg2;
- (bool)addAliases:(id)arg1;
- (void)addBuddyToBuddyList:(id)arg1;
- (bool)addIMHandle:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (bool)addIMHandle:(id)arg1 toIMPerson:(id)arg2;
- (bool)addPeople:(id)arg1 toGroups:(id)arg2 atLocation:(long long)arg3;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (id)aliases;
- (id)aliasesForType:(long long)arg1;
- (id)aliasesToRegister;
- (id)allowList;
- (bool)allowsMMSRelay;
- (bool)allowsSMSRelay;
- (bool)allowsVCRelay;
- (id)arrayOfAllIMHandles;
- (bool)authenticateAccount;
- (id)authorizationID;
- (id)authorizationToken;
- (bool)autoLogin;
- (void)autoLoginAccount;
- (void)beginChanges;
- (bool)blockIdleStatus;
- (id)blockList;
- (void)blockMessages:(bool)arg1 fromID:(id)arg2;
- (bool)blockOtherAddresses;
- (unsigned int)blockingMode;
- (bool)boolForKey:(id)arg1;
- (bool)boolForPreferenceKey:(id)arg1;
- (id)buddyList;
- (void)buddyPictureChanged:(id)arg1 imageData:(id)arg2 imageHash:(id)arg3;
- (void)buddyPropertiesChanged:(id)arg1;
- (bool)canActivate;
- (bool)canSendMessages;
- (id)canonicalFormOfID:(id)arg1;
- (id)canonicalFormOfID:(id)arg1 countryCode:(id)arg2;
- (unsigned long long)capabilities;
- (void)changeBuddyList:(id)arg1 add:(bool)arg2 groups:(id)arg3 atLocation:(long long)arg4;
- (id)chatIDForRoomName:(id)arg1;
- (void)clearServiceCaches;
- (void)clearTargetState;
- (long long)compareAccountNames:(id)arg1;
- (long long)compareIDs:(id)arg1;
- (long long)compareLoginStatus:(id)arg1;
- (long long)compareNames:(id)arg1;
- (long long)compareServices:(id)arg1;
- (long long)compareStatus:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)defaultChatSuffix;
- (unsigned long long)defaultHandleCapabilities;
- (id)description;
- (id)dictionary;
- (id)dictionaryDataForKey:(id)arg1;
- (id)dictionaryDataForPreferenceKey:(id)arg1;
- (void)disconnectAllIMHandles;
- (id)displayName;
- (bool)emailAddressIsID:(id)arg1;
- (id)emailDomains;
- (void)endChanges;
- (void)enrollDeviceInSMSRelay:(id)arg1;
- (void)enrollSelfDeviceInSMSRelay;
- (bool)equalID:(id)arg1 andID:(id)arg2;
- (id)existingIMHandleWithID:(id)arg1;
- (id)existingIMHandleWithID:(id)arg1 alreadyCanonical:(bool)arg2;
- (id)existingIMHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)existingIMHandleWithInfo:(id)arg1;
- (id)existingIMHandleWithInfo:(id)arg1 alreadyCanonical:(bool)arg2;
- (void)forgetAllWatches;
- (bool)goIdle;
- (id)groupList;
- (id)groupMembers:(id)arg1;
- (void)groupsChanged:(id)arg1 error:(id)arg2;
- (void)handleSubscriptionRequestFrom:(id)arg1 withMessage:(id)arg2;
- (bool)handlesChatInvites;
- (bool)hasAlias:(id)arg1;
- (bool)hasAlias:(id)arg1 type:(long long)arg2;
- (bool)hasCapability:(unsigned long long)arg1;
- (bool)hasCustomDescription;
- (bool)hasSyncedWithRemoteBuddies;
- (bool)hasTargetGroupStateBeenMet;
- (void)holdBuddyUpdates;
- (void)hookupToDaemon;
- (void)imHandle:(id)arg1 buddyStatusChanged:(bool)arg2;
- (Class)imHandleClass;
- (id)imHandleWithID:(id)arg1;
- (id)imHandleWithID:(id)arg1 alreadyCanonical:(bool)arg2;
- (id)imHandleWithID:(id)arg1 countryCode:(id)arg2;
- (id)imHandleWithInfo:(id)arg1;
- (id)imHandleWithInfo:(id)arg1 alreadyCanonical:(bool)arg2;
- (id)imHandlesForIMPerson:(id)arg1;
- (id)initWithService:(id)arg1;
- (id)initWithUniqueID:(id)arg1 service:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (int)integerForPreferenceKey:(id)arg1;
- (id)internalName;
- (long long)invalidSettings;
- (bool)isActive;
- (bool)isAsleep;
- (bool)isAwaitingTargetGroupState;
- (bool)isConnected;
- (bool)isConnecting;
- (bool)isInvisible;
- (bool)isMakoAccount;
- (bool)isManaged;
- (bool)isOperational;
- (bool)isRegistered;
- (bool)isSMSRelayCapable;
- (bool)justLoggedIn;
- (void)loadFromDictionary:(id)arg1;
- (id)login;
- (void)loginAccount;
- (id)loginIMHandle;
- (unsigned long long)loginStatus;
- (void)loginStatusChanged:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (id)loginStatusMessage;
- (void)logoutAccount;
- (bool)makingChanges;
- (id)memberGroups:(id)arg1;
- (id)myIdleSince;
- (id)myNowPlayingString;
- (id)myPictureData;
- (id)myProfile;
- (unsigned long long)myStatus;
- (id)myStatusDictionary;
- (id)myStatusMessage;
- (id)name;
- (void)nowLoggedIn;
- (void)nowLoggedOut;
- (id)objectForKey:(id)arg1;
- (id)objectForPreferenceKey:(id)arg1;
- (id)password;
- (id)personForIMHandle:(id)arg1;
- (id)personForIMHandle:(id)arg1 identifier:(int*)arg2;
- (id)personSibsForIMHandle:(id)arg1;
- (long long)port;
- (id)profileInfo;
- (id)profileStringForKey:(id)arg1;
- (long long)profileValidationErrorReason;
- (long long)profileValidationStatus;
- (id)profileValueForKey:(id)arg1;
- (id)propertiesForGroup:(id)arg1;
- (void)recalculateSubtypeInfo;
- (id)recalculatedSubtypeInfo;
- (bool)registerAccount;
- (void)registerIMHandle:(id)arg1;
- (id)registrationFailureAlertInfo;
- (long long)registrationFailureReason;
- (long long)registrationStatus;
- (bool)removeAlias:(id)arg1;
- (bool)removeAlias:(id)arg1 type:(long long)arg2;
- (bool)removeAliases:(id)arg1;
- (bool)removeIMHandle:(id)arg1 fromGroups:(id)arg2;
- (bool)removeIMHandle:(id)arg1 fromIMPerson:(id)arg2;
- (void)removeObjectForKey:(id)arg1;
- (void)removeObjectForPreferenceKey:(id)arg1;
- (void)removePassword;
- (bool)removePeople:(id)arg1 fromGroups:(id)arg2;
- (bool)removeProfileValueForKey:(id)arg1;
- (void)removeTemporaryPassword;
- (void)renameGroup:(id)arg1 to:(id)arg2;
- (void)reorderGroup:(id)arg1 order:(id)arg2;
- (void)reorderGroups:(id)arg1;
- (void)requestBuddyListAuthorizationFromIMHandle:(id)arg1;
- (void)requestGroups;
- (bool)requestNewAuthorizationCredentials;
- (void)requestProperty:(id)arg1 ofIMHandle:(id)arg2;
- (void)resetToDefaults;
- (void)resumeBuddyUpdates;
- (id)server;
- (id)service;
- (id)serviceName;
- (void)setAccountDescription:(id)arg1;
- (void)setAllowList:(id)arg1;
- (void)setAllowsVCRelay:(bool)arg1;
- (void)setAutoLogin:(bool)arg1;
- (void)setBlockIdleStatus:(bool)arg1;
- (void)setBlockList:(id)arg1;
- (void)setBlockOtherAddresses:(bool)arg1;
- (void)setBlockingMode:(unsigned int)arg1;
- (void)setBool:(bool)arg1 forKey:(id)arg2;
- (void)setBool:(bool)arg1 forPreferenceKey:(id)arg2;
- (void)setBuddyListAuthorization:(bool)arg1 forIMHandle:(id)arg2;
- (void)setBuddyProperties:(id)arg1 buddyPictures:(id)arg2;
- (void)setCachedAllowList:(id)arg1;
- (void)setCachedBlockIdleStatus:(bool)arg1;
- (void)setCachedBlockList:(id)arg1;
- (void)setCachedBlockingMode:(unsigned int)arg1;
- (void)setCurrentAccountStatus:(id)arg1;
- (void)setDictionaryData:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryData:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setGoIdle:(bool)arg1;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2;
- (void)setIMAccountLoginStatus:(unsigned long long)arg1 errorMessage:(id)arg2 reason:(int)arg3;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setInteger:(int)arg1 forPreferenceKey:(id)arg2;
- (void)setInvisible:(bool)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setLogin:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setPassword:(id)arg1;
- (bool)setProfileString:(id)arg1 forKey:(id)arg2;
- (bool)setProfileValue:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forPreferenceKey:(id)arg2;
- (void)setTargetGroupsState:(id)arg1;
- (void)setTemporaryPassword:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (void)setValue:(id)arg1 ofExtraProperty:(id)arg2 ofIMHandle:(id)arg3;
- (void)setWaitForTargetState;
- (id)shortName;
- (unsigned long long)sortOrderForIMHandle:(id)arg1 inGroup:(id)arg2;
- (void)startWatchingIMHandle:(id)arg1;
- (void)stopWatchingIMHandle:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)stringForPreferenceKey:(id)arg1;
- (id)strippedLogin;
- (bool)supportsAuthorization;
- (bool)supportsRegistration;
- (void)syncWithRemoteBuddies;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)targetGroupStateTimeout;
- (id)temporaryPassword;
- (long long)typeForAlias:(id)arg1;
- (void)unEnrollDeviceInSMSRelay:(id)arg1;
- (id)uniqueID;
- (bool)unregisterAccount;
- (void)unregisterIMHandleWithID:(id)arg1;
- (bool)unvalidateAlias:(id)arg1;
- (bool)unvalidateAliases:(id)arg1;
- (bool)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)updateCapabilities:(unsigned long long)arg1;
- (void)updateWithTargetGroups;
- (bool)useSSL;
- (bool)validLogin;
- (bool)validPort;
- (bool)validServer;
- (bool)validateAlias:(id)arg1;
- (bool)validateAlias:(id)arg1 type:(long long)arg2;
- (bool)validateAliases:(id)arg1;
- (bool)validateProfile;
- (long long)validationErrorReasonForAlias:(id)arg1;
- (long long)validationErrorReasonForAlias:(id)arg1 type:(long long)arg2;
- (long long)validationStatusForAlias:(id)arg1;
- (long long)validationStatusForAlias:(id)arg1 type:(long long)arg2;
- (struct _FZChatRoomValidity { int x1; unsigned short x2; })validityOfChatRoomName:(id)arg1;
- (id)vettedAliases;
- (void)watchBuddiesIfNecessary;
- (void)writeSettings;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_handlesFromAddressStrings:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (bool)CNFRegIsSignedOut;
- (bool)CNFRegRegisteringLocalPhoneNumberSentinelAlias;
- (bool)CNFRegSignInComplete;
- (bool)CNFRegSignInFailed;
- (id)loginDisplayString;

@end
