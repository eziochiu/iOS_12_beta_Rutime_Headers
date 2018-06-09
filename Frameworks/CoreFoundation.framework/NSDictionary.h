/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDictionary : NSObject <AFSecurityDigestibleChunksProviding, ASDNotificationType, ATXScoreLogSerializable, CKLParsedObject, CSCoderEncoder, CUByteCodable, HFPropertyListConvertible, HMFObject, MPCSupportedCommands, NNSyncableHeadline, NNSyncableResult, NNSyncableSection, NSCopying, NSFastEnumeration, NSFetchRequestResult, NSMutableCopying, NSSecureCoding, PHFetchDictionaryAccessing, PQLBindable, REDonatedActionIdentifierProviding, TSPResourceLocalStrategyProvider>

@property (nonatomic, readonly) NSNumber *__im_associatedMessageContentType;
@property (nonatomic, readonly) NSString *__im_associatedMessagePluginBundleID;
@property (nonatomic, readonly) NSString *__im_associatedMessagePluginDisplayName;
@property (nonatomic, readonly) NSString *__im_associatedMessageSummary;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (nonatomic, readonly) float averageRating;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *categories;
@property (readonly) unsigned long long count;
@property (nonatomic, readonly) NSString *creator;
@property (nonatomic, readonly) id crk_keyValueObservingNewObject;
@property (nonatomic, readonly) id crk_keyValueObservingOldObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short fileHFSFlags;
@property (nonatomic, readonly) unsigned long long fileHFSResourceForkSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *hk_bundleId;
@property (nonatomic, readonly) NSArray *hk_categories;
@property (nonatomic, readonly) bool hk_isInstalled;
@property (nonatomic, readonly) NSString *hk_priceFormatted;
@property (nonatomic, readonly) NSNumber *hk_storeID;
@property (nonatomic, readonly) NSString *hk_title;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isOfficialApp;
@property (nonatomic) unsigned long long lastClientRevision;
@property (nonatomic) unsigned long long lastServerRevision;
@property (nonatomic) unsigned long long newRevision;
@property (readonly) NSString *npkRelevancyRelevantText;
@property (readonly) NSString *npkRelevancyUniqueID;
@property (nonatomic, readonly) NSString *priceFormatted;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) unsigned long long ratingCount;
@property (readonly, copy) NSString *shortDescription;
@property (nonatomic, readonly) NSNumber *storeID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *sync_NewsURLString;
@property (nonatomic, readonly) NSString *sync_colorHexString;
@property (nonatomic, readonly) NSString *sync_excerpt;
@property (nonatomic, readonly) NSDate *sync_expirationDate;
@property (nonatomic, readonly) unsigned long long sync_headlineCount;
@property (nonatomic, readonly) NSArray *sync_headlines;
@property (nonatomic, readonly) NSString *sync_identifier;
@property (nonatomic, readonly) NSString *sync_name;
@property (nonatomic, readonly) NSString *sync_publisherIdentifier;
@property (nonatomic, readonly) NSData *sync_publisherLogoImageData;
@property (nonatomic, readonly) NSString *sync_publisherName;
@property (nonatomic, readonly) NSArray *sync_sections;
@property (nonatomic, readonly) NSData *sync_thumbnailImageData;
@property (nonatomic, readonly) NSString *sync_title;
@property (nonatomic, readonly) unsigned long long sync_type;
@property (nonatomic, readonly) NSString *sync_webURLString;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *transitModeKeys;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, copy) NSString *versionToken;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dictionary;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(bool)arg2;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (bool)__getValue:(id*)arg1 forKey:(id)arg2;
- (unsigned long long)_cfTypeID;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allObjects;
- (id)allValues;
- (bool)containsKey:(id)arg1;
- (bool)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countForKey:(id)arg1;
- (unsigned long long)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(bool)arg2;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)invertedDictionary;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDictionary:(id)arg1;
- (bool)isNSDictionary__;
- (id)keyEnumerator;
- (id)keyOfEntryPassingTest:(id /* block */)arg1;
- (id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysOfEntriesPassingTest:(id /* block */)arg1;
- (id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(id /* block */)arg2;
- (id)keysSortedByValueUsingComparator:(id /* block */)arg1;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueWithOptions:(unsigned long long)arg1 usingComparator:(id /* block */)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;

// Image: /System/Library/CoreServices/RawCamera.bundle/RawCamera

- (id)keypathValueDictionary;
- (id)keypathValueDictionary:(id)arg1;
- (id)makeSerializable;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKFirstUrlForKeys:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreServices.framework/CoreServices

- (bool)_LS_BoolForKey:(id)arg1;
- (bool)_LS_containsKey:(id)arg1;
- (unsigned long long)_LS_integerForKey:(id)arg1;
- (id)_LS_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (unsigned long long)_hashQuery;
- (id)_parseQueryForIdentifiers:(id)arg1;
- (id)ls_insertExtensionPointVersion:(id)arg1;
- (id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeKeysAndValuesWithCSCoder:(id)arg1 filterBlock:(id /* block */)arg2;
- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (id)dictionaryByMergingWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1 withDefaultValueBlock:(id /* block */)arg2;
- (id)objectOrDefaultValueForKey:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)newWithContentsOf:(id)arg1 immutable:(bool)arg2;
+ (bool)supportsSecureCoding;

- (id)_stringToWrite;
- (int)_web_intForKey:(id)arg1;
- (id)_web_numberForKey:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (Class)classForCoder;
- (id)descriptionInStringsFileFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)fileCreationDate;
- (bool)fileExtensionHidden;
- (id)fileGroupOwnerAccountID;
- (id)fileGroupOwnerAccountName;
- (unsigned long long)fileGroupOwnerAccountNumber;
- (unsigned int)fileHFSCreatorCode;
- (unsigned int)fileHFSTypeCode;
- (bool)fileIsAppendOnly;
- (bool)fileIsImmutable;
- (id)fileModificationDate;
- (id)fileOwnerAccountID;
- (id)fileOwnerAccountName;
- (unsigned long long)fileOwnerAccountNumber;
- (unsigned long long)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned long long)fileSystemFileNumber;
- (long long)fileSystemNumber;
- (id)fileType;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 atomically:(bool)arg2;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_acceptedMetadataValueClasses;
+ (id)hk_acceptedPublicMetadataValueClasses;
+ (bool)hk_acceptsMetadataValue:(id)arg1 allowPrivateMetadata:(bool)arg2;
+ (id)hk_secureCodingClasses;

