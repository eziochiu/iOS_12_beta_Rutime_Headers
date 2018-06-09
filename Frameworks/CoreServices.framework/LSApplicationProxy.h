/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {
    NSArray * _activityTypes;
    _LSApplicationState * _appState;
    NSString * _appStoreToolsBuildVersion;
    NSString * _applicationVariant;
    int  _bundleModTime;
    NSString * _companionApplicationIdentifier;
    NSString * _complicationPrincipalClass;
    NSArray * _counterpartIdentifiers;
    NSArray * _deviceFamily;
    NSString * _deviceIdentifierVendorName;
    _LSDiskUsage * _diskUsage;
    NSNumber * _downloaderDSID;
    NSNumber * _familyID;
    NSString * _genre;
    NSNumber * _genreID;
    NSNumber * _installFailureReason;
    unsigned long long  _installType;
    NSNumber * _itemID;
    NSString * _itemName;
    NSString * _maximumSystemVersion;
    NSString * _minimumSystemVersion;
    unsigned long long  _originalInstallType;
    NSArray * _plugInKitPlugins;
    NSArray * _pluginUUIDs;
    NSString * _preferredArchitecture;
    NSNumber * _purchaserDSID;
    NSString * _ratingLabel;
    NSNumber * _ratingRank;
    NSDate * _registeredDate;
    NSString * _shortVersionString;
    NSString * _signerOrganization;
    _LSLazyPropertyList * _siriActionDefinitionURLs;
    NSString * _sourceAppIdentifier;
    NSNumber * _storeFront;
    NSArray * _supportedComplicationFamilies;
    NSString * _teamID;
    bool  _userInitiatedUninstall;
    NSString * _vendorName;
    NSNumber * _versionID;
    NSString * _watchKitVersion;
}

