/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMServiceImpl : IMService {
    NSArray * _abProperties;
    bool  _allowsMultipleConnections;
    IMAccount * _bestAccount;
    NSMutableDictionary * _cardMap;
    NSString * _countryCode;
    NSDictionary * _defaultSettings;
    NSArray * _emailDomains;
    bool  _handlesChatInvites;
    bool  _hasLoadedServiceProperties;
    bool  _ignoresNetworkConnectivity;
    NSData * _imageData;
    bool  _isPersistent;
    bool  _isPlugInService;
    NSString * _localizedName;
    NSString * _localizedShortName;
    NSString * _name;
    NSDictionary * _personToIDMap;
    unsigned int  _screenNameSensitivity;
    NSDictionary * _serviceDefaults;
    NSDictionary * _serviceProps;
    bool  _shouldDisableDeactivation;
    bool  _shouldInternationalizeNumbers;
    NSArray * _siblingServiceNames;
    bool  _supportsAdding;
    bool  _supportsAudioMessages;
    bool  _supportsAuthorization;
    bool  _supportsDatabaseStorage;
    bool  _supportsGroupAttachments;
    bool  _supportsIDStatusLookup;
    bool  _supportsMutatingGroupMembers;
    bool  _supportsOfflineTransfers;
    bool  _supportsOneSessionForAllAccounts;
    bool  _supportsPhoneNumberMapping;
    bool  _supportsPresence;
    bool  _supportsRegistration;
    bool  _supportsSMS;
}

@property (nonatomic, readonly) unsigned int IDSensitivity;
@property (nonatomic, readonly) bool _supportsDatabaseStorage;
@property (nonatomic, readonly) bool _wantsInternationizedNumbers;
@property (nonatomic, readonly) Class accountClass;
@property (nonatomic, readonly) NSArray *accountIDs;
@property (nonatomic, readonly) NSArray *addressBookProperties;
@property (nonatomic, readonly) NSString *addressBookProperty;
@property (nonatomic, readonly) bool allowsMultipleConnections;
@property (nonatomic, readonly) long long buddyNotesMaxByteLength;
@property (nonatomic, readonly) NSDictionary *cardMap;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSDictionary *defaultAccountSettings;
@property (getter=isDiscontinued, nonatomic, readonly) bool discontinued;
@property (nonatomic, readonly) NSArray *emailDomains;
@property (nonatomic, readonly) bool handlesChatInvites;
@property (nonatomic, readonly) bool ignoresNetworkConnectivity;
@property (nonatomic, readonly) NSString *internalName;
@property (nonatomic, readonly) bool isPersistent;
@property (nonatomic, readonly) bool isPlugInService;
@property (nonatomic, readonly) long long maxAttachmentSize;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSDictionary *serviceDefaults;
@property (nonatomic, readonly) NSData *serviceImageData;
@property (nonatomic, retain) NSDictionary *serviceProperties;
@property (nonatomic, readonly) NSString *shortName;
@property (nonatomic, readonly) bool shouldDisableDeactivation;
@property (nonatomic, readonly) NSArray *siblingServices;
@property (nonatomic, readonly) bool supportsAdding;
@property (nonatomic, readonly) bool supportsAudioMessages;
@property (nonatomic, readonly) bool supportsAuthorization;
@property (nonatomic, readonly) bool supportsGroupAttachments;
@property (nonatomic, readonly) bool supportsIDStatusLookup;
@property (nonatomic, readonly) bool supportsMutatingGroupMembers;
@property (nonatomic, readonly) bool supportsOfflineTransfers;
@property (nonatomic, readonly) bool supportsOneSessionForAllAccounts;
@property (nonatomic, readonly) bool supportsPhoneNumberMapping;
@property (nonatomic, readonly) bool supportsPresence;
@property (nonatomic, readonly) bool supportsRegistration;