- (bool)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (id)hk_allValuesBySortedKeys;
- (id)hk_copyWithoutPrivateMetadataKeys;
- (id)hk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)hk_filterKeysWithBlock:(id /* block */)arg1;
- (id)hk_filteredDictionaryForKeys:(id)arg1;
- (id)hk_sortedKeys;
- (bool)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(bool)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)locationFromDataForKey:(id)arg1;
- (id)regionFromDataForKey:(id)arg1;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)descriptionAtIndent:(unsigned long long)arg1;

// Image: /System/Library/Frameworks/LocalAuthentication.framework/Support/DaemonUtils.framework/DaemonUtils

+ (id)dictionaryByMerging:(id)arg1 with:(id)arg2;

- (id)dictionaryByMergingWith:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_defaultOffer;
- (bool)_mapkit_writeBinaryPlist:(id)arg1 atomically:(bool)arg2;
- (id)_ratingData;
- (float)averageRating;
- (id)bestImageURLForWidth:(double)arg1;
- (id)bundleId;
- (id)categories;
- (id)creator;
- (bool)isInstalled;
- (bool)isOfficialApp;
- (id)priceFormatted;
- (unsigned long long)ratingCount;
- (id)storeID;
- (id)title;
- (id)transitModeKeys;
- (id)url;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_filterUsingMap:(id)arg1 inverse:(bool)arg2;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (struct KeyValueArray { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Object {} *x4[1]; }*)CA_copyRenderKeyValueArray;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })SCNMatrix4Value;
- (id)SCNMutableDeepCopy;
- (struct SCNVector3 { float x1; float x2; float x3; })SCNVector3Value;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })SCNVector4Value;
- (unsigned long long)SCN_safeHash;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)SLDictionaryWithOAuthAccessTokenResponseData:(id)arg1;
+ (id)dictionaryWithParametersInURLString:(id)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_nonEmptyCopy;
- (id)un_safeCastObjectForKey:(id)arg1 class:(Class)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_arrayForKey:(id)arg1;
- (id)vs_arrayOfDictionariesForKey:(id)arg1;
- (id)vs_arrayOfKindOfClass:(Class)arg1 forKey:(id)arg2;
- (id)vs_arrayOfNumbersForKey:(id)arg1;
- (id)vs_arrayOfStringsForKey:(id)arg1;
- (id)vs_dictionaryForKey:(id)arg1;
- (id)vs_numberForKey:(id)arg1;
- (id)vs_objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)vs_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference

- (id)copyGKSDeep;
- (id)copyGKSDeepMutable;

// Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime

- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:(id*)arg1;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

- (id)axssDecodeArrayOfClass:(Class)arg1 forKey:(id)arg2;
- (bool)axssDecodeBoolForKey:(id)arg1;
- (id)axssDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore

- (id)dictionaryForJSON;
- (bool)hasObjectForKey:(id)arg1 ofKindOfClass:(Class)arg2;
- (id)jsonString;
- (id)jsonStringWithPrettyPrint:(bool)arg1;
- (id)objectForKey:(id)arg1 ofKindOfClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant

- (long long)ssidAndBaseNameLocalizedCaseInsensitiveCompare:(id)arg1;
- (long long)ssidLocalizedCaseInsensitiveCompare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

- (id)devicePairingId;
- (id)displayName;
- (id)enabledDataClasses;
- (id)grappaInfo;
- (unsigned long long)lastClientRevision;
- (unsigned long long)lastServerRevision;
- (id)model;
- (unsigned long long)newRevision;
- (id)osType;
- (id)osVersion;
- (void)setDevicePairingId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnabledDataClasses:(id)arg1;
- (void)setGrappaInfo:(id)arg1;
- (void)setLastClientRevision:(unsigned long long)arg1;
- (void)setLastServerRevision:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setNewRevision:(unsigned long long)arg1;
- (void)setOsType:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setVersionToken:(id)arg1;
- (id)versionToken;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