@property (nonatomic, readonly) NSNumber *ODRDiskUsage;
@property (nonatomic, readonly) NSArray *UIBackgroundModes;
@property (nonatomic, readonly) NSArray *VPNPlugins;
@property (nonatomic, readonly) NSArray *activityTypes;
@property (getter=isAdHocCodeSigned, nonatomic, readonly) bool adHocCodeSigned;
@property (nonatomic, readonly) _LSApplicationState *appState;
@property (nonatomic, readonly) NSString *appStoreToolsBuildVersion;
@property (getter=isAppStoreVendable, nonatomic, readonly) bool appStoreVendable;
@property (nonatomic, readonly) NSArray *appTags;
@property (getter=isAppUpdate, nonatomic, readonly) bool appUpdate;
@property (nonatomic, readonly) NSString *applicationDSID;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *applicationType;
@property (nonatomic, readonly) NSString *applicationVariant;
@property (nonatomic, readonly) NSArray *audioComponents;
@property (getter=isBetaApp, nonatomic, readonly) bool betaApp;
@property (nonatomic, readonly) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, readonly) int bundleModTime;
@property (nonatomic, readonly) NSString *companionApplicationIdentifier;
@property (readonly) NSString *complicationPrincipalClass;
@property (nonatomic, readonly) NSArray *counterpartIdentifiers;
@property (nonatomic, readonly) bool cx_hasVoIPBackgroundMode;
@property (getter=isDeletable, nonatomic, readonly) bool deletable;
@property (getter=isDeviceBasedVPP, nonatomic, readonly) bool deviceBasedVPP;
@property (nonatomic, readonly) NSArray *deviceFamily;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForAdvertising;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForVendor;
@property (nonatomic, readonly) long long deviceManagementPolicy;
@property (nonatomic, readonly) NSArray *directionsModes;
@property (nonatomic, readonly) _LSDiskUsage *diskUsage;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (nonatomic, readonly) NSNumber *dynamicDiskUsage;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *familyID;
@property (nonatomic, readonly) bool fileSharingEnabled;
@property (getter=isGameCenterEnabled, nonatomic, readonly) bool gameCenterEnabled;
@property (nonatomic, readonly) bool gameCenterEverEnabled;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSNumber *genreID;
@property (readonly) bool hasComplication;
@property (nonatomic, readonly) bool hasCustomNotification;
@property (nonatomic, readonly) bool hasGlance;
@property (nonatomic, readonly) bool hasMIDBasedSINF;
@property (nonatomic, readonly) bool hasParallelPlaceholder;
@property (nonatomic, readonly) bool hasSettingsBundle;
@property (nonatomic, readonly) bool iconIsPrerendered;
@property (nonatomic, readonly) bool iconUsesAssetCatalog;
@property (nonatomic, readonly) NSNumber *installFailureReason;
@property (nonatomic, readonly) NSProgress *installProgress;
@property (nonatomic, readonly) unsigned long long installType;
@property (getter=isInstalled, nonatomic, readonly) bool installed;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSString *itemName;
@property (getter=isLaunchProhibited, nonatomic, readonly) bool launchProhibited;
@property (nonatomic, readonly) NSString *maximumSystemVersion;
@property (nonatomic, readonly) NSString *minimumSystemVersion;
@property (nonatomic, readonly) bool missingRequiredSINF;
@property (getter=isNewsstandApp, nonatomic, readonly) bool newsstandApp;
@property (nonatomic, readonly) unsigned long long originalInstallType;
@property (getter=isPlaceholder, nonatomic, readonly) bool placeholder;
@property (nonatomic, readonly) NSArray *plugInKitPlugins;
@property (nonatomic, readonly) NSString *preferredArchitecture;
@property (getter=isPurchasedReDownload, nonatomic, readonly) bool purchasedReDownload;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) NSString *ratingLabel;
@property (nonatomic, readonly) NSNumber *ratingRank;
@property (nonatomic, readonly) NSDate *registeredDate;
@property (getter=isRemoveableSystemApp, nonatomic, readonly) bool removeableSystemApp;
@property (getter=isRemovedSystemApp, nonatomic, readonly) bool removedSystemApp;
@property (nonatomic, readonly) NSArray *requiredDeviceCapabilities;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) bool shouldSkipWatchAppInstall;
@property (nonatomic, readonly) NSDictionary *siriActionDefinitionURLs;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSNumber *staticDiskUsage;
@property (nonatomic, readonly) NSArray *staticShortcutItems;
@property (nonatomic, readonly) NSString *storeCohortMetadata;
@property (nonatomic, readonly) NSNumber *storeFront;
@property (nonatomic, readonly) NSArray *subgenres;
@property (readonly) NSArray *supportedComplicationFamilies;
@property (nonatomic, readonly) bool supportsAlternateIconNames;
@property (nonatomic, readonly) bool supportsAudiobooks;
@property (nonatomic, readonly) bool supportsExternallyPlayableContent;
@property (nonatomic, readonly) bool supportsODR;
@property (nonatomic, readonly) bool supportsOpenInPlace;
@property (nonatomic, readonly) bool supportsPurgeableLocalStorage;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic) bool userInitiatedUninstall;
@property (nonatomic, readonly) NSString *vendorName;
@property (getter=isWatchKitApp, nonatomic, readonly) bool watchKitApp;
@property (nonatomic, readonly) NSString *watchKitVersion;
@property (getter=isWhitelisted, nonatomic, readonly) bool whitelisted;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

+ (id)applicationProxyForBundleType:(unsigned long long)arg1 identifier:(id)arg2 isCompanion:(bool)arg3 URL:(id)arg4 itemID:(id)arg5 bundleUnit:(unsigned int*)arg6;
+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForCompanionIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(bool)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 withContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg2;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyForSystemPlaceholder:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned int)arg1 withContext:(struct LSContext { struct LSDatabase {} *x1; }*)arg2;
+ (id)iconQueue;
+ (bool)supportsSecureCoding;