+ (bool)_hasAlias:(id)arg1 onAccountForService:(id)arg2;
+ (id)activeServices;
+ (id)allServices;
+ (id)allServicesNonBlocking;
+ (id)connectedServices;
+ (id)connectedServicesWithCapability:(unsigned long long)arg1;
+ (bool)iMessageEnabled;
+ (bool)iMessageEnabledForSenderLastAddressedHandle:(id)arg1;
+ (bool)mmsEnabled;
+ (bool)mmsEnabledforPhoneNumber:(id)arg1;
+ (id)operationalServicesWithCapability:(unsigned long long)arg1;
+ (Class)serviceClass;
+ (id)serviceWithInternalName:(id)arg1;
+ (id)serviceWithName:(id)arg1;
+ (id)servicesWithCapability:(unsigned long long)arg1;
+ (void)setServiceClass:(Class)arg1;
+ (bool)smsEnabled;
+ (id)supportedCountryCodes;
+ (bool)systemSupportsSMSSending;
+ (bool)systemSupportsSendingAttachmentsOfTypes:(id)arg1 error:(long long*)arg2;

- (void).cxx_destruct;
- (unsigned int)IDSensitivity;
- (id)_IDsToMapForIMPerson:(id)arg1;
- (id)_abPropertiesBySanitizingABProperties:(id)arg1;
- (void)_addAddressBookCards:(id)arg1 toMap:(id)arg2;
- (void)_blockUntilInitialSyncPerformed;
- (void)_calculateBestAccount;
- (void)_dumpCardMap;
- (void)_loadPropertiesIfNeeded;
- (id)_newIDToCardMap;
- (id)_personToIDMap;
- (bool)_supportsDatabaseStorage;
- (void)_syncWithRemoteBuddies;
- (bool)_wantsInternationizedNumbers;
- (Class)accountClass;
- (id)accountIDs;
- (void)activeAccountsChanged:(id)arg1;
- (id)addressBookProperties;
- (id)addressBookProperty;
- (bool)allowsMultipleConnections;
- (long long)buddyNotesMaxByteLength;
- (id)canonicalFormOfID:(id)arg1;
- (id)cardMap;
- (void)clearIDToCardMap;
- (long long)compareNames:(id)arg1;
- (id)countryCode;
- (void)dealloc;
- (id)defaultAccountSettings;
- (void)defaultsChanged:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)doneSetup;
- (id)emailDomains;
- (bool)equalID:(id)arg1 andID:(id)arg2;
- (bool)handlesChatInvites;
- (bool)ignoresNetworkConnectivity;
- (id)imABPeopleWithScreenName:(id)arg1;
- (id)imABPeopleWithScreenName:(id)arg1 countryCode:(id)arg2 identifier:(int*)arg3;
- (id)imABPeopleWithScreenName:(id)arg1 identifier:(int*)arg2;
- (id)imABPeopleWithScreenName:(id)arg1 options:(unsigned long long)arg2;
- (id)infoForAllScreenNames;
- (id)infoForPreferredScreenNames;
- (id)infoForScreenName:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)initialSyncPerformed;
- (id)internalName;
- (bool)isDiscontinued;
- (bool)isEnabled;
- (bool)isPersistent;
- (bool)isPlugInService;
- (id)localizedName;
- (id)localizedShortName;
- (long long)maxAttachmentSize;
- (long long)maxChatParticipantsForHandle:(id)arg1;
- (id)myScreenNames;
- (id)name;
- (id)normalizedFormOfID:(id)arg1;
- (id)peopleWithScreenName:(id)arg1;
- (id)screenNamesForIMPerson:(id)arg1;
- (id)screenNamesForPerson:(id)arg1;
- (id)serviceDefaults;
- (id)serviceImageData;
- (id)serviceProperties;
- (void)setCountryCode:(id)arg1;
- (void)setDefaultAccountSettings:(id)arg1;
- (void)setServiceDefaults:(id)arg1;
- (void)setServiceProperties:(id)arg1;
- (id)shortName;
- (bool)shouldDisableDeactivation;
- (id)siblingServices;
- (unsigned long long)status;
- (void)statusChangedForAccount:(id)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (id)subtypeInformationForAccount:(id)arg1;
- (bool)supportsAdding;
- (bool)supportsAudioMessages;
- (bool)supportsAuthorization;
- (bool)supportsGroupAttachments;
- (bool)supportsIDStatusLookup;
- (bool)supportsMutatingGroupMembers;
- (bool)supportsOfflineTransfers;
- (bool)supportsOneSessionForAllAccounts;
- (bool)supportsPhoneNumberMapping;
- (bool)supportsPresence;
- (bool)supportsRegistration;
- (void)updateIDToCardMapWithNotification:(id)arg1;

@end