- (bool)atx_isFuzzyMatch:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)atx_writeToFile:(struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; }*)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (id)aa_dictionaryByAddingEntriesFromDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI

- (id)aaui_map:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (id)ams_arrayUsingTransform:(id /* block */)arg1;
- (id)ams_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)ams_filterUsingTest:(id /* block */)arg1;
- (id)ams_objectForKey:(id)arg1 defaultValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver

- (bool)fourCharCode:(unsigned int*)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_dictionaryWithResponseData:(id)arg1;
+ (id)ak_jsonDictionaryWithResponseData:(id)arg1;

- (id)_ak_truncatedTokensCopy;
- (id)ak_map:(id /* block */)arg1;
- (id)ak_redactedCopy;
- (id)ak_urlQueryString;

// Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI

- (id)_avtui_deepCopy;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)bs_boolForKey:(id)arg1;
- (id)bs_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_safeArrayForKey:(id)arg1;
- (id)bs_safeDictionaryForKey:(id)arg1;
- (id)bs_safeNumberForKey:(id)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)bs_safeStringForKey:(id)arg1;
- (id)bs_safeURLForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (id)bds_subDictionaryWithKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (id)idsMetadataFileKey;
- (long long)idsMetadataFileURLType;
- (id)objectSentinelNull;
- (id)objectWithNSNulls:(id)arg1;
- (id)objectWithNoNSNulls:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)mutableCopyWithElementsCopy;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (bool)CalHasKeyIn:(id)arg1;
- (id)CalMutableRecursiveCopy;
- (id)filteredDictionaryPassingTest:(id /* block */)arg1;
- (id)mutableCopyWithElementsCopy;

// Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit

- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)floatForKey:(id)arg1;
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;
- (int)intForKey:(id)arg1;
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)mutableDeepCopy;
- (id)objectForIndex:(int)arg1;
- (id)objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)objectOrNullForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (bool)cam_compareKey:(id)arg1 withDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (id)cat_calculateAddedObjects;
- (id)cat_calculateRemovedObjects;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (bool)bw_containsBuiltInMicAsAnInput;
- (id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned int)arg1;
- (unsigned int)bw_optimalMicPolarPattern;
- (bool)matchesUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