- (id)ODRDiskUsage;
- (id)UIBackgroundModes;
- (bool)UPPValidated;
- (id)VPNPlugins;
- (id)_initWithBundleUnit:(unsigned int)arg1 context:(struct LSContext { struct LSDatabase {} *x1; }*)arg2 applicationIdentifier:(id)arg3;
- (id)activityTypes;
- (id)alternateIconName;
- (id)appState;
- (id)appStoreToolsBuildVersion;
- (id)appTags;
- (id)applicationDSID;
- (id)applicationIdentifier;
- (id)applicationType;
- (id)applicationVariant;
- (id)audioComponents;
- (id)betaExternalVersionIdentifier;
- (int)bundleModTime;
- (void)clearAdvertisingIdentifier;
- (id)companionApplicationIdentifier;
- (id)complicationPrincipalClass;
- (id)counterpartIdentifiers;
- (void)dealloc;
- (id)description;
- (id)deviceFamily;
- (id)deviceIdentifierForAdvertising;
- (id)deviceIdentifierForVendor;
- (long long)deviceManagementPolicy;
- (id)directionsModes;
- (id)diskUsage;
- (id)downloaderDSID;
- (id)dynamicDiskUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAccessoryProtocols;
- (id)externalVersionIdentifier;
- (id)familyID;
- (bool)fileSharingEnabled;
- (bool)gameCenterEverEnabled;
- (id)genre;
- (id)genreID;
- (id)getBundleMetadata;
- (void)getDeviceManagementPolicyWithCompletionHandler:(id /* block */)arg1;
- (bool)hasComplication;
- (bool)hasCustomNotification;
- (bool)hasGlance;
- (bool)hasMIDBasedSINF;
- (bool)hasParallelPlaceholder;
- (bool)hasSettingsBundle;
- (id)iconDataForVariant:(int)arg1;
- (id)iconDataForVariant:(int)arg1 preferredIconName:(id)arg2 withOptions:(int)arg3;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (bool)iconIsPrerendered;
- (bool)iconUsesAssetCatalog;
- (id)initWithCoder:(id)arg1;
- (id)installFailureReason;
- (id)installProgress;
- (id)installProgressSync;
- (unsigned long long)installType;
- (bool)isAdHocCodeSigned;
- (bool)isAppStoreVendable;
- (bool)isAppUpdate;
- (bool)isBetaApp;
- (bool)isDeletable;
- (bool)isDeviceBasedVPP;
- (bool)isGameCenterEnabled;
- (bool)isInstalled;
- (bool)isLaunchProhibited;
- (bool)isNewsstandApp;
- (bool)isPlaceholder;
- (bool)isPurchasedReDownload;
- (bool)isRemoveableSystemApp;
- (bool)isRemovedSystemApp;
- (bool)isRestricted;
- (bool)isWatchKitApp;
- (bool)isWhitelisted;
- (id)itemID;
- (id)itemName;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2;
- (id)localizedNameForContext:(id)arg1 preferredLocalizations:(id)arg2 useShortNameOnly:(bool)arg3;
- (id)localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(bool)arg2;
- (id)maximumSystemVersion;
- (id)minimumSystemVersion;
- (bool)missingRequiredSINF;
- (unsigned long long)originalInstallType;
- (id)plugInKitPlugins;
- (id)preferredArchitecture;
- (id)primaryIconDataForVariant:(int)arg1;
- (bool)profileValidated;
- (id)purchaserDSID;
- (id)ratingLabel;
- (id)ratingRank;
- (id)registeredDate;
- (id)requiredDeviceCapabilities;
- (id)resourcesDirectoryURL;
- (void)setAlternateIconName:(id)arg1 withResult:(id /* block */)arg2;
- (void)setUserInitiatedUninstall:(bool)arg1;
- (id)shortVersionString;
- (bool)shouldSkipWatchAppInstall;
- (id)signerOrganization;
- (id)siriActionDefinitionURLs;
- (id)sourceAppIdentifier;
- (id)staticDiskUsage;
- (id)staticShortcutItems;
- (id)storeCohortMetadata;
- (id)storeFront;
- (id)subgenres;
- (id)supportedComplicationFamilies;
- (bool)supportsAlternateIconNames;
- (bool)supportsAudiobooks;
- (bool)supportsExternallyPlayableContent;
- (bool)supportsODR;
- (bool)supportsOpenInPlace;
- (bool)supportsPurgeableLocalStorage;
- (id)teamID;
- (id)uniqueIdentifier;
- (bool)userInitiatedUninstall;
- (id)vendorName;
- (id)watchKitVersion;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

- (bool)cx_hasVoIPBackgroundMode;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (bool)_inapptrust_isFirstParty;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_applicationBundleIdentifier;
- (id)un_applicationBundleURL;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_messagesPluginKitProxy;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM

- (bool)isMISAuthorized;

// Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI

- (id)appIconForTableCell;
- (bool)hasAppVPN;
- (bool)hasManagedRestrictions;
- (bool)isBlacklisted;
- (bool)isExcludedFromBackup;
- (bool)isExcludedFromCloudSync;
- (bool)isUnableToExportToUnmanaged;
- (bool)isUnableToImportFromUnmanaged;
- (bool)isUnableToUseCellData;
- (bool)isUnableToUseRoamingCellData;
- (bool)isUninstalledOnMDMRemoval;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (struct CGSize { double x1; double x2; })_defaultStyleSize:(id)arg1;
- (struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;

@end