- (id)crk_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (id)crk_keyValueObservingNewObject;
- (id)crk_keyValueObservingOldObject;
- (id)crk_mapUsingBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (bool)brc_booleanValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKObjectForKeyCaseInsensitive:(id)arg1;
- (id)CKPercentEscapedQueryString;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)__ftreg_candidateAliases;
- (bool)__ftreg_isValidSetupDictionary;
- (id)__ftreg_responseAppleID;
- (id)__ftreg_responseAuthToken;
- (bool)__ftreg_responseIsUpgrade;
- (id)__ftreg_responseProfileID;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (id)_cn_diff:(id)arg1;
- (void)_cn_each:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_keysAndValues;
- (id)_cn_map:(id /* block */)arg1;
- (id)_cn_mapKeys:(id /* block */)arg1;
- (id)_cn_mapValues:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (id)cdp_sanitizedCopy;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (id)CDVMergeOverrideDictionary:(id)arg1;
- (id)CDVObjectForKeyCaseInsensitive:(id)arg1;
- (id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSASAlbumResetSyncAlbumGUID;
- (id)MSASEventIsDueToAlbumDeletionAlbumGUID;
- (id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
- (bool)MSASIsErrorRecovery;
- (bool)MSASIsGlobalResetSync;
- (bool)MSASIsLocalChange;
- (bool)MSASIsNotInteresting;
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_URLForKey:(id)arg1;
- (id)parsec_UUIDForKey:(id)arg1;
- (id)parsec_arrayForKey:(id)arg1;
- (bool)parsec_boolForKey:(id)arg1;
- (id)parsec_dataForKey:(id)arg1;
- (id)parsec_dateForKey:(id)arg1;
- (id)parsec_dictionaryByMappingKeysUsingBlock:(id /* block */)arg1;
- (id)parsec_dictionaryForKey:(id)arg1;
- (id)parsec_numberForKey:(id)arg1;
- (id)parsec_stringForKey:(id)arg1;
- (id)sf_asActionItem:(id)arg1;
- (id)sf_asAirport;
- (id)sf_asAppLink:(id)arg1;
- (id)sf_asAppLinkCardSection:(id)arg1;
- (id)sf_asButton:(id)arg1;
- (id)sf_asColor:(id)arg1;
- (id)sf_asDescriptionCardSection:(id)arg1;
- (id)sf_asDetailedRowCardSection:(id)arg1;
- (id)sf_asFlight;
- (id)sf_asFlightCardSection:(id)arg1;
- (id)sf_asFormattedText:(id)arg1;
- (id)sf_asImage:(id)arg1;
- (id)sf_asKeyValueDataCardSection:(id)arg1;
- (id)sf_asMediaDetail:(id)arg1;
- (id)sf_asMediaInfoCardSection:(id)arg1;
- (id)sf_asMediaItem:(id)arg1;
- (id)sf_asMediaOffer:(id)arg1;
- (id)sf_asMediaPlayerCardSection:(id)arg1;
- (id)sf_asMetaInfoCardSection:(id)arg1;
- (id)sf_asNowPlayingCardSection:(id)arg1;
- (id)sf_asPunchout;
- (id)sf_asPunchout:(id)arg1;
- (id)sf_asRichText:(id)arg1;
- (id)sf_asRichTitleCardSection:(id)arg1;
- (id)sf_asRowCardSection:(id)arg1;
- (id)sf_asScoreboardCardSection:(id)arg1;
- (id)sf_asSearchResult:(id)arg1 factory:(id)arg2;
- (id)sf_asSocialMediaPostCardSection:(id)arg1;
- (id)sf_asStockChartCardSection:(id)arg1;
- (id)sf_asSuggestionCardSection:(id)arg1;
- (id)sf_asTableAlignmentSchema;
- (id)sf_asTableRowCardSection:(id)arg1;
- (id)sf_asTextColumnsCardSection:(id)arg1;
- (id)sf_asTitleCardSection:(id)arg1;
- (id)sf_asTrack:(id)arg1;
- (id)sf_asTrackListCardSection:(id)arg1;
- (id)sf_asWatchListCardSection:(id)arg1;
- (id)sf_asWatchListItem:(id)arg1;
- (id)sf_asWebCardSection:(id)arg1;
- (void)sf_baseCardSection:(id)arg1 reply:(id)arg2;
- (id)sf_imageForKey:(id)arg1 reply:(id)arg2;
- (int)sf_textColorForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)_cs_initWithXPCObject:(id)arg1;
- (id)_cs_xpcObject;
- (void)logSpeakerIdMetadataAtFilepath:(id)arg1 additionalMetadata:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (bool)hasCaseIgnoringKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils

+ (id)createWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;

- (const char *)encodedBytesAndReturnLength:(unsigned long long*)arg1 error:(id*)arg2;
- (id)encodedDataAndReturnError:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAMergeOverrideDictionary:(id)arg1;
- (id)DAObjectForKeyCaseInsensitive:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS

- (id)objectForInt:(int)arg1;

// Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration

+ (id)dmlmr_buildVersionKey;
+ (id)dmlmr_lastMigrationResultsWithSuccess:(bool)arg1 buildVersion:(id)arg2;
+ (id)dmlmr_successKey;

- (id)dmlmr_buildVersion;
- (id)dmlmr_success;

// Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit

- (id)alwaysGetArrayForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetDictionaryForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetKey:(id)arg1 ofType:(Class)arg2;
- (id)alwaysGetKey:(id)arg1 ofType:(Class)arg2 default:(id)arg3;
- (id)alwaysGetNumberForKey:(id)arg1 default:(id)arg2;
- (id)alwaysGetStringForKey:(id)arg1 default:(id)arg2;
- (id)dk_arrayFromKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)dk_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)dk_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5 validator:(id /* block */)arg6;
- (id)dk_arrayFromRequiredKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)dk_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)dk_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4 validator:(id /* block */)arg5;
- (bool)dk_boolFromKey:(id)arg1 defaultValue:(bool)arg2 failed:(bool*)arg3;
- (bool)dk_boolFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)dk_dictionaryFromKey:(id)arg1 defaultValue:(id)arg2 failed:(bool*)arg3;
- (id)dk_dictionaryFromKey:(id)arg1 limitedToKeys:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)dk_dictionaryFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)dk_dictionaryFromRequiredKey:(id)arg1 limitedToKeys:(id)arg2 failed:(bool*)arg3;
- (id)dk_numberFromKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)dk_numberFromRequiredKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 failed:(bool*)arg4;
- (id)dk_stringFromKey:(id)arg1 inSet:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)dk_stringFromKey:(id)arg1 maxLength:(unsigned long long)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)dk_stringFromRequiredKey:(id)arg1 inSet:(id)arg2 failed:(bool*)arg3;
- (id)dk_stringFromRequiredKey:(id)arg1 maxLength:(unsigned long long)arg2 failed:(bool*)arg3;
- (id)getArrayForKey:(id)arg1;
- (bool)getBoolForKey:(id)arg1;
- (id)getDictionaryForKey:(id)arg1;
- (id)getKey:(id)arg1 ofType:(Class)arg2;
- (id)getNumberForKey:(id)arg1;
- (id)getStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport

- (id)ds_arrayFromKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)ds_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)ds_arrayFromKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 defaultValue:(id)arg4 failed:(bool*)arg5 validator:(id /* block */)arg6;
- (id)ds_arrayFromRequiredKey:(id)arg1 inSet:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)ds_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4;
- (id)ds_arrayFromRequiredKey:(id)arg1 types:(id)arg2 maxLength:(unsigned long long)arg3 failed:(bool*)arg4 validator:(id /* block */)arg5;
- (bool)ds_boolFromKey:(id)arg1 defaultValue:(bool)arg2 failed:(bool*)arg3;
- (bool)ds_boolFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)ds_dictionaryFromKey:(id)arg1 defaultValue:(id)arg2 failed:(bool*)arg3;
- (id)ds_dictionaryFromKey:(id)arg1 limitedToKeys:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)ds_dictionaryFromRequiredKey:(id)arg1 failed:(bool*)arg2;
- (id)ds_dictionaryFromRequiredKey:(id)arg1 limitedToKeys:(id)arg2 failed:(bool*)arg3;
- (id)ds_numberFromKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 defaultValue:(id)arg4 failed:(bool*)arg5;
- (id)ds_numberFromRequiredKey:(id)arg1 lowerBound:(id)arg2 upperBound:(id)arg3 failed:(bool*)arg4;
- (id)ds_stringFromKey:(id)arg1 inSet:(id)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)ds_stringFromKey:(id)arg1 maxLength:(unsigned long long)arg2 defaultValue:(id)arg3 failed:(bool*)arg4;
- (id)ds_stringFromRequiredKey:(id)arg1 inSet:(id)arg2 failed:(bool*)arg3;
- (id)ds_stringFromRequiredKey:(id)arg1 maxLength:(unsigned long long)arg2 failed:(bool*)arg3;

// Image: /System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

- (id)_fides_objectByReplacingValue:(id)arg1 withValue:(id)arg2;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)dictionaryWithContentsOfData:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)fm_dictionaryWithContentsOfData:(id)arg1;
+ (id)fm_dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;

- (id)dictionaryWithLowercaseKeys;
- (id)fm_dictionaryByMappingValues:(id /* block */)arg1;
- (id)fm_dictionaryWithLowercaseKeys;
- (id)fm_filter:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTFilteredDictionaryForAPS;

// Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice

- (id)fm_dictionaryByDeeplySettingValuesForKeysWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;
+ (id)_gkImageCacheKeyPathsByKey;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2;
- (id)_gkImageURLForSize:(long long)arg1 scale:(double)arg2 foundSize:(out unsigned long long*)arg3;
- (id)_gkSubDictionaryWithKeys:(id)arg1;
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;
- (id)_gkValuesForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_dictionaryFromXPCObject:(id)arg1;
+ (id)_geo_replyDictionaryForError:(id)arg1 key:(id)arg2;

- (id)_geo_errorForKey:(id)arg1;
- (id)_geo_newXPCObject;
- (id)_placeOrCurrentLocation:(bool*)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)shortDescription;

- (id)arrayForKey:(id)arg1;
- (id)arrayOfDateComponentsFromDataForKey:(id)arg1;
- (id)base64EncodedDataForKey:(id)arg1;
- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 keyPresent:(bool*)arg2;
- (id)calendarForKey:(id)arg1;
- (id)calendarFromDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateComponentsFromDataForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)errorFromDataForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)mutableSetForKey:(id)arg1;
- (id)nsValueForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)predicateFromDataForKey:(id)arg1;
- (id)privateDescription;
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(bool)arg2 blacklistedKeys:(id)arg3;
- (id)setForKey:(id)arg1;
- (id)shortDescription;
- (id)shortDescription;
- (id)stringForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)timeZoneFromDataForKey:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (id)uuidFromStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_dictionaryWithCodableMetadata:(id)arg1;

- (id)hk_codableMetadata;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_hk_artwork;
- (id)_hk_bestImageURLForWidth:(double)arg1 fromArtworkArray:(id)arg2;
- (id)_hk_circularArtwork;
- (id)_hk_defaultOffer;
- (id)_hk_lookupItem;
- (id)hk_bestCircularImageURLForWidth:(double)arg1;
- (id)hk_bestImageURLForWidth:(double)arg1;
- (id)hk_bundleId;
- (id)hk_categories;
- (bool)hk_isInstalled;
- (id)hk_priceFormatted;
- (id)hk_storeID;
- (id)hk_title;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)locationFromDataForKey:(id)arg1;
- (id)regionFromDataForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_objectForViewSizeSubclass:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)_dictionaryWithData:(id)arg1 allowedClasses:(id)arg2;
+ (id)dictionaryWithArchiveData:(id)arg1;
+ (id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2;
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;

- (id)__imDeepCopy;
- (bool)__imIsMutable;
- (id)_arrayForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)archiveData;
- (id)dictionaryFromChanges:(id)arg1;
- (unsigned short)fileHFSFlags;
- (unsigned long long)fileHFSResourceForkSize;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (id)plistData;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2 pluginBundleID:(id)arg3 pluginDisplayName:(id)arg4;
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;

- (id)__im_associatedMessageContentType;
- (id)__im_associatedMessagePluginBundleID;
- (id)__im_associatedMessagePluginDisplayName;
- (id)__im_associatedMessageSummary;
- (bool)boolValueForKey:(id)arg1 withDefault:(bool)arg2;
- (double)doubleValueForKey:(id)arg1 withDefault:(double)arg2;
- (float)floatValueForKey:(id)arg1 withDefault:(float)arg2;
- (long long)integerValueForKey:(id)arg1 withDefault:(long long)arg2;
- (bool)isArchivable_im;
- (long long)longLongValueForKey:(id)arg1 withDefault:(long long)arg2;
- (long long)longValueForKey:(id)arg1 withDefault:(long long)arg2;
- (unsigned long long)unsignedIntegerValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (unsigned long long)unsignedLongLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;
- (unsigned long long)unsignedLongValueForKey:(id)arg1 withDefault:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

- (id)invertedDictionary;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCShortenedArray:(id)arg1;
+ (id)MCShortenedData:(id)arg1;
+ (id)MCShortenedDictionary:(id)arg1;
+ (id)MCShortenedObject:(id)arg1;

- (id)MCDeepCopy;
- (id)MCDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCMutableDeepCopy;
- (id)MCMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(long long)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5;
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(long long)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(long long)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(long long)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(long long)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(long long)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
- (id)MCShortenedPlistDescription;

// Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI

- (id)muDeepMutableCopy;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

- (struct _MRMediaRemoteCommandInfo { }*)commandInfoForCommand:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (bool)MR_isEqualToNowPlayingInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (bool)boolForKey:(id)arg1;
- (bool)boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (double)doubleForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)floatForKey:(id)arg1;
- (float)floatForKey:(id)arg1 defaultValue:(float)arg2;
- (int)intForKey:(id)arg1;
- (int)intForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)integerForKey:(id)arg1;
- (long long)integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)mutableDeepCopy;
- (id)objectForIndex:(int)arg1;
- (id)objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)objectOrNullForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)mf_boolForKey:(id)arg1;
- (int)mf_integerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileActivation.framework/MobileActivation

- (id)objectForCaseInsensitiveKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

- (id)setOfAllObjects;

// Image: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings

+ (id)dictionaryWithComplication:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

+ (id)npkRelevancyTupleWithUniqueID:(id)arg1 relevantText:(id)arg2;

- (id)npkRelevancyRelevantText;
- (id)npkRelevancyUniqueID;
- (id)npk_objectForKey:(id)arg1 class:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_serverStringDictionaryForDistance:(double)arg1 validDistance:(double)arg2 destination:(id)arg3 spoken:(bool)arg4;
+ (id)_serverStringDictionaryForMapItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (id)na_dictionaryByMappingValues:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;
- (id)na_reduceWithInitialValue:(id)arg1 reducer:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy

- (id)objectForPlatformSpecificKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)nu_evaluateWithPipelineState:(id)arg1 error:(out id*)arg2;
- (id)nu_unwrapJSValue;
- (void)nu_updateDigest:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_dictionary:(id /* block */)arg1;
+ (id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
+ (id)fc_dictionaryFromArray:(id)arg1 keyBlock:(id /* block */)arg2 valueBlock:(id /* block */)arg3;
+ (id)fc_dictionaryFromJSON:(id)arg1;
+ (id)fc_dictionaryFromJSON:(id)arg1 error:(id*)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(id /* block */)arg2;

- (id)fc_actionTypes;
- (id)fc_deepCopy;
- (id)fc_dictionaryByMergingDictionary:(id)arg1 withValueCombiner:(id /* block */)arg2;
- (id)fc_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)fc_dictionaryBySwappingValuesAndKeys;
- (id)fc_dictionaryByTransformingKeysWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingValuesWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(id /* block */)arg1;
- (id)fc_jsonEncodableDictionary;
- (id)fc_jsonEncodableDictionaryWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (id)fc_jsonString;
- (id)fc_jsonStringWithObjectHandler:(id /* block */)arg1 arrayObjectHandler:(id /* block */)arg2 dictionaryKeyHandler:(id /* block */)arg3 dictionaryValueHandler:(id /* block */)arg4;
- (id)fc_jsonStringWithOmittedUnsupportedDataTypes;
- (bool)fc_localDataHint;
- (id)fc_sortedEntriesWithKeyBlock:(id /* block */)arg1;
- (id)fc_subdictionaryForKeys:(id)arg1;
- (id)fc_subdictionaryWithCopiesForKeys:(id)arg1;
- (id)fc_transactions;
- (id)fr_descriptionWithKeyComparator:(id /* block */)arg1;
- (id)nf_objectsForKeysWithoutMarker:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)sync_NewsURLString;
- (id)sync_colorHexString;
- (id)sync_excerpt;
- (id)sync_expirationDate;
- (unsigned long long)sync_headlineCount;
- (id)sync_headlines;
- (id)sync_identifier;
- (id)sync_name;
- (id)sync_publisherIdentifier;
- (id)sync_publisherLogoImageData;
- (id)sync_publisherName;
- (id)sync_sections;
- (id)sync_thumbnailImageData;
- (id)sync_title;
- (unsigned long long)sync_type;
- (id)sync_webURLString;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

- (id)ic_prettyDescriptionWithTabLevel:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)stringFromQueryComponents;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (id)tsu_allKeysAsSet;
- (bool)tsu_boolValueForKey:(id)arg1;
- (id)tsu_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)PKArrayContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKArrayForKey:(id)arg1;
- (bool)PKBoolForKey:(id)arg1;
- (id)PKColorForKey:(id)arg1;
- (id)PKDateForKey:(id)arg1;
- (id)PKDecimalNumberForKey:(id)arg1;
- (id)PKDictionaryForKey:(id)arg1;
- (double)PKDoubleForKey:(id)arg1;
- (long long)PKIntegerForKey:(id)arg1;
- (id)PKNumberForKey:(id)arg1;
- (id)PKSetContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKSetForKey:(id)arg1;
- (id)PKStringForKey:(id)arg1;
- (id)PKURLForKey:(id)arg1;
- (id)PKUUIDForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })bl_affineTransformForKey:(id)arg1;
- (bool)bl_boolForKey:(id)arg1;
- (bool)bl_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)bl_dictionaryByRemovingValuesForKey:(id)arg1;
- (id)bl_dictionaryBySwappingValuesWithDictionary:(id)arg1;
- (double)bl_doubleForKey:(id)arg1;
- (double)bl_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)bl_floatForKey:(id)arg1;
- (float)bl_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (int)bl_intForKey:(id)arg1;
- (int)bl_intForKey:(id)arg1 defaultValue:(int)arg2;
- (long long)bl_integerForKey:(id)arg1;
- (long long)bl_integerForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)bl_nonRetainedObjectForKey:(id)arg1;
- (id)bl_objectForIndex:(int)arg1;
- (id)bl_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)bl_objectOrNullForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })bl_pointFromStringForKey:(id)arg1;
- (struct CGPoint { double x1; double x2; })bl_pointFromStringForKey:(id)arg1 defaultValue:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectFromStringForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bl_rectFromStringForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;

// Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation

- (id)_uniquedDictionary:(Class)arg1;
- (id)mutableUniquedDictionary;
- (id)uniquedDictionary;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)dictionaryChanging:(id)arg1 to:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (bool)writeToProtectedFile:(id)arg1 atomically:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

- (long long)_compareBundleDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine

- (unsigned long long)re_actionIdentifierHashValue;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (id)rc_dictionaryFromData:(id)arg1 error:(id*)arg2;
+ (id)rc_dictionaryFromJSON:(id)arg1;
+ (id)rc_dictionaryFromJSON:(id)arg1 error:(id*)arg2;

- (id)rc_dictionaryByTransformingKeysWithKeyAndValueBlock:(id /* block */)arg1;
- (id)rc_dictionaryByTransformingValuesWithKeyAndValueBlock:(id /* block */)arg1;
- (id)rc_subdictionaryForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)_sa_mappedDictionaryWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_dictionaryWithPropertyListData:(id)arg1;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned long long)arg2;

- (id)_safari_sortedTupleArray;
- (id)safari_URLForKey:(id)arg1;
- (id)safari_UUIDForKey:(id)arg1;
- (id)safari_arrayForKey:(id)arg1;
- (bool)safari_boolForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_dictionaryForKey:(id)arg1;
- (id)safari_diffWithDictionary:(id)arg1;
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_mapTableForKey:(id)arg1;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_setForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1 returningNilIfEmpty:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing

- (id)ssb_arrayForKey:(id)arg1;
- (id)ssb_dictionaryForKey:(id)arg1;
- (id)ssb_numberForKey:(id)arg1;
- (id)ssb_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)scrc_deepMutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)postFormData;
- (id)stringifyArguments:(id)arg1 requireEncoding:(bool)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices

- (id)prs_URLForKey:(id)arg1;
- (id)prs_arrayForKey:(id)arg1;
- (id)prs_arrayWithClass:(Class)arg1 forKey:(id)arg2;
- (bool)prs_boolForKey:(id)arg1;
- (id)prs_dataForKey:(id)arg1;
- (id)prs_dateForKey:(id)arg1;
- (id)prs_dictionaryForKey:(id)arg1;
- (float)prs_floatForKey:(id)arg1;
- (int)prs_intForKey:(id)arg1;
- (long long)prs_integerForKey:(id)arg1;
- (id)prs_numberForKey:(id)arg1;
- (id)prs_objectWithClass:(Class)arg1 forKey:(id)arg2;
- (id)prs_objectWithClassArray:(Class)arg1 forKey:(id)arg2;
- (id)prs_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (id)sck_objectsForKeys:(id)arg1;
- (id)yql_objectForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)sk_dictionaryWithSize:(struct CGSize { double x1; double x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib

- (id)_swiftInitWithDictionary_NSDictionary:(id)arg1;
/* MISSING HEADER DESCRIPTION FOR METHOD _swift_objectForKeyedSubscript: */

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;

- (void)appendJsonStringToString:(id)arg1;
- (bool)tsu_boolValueForKey:(id)arg1;
- (id)tsu_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_arrayForKey:(id)arg1;
- (bool)tv_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)tv_dictionaryForKey:(id)arg1;
- (id)tv_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)tv_numberForKey:(id)arg1;
- (id)tv_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (id)asQueryParameterString;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityLeafDescendantsWithCount:(unsigned long long)arg1 shouldStopAtRemoteElement:(bool)arg2 options:(id)arg3 treeLogger:(id)arg4;
- (id)_rearrangeKeyboardIfNecessaryWithOriginalArray:(id)arg1 processedArray:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)_boolForKey:(id)arg1;
- (id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
- (bool)_ui_dictionaryContainsUIStringDrawingKeys;
- (int)_web_messageLineNumber;
- (id)_web_messageSourceURL;
- (id)_web_messageText;
- (int)_web_messageType;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })uns_CGRectForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })uns_CMTimeForKey:(id)arg1;
- (id)uns_nonEmptyCopy;
- (id)uns_nonNilArrayForKey:(id)arg1;
- (id)uns_nonNilDictionaryForKey:(id)arg1;
- (id)uns_nonNilSetForKey:(id)arg1;
- (id)uns_notificationIdentifier;
- (id)uns_safeCastNonNilStringForKey:(id)arg1;
- (id)uns_safeCastObjectForKey:(id)arg1 class:(Class)arg2;
- (id)uns_safeCastObjectForKey:(id)arg1 classes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_exifFromImageURL:(id)arg1;

- (id)vcp_dateAnalyzed;
- (id)vcp_dateModified;
- (bool)vcp_degraded;
- (id)vcp_fingerprint;
- (unsigned long long)vcp_flags;
- (bool)vcp_flashFired;
- (double)vcp_quality;
- (id)vcp_results;
- (float)vcp_scaledExposureTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_syncPoint;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_time;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })vcp_timerange;
- (unsigned long long)vcp_types;
- (int)vcp_version;

// Image: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore

- (id)_vui_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)vui_URLForKey:(id)arg1;
- (id)vui_arrayForKey:(id)arg1;
- (bool)vui_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)vui_dataForKey:(id)arg1;
- (id)vui_dateForKey:(id)arg1;
- (id)vui_dictionaryForKey:(id)arg1;
- (id)vui_numberForKey:(id)arg1;
- (id)vui_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

- (bool)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit

- (id)_lookupValueForKey:(id)arg1 expectedClass:(Class)arg2;
- (id)wlk_arrayForKey:(id)arg1;
- (id)wlk_artworkVariantListingForKey:(id)arg1;
- (bool)wlk_boolForKey:(id)arg1 defaultValue:(bool)arg2;
- (id)wlk_dataForKey:(id)arg1;
- (id)wlk_dateForKey:(id)arg1;
- (id)wlk_dateFromMillisecondsSince1970ForKey:(id)arg1;
- (unsigned long long)wlk_deepHash;
- (id)wlk_dictionaryForKey:(id)arg1;
- (id)wlk_numberForKey:(id)arg1;
- (id)wlk_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (id)wf_URLForKeyPath:(id)arg1;
- (id)wf_arrayForKeyPath:(id)arg1;
- (id)wf_dictionaryForKeyPath:(id)arg1;
- (double)wf_doubleForKeyPath:(id)arg1;
- (float)wf_floatForKeyPath:(id)arg1;
- (long long)wf_integerForKeyPath:(id)arg1;
- (id)wf_numberForKeyPath:(id)arg1;
- (id)wf_objectForKeyPath:(id)arg1;
- (id)wf_objectOfKind:(Class)arg1 forKeyPath:(id)arg2;
- (id)wf_stringForKeyPath:(id)arg1;
- (id)wf_temperatureWithCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)wb_URLForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_arrayForKey:(id)arg1 isValid:(bool*)arg2;
- (bool)wb_boolForKey:(id)arg1;
- (id)wb_dateForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_dictionaryForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_numberForKey:(id)arg1;
- (id)wb_numberForKey:(id)arg1 isValid:(bool*)arg2;
- (id)wb_objectOfType:(Class)arg1 forKey:(id)arg2 isValid:(bool*)arg3;
- (id)wb_stringForKey:(id)arg1 isValid:(bool*)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_webkit_arrayForKey:(id)arg1;
- (bool)_webkit_boolForKey:(id)arg1;
- (int)_webkit_intForKey:(id)arg1;
- (id)_webkit_numberForKey:(id)arg1;
- (id)_webkit_objectForMIMEType:(id)arg1;
- (id)_webkit_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (id)plistString;

// Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport

- (id)blj_dictionaryByRemovingValuesForKey:(id)arg1;
- (id)blj_dictionaryBySwappingValuesWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (id)ic_arrayValueForKey:(id)arg1;
- (bool)ic_boolValueForKey:(id)arg1;
- (id)ic_dictionaryValueForKey:(id)arg1;
- (long long)ic_int64ValueForKey:(id)arg1;
- (int)ic_intValueForKey:(id)arg1;
- (id)ic_numberValueForKey:(id)arg1;
- (id)ic_stringValueForKey:(id)arg1;
- (unsigned int)ic_uintValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)objectForKey:(id)arg1 matching:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (int)iterations;
- (float)offset;
- (id)scriptEntry;
- (id)scriptPath;
- (SEL)setupSelector;
- (SEL)testSelector;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsp_decoderDataInfoDictionaryFromMessage:(const struct RepeatedPtrField<TSP::DataInfo> { void **x1; int x2; int x3; int x4; }*)arg1;
+ (id)tsp_decoderResourceNameDictionaryFromMessage:(const struct RepeatedPtrField<TSP::DataInfo> { void **x1; int x2; int x3; int x4; }*)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromMessage:(const struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x1; int x2; int x3; int x4; }*)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromWeakExternalReferences:(id)arg1 updatingComponentInfo:(struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned int> { unsigned int *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<TSP::FeatureInfo> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; }*)arg2 failIfReferenceIsNotPersisted:(bool)arg3 context:(id)arg4 error:(id*)arg5;
+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;

- (long long)localStrategyForDocumentResourceInfo:(id)arg1;
- (void)sfu_appendJsonStringToString:(id)arg1;
- (void)tsp_saveIdentifierToObjectUUIDDictionaryToMessage:(struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsu_allKeysAsSet;
- (bool)tsu_boolValueForKey:(id)arg1;
- (id)tsu_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
