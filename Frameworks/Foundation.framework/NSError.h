/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSError : NSObject <BSDescriptionProviding, MFPubliclyDescribable, MSPJournaled, NSCopying, NSSecureCoding> {
    long long  _code;
    NSString * _domain;
    void * _reserved;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSString *CPSafeDescription;
@property (nonatomic, readonly, copy) NSString *_bcs_privacyPreservingDescription;
@property (nonatomic, readonly) bool _geo_isXPCInterruptedError;
@property (getter=_mapkit_isCLDenied, nonatomic, readonly) bool _mapkit_CLDenied;
@property (getter=_mapkit_isCLErrorNetwork, nonatomic, readonly) bool _mapkit_CLErrorNetwork;
@property (getter=_mapkit_isCLHeadingFailure, nonatomic, readonly) bool _mapkit_CLHeadingFailure;
@property (getter=_mapkit_isCLLocationUnknown, nonatomic, readonly) bool _mapkit_CLLocationUnknown;
@property (nonatomic, readonly, retain) NSURL *_mapkit_locationErrorSettingsURL;
@property (readonly) bool _maps_isCloudKitErrorContainingNotFoundMarkersOnly;
@property (readonly) bool _maps_isCloudKitTokenExpirationError;
@property (readonly) bool _maps_isFileNotFoundError;
@property (getter=ams_isUserCancelledError, nonatomic, readonly) bool ams_userCancelledError;
@property (readonly) long long code;
@property (getter=isComparisonError, nonatomic, readonly) bool comparisonError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain;
@property (nonatomic, readonly) NSURL *fp_collidingURL;
@property (nonatomic, readonly) bool fp_isRemoteCrashError;
@property (nonatomic, readonly) bool fp_isSyncAnchorExpiredError;
@property (getter=isFromRequest, nonatomic, readonly) bool fromRequest;
@property (readonly) unsigned long long hash;
@property (getter=hd_isFromRequest, nonatomic, readonly) bool hd_fromRequest;
@property (nonatomic, readonly) unsigned short hd_messageID;
@property (nonatomic, readonly) NSString *hd_messageIDSDeviceIdentifier;
@property (nonatomic, readonly) NSString *hd_messageIDSIdentifier;
@property (nonatomic, readonly) NSDate *hd_messageSent;
@property (nonatomic, readonly) NSDictionary *hd_persistentUserInfo;
@property (readonly, copy) NSString *helpAnchor;
@property (nonatomic, readonly) bool hf_isHomeKitNamingError;
@property (nonatomic, readonly) bool hf_isHomeKitUnreachableError;
@property (getter=isHMError, nonatomic, readonly) bool hmError;
@property (getter=isHMFError, nonatomic, readonly) bool hmfError;
@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) bool isAuthKitUnableToPromptDueToNetworkError;
@property (nonatomic, readonly) bool isAuthKitUnableToPromptError;
@property (nonatomic, readonly) bool isAuthenticationError;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (nonatomic, readonly) bool mdltsu_isCancelError;
@property (nonatomic, readonly) bool mdltsu_isCorruptedError;
@property (nonatomic, readonly) bool mdltsu_isNoSuchFileError;
@property (nonatomic, readonly) bool mdltsu_isOutOfSpaceError;
@property (nonatomic, readonly) bool mdltsu_isReadError;
@property (nonatomic, readonly) bool mdltsu_isWriteError;
@property (nonatomic, readonly) unsigned short messageID;
@property (nonatomic, readonly) NSDate *messageSent;
@property (nonatomic, readonly, copy) NSString *mf_publicDescription;
@property (nonatomic, readonly) NSDictionary *persistentUserInfo;
@property (readonly) id recoveryAttempter;
@property (nonatomic, readonly) bool safari_isSQLiteCorruptionError;
@property (nonatomic, readonly) bool safari_isSQLiteError;
@property (nonatomic, readonly, copy) NSString *safari_privacyPreservingDescription;
@property (nonatomic, readonly) NSString *ssb_privacyPreservingDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *tsp_hints;
@property (nonatomic, readonly) NSString *tsp_hintsDescription;
@property (nonatomic, readonly) bool tsp_isCorruptZipOfPackageError;
@property (nonatomic, readonly) bool tsp_isCorruptedError;
@property (nonatomic, readonly) bool tsp_isDocumentTooNewError;
@property (nonatomic, readonly) bool tsp_isPasswordInputError;
@property (nonatomic, readonly) bool tsp_isReadError;
@property (nonatomic, readonly) bool tsp_isRecoverable;
@property (nonatomic, readonly) bool tsp_isTSPError;
@property (nonatomic, readonly) bool tsp_isUnsupportedVersionError;
@property (nonatomic, readonly) bool tsp_isWriteError;
@property (nonatomic, readonly) bool tsu_isCancelError;
@property (nonatomic, readonly) bool tsu_isCorruptedError;
@property (nonatomic, readonly) bool tsu_isNoPermissionError;
@property (nonatomic, readonly) bool tsu_isNoSuchFileError;
@property (nonatomic, readonly) bool tsu_isOutOfSpaceError;
@property (nonatomic, readonly) bool tsu_isReadError;
@property (nonatomic, readonly) bool tsu_isWriteError;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)_readCorruptErrorWithFormat:(id)arg1;
+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id /* block */)userInfoValueProviderForDomain:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (long long)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(long long)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(long long)arg4;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (bool)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;
- (id)_web_localizedDescription;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)helpAnchor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)recoveryAttempter;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

// Image: /Developer/Library/PrivateFrameworks/DVTInstrumentsUtilities.framework/DVTInstrumentsUtilities

+ (id)dvtiuErrorWithCode:(unsigned long long)arg1;
+ (id)dvtiuErrorWithFormat:(id)arg1;
+ (id)dvtiu_errorWithCode:(unsigned long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;

- (bool)dvtiu_isURLAlreadyExistsError;
- (void)enumerateFailedCapabilityRequirements:(id /* block */)arg1;
- (bool)getRecommendedRecoveryAction:(id*)arg1 parameter:(id*)arg2;
- (bool)isCapabilityRequirementFailure;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_sanitizeObject:(id)arg1;
- (id)ac_secureCodingError;

// Image: /System/Library/Frameworks/CallKit.framework/CallKit

+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1;
+ (id)cx_callDirectoryManagerErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)cx_callDirectoryStoreErrorWithCode:(long long)arg1;
+ (id)cx_errorWithCode:(long long)arg1;
+ (id)cx_incomingCallErrorWithCode:(long long)arg1;
+ (id)cx_requestTransactionErrorWithCode:(long long)arg1;

// Image: /System/Library/Frameworks/ClassKit.framework/ClassKit

+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3;
+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 errorObject:(id)arg3 description:(id)arg4;
+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 errorObject:(id)arg3 format:(id)arg4;
+ (bool)cls_assignError:(id*)arg1 code:(long long)arg2 format:(id)arg3;
+ (bool)cls_assignError:(id*)arg1 fromError:(id)arg2;
+ (id)cls_createErrorWithCode:(long long)arg1 description:(id)arg2;
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 description:(id)arg3;
+ (id)cls_createErrorWithCode:(long long)arg1 errorObject:(id)arg2 format:(id)arg3;
+ (id)cls_createErrorWithCode:(long long)arg1 format:(id)arg2;

- (void)cls_debug:(id)arg1;
- (void)cls_info:(id)arg1;
- (bool)cls_isClassKitError;
- (void)cls_log:(id)arg1;
- (id)cls_underlyingErrorWithDomain:(id)arg1;
- (void)cls_warn:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)CKErrorFromErrno;
+ (id)CKErrorWithPOSIXCode:(int)arg1;

- (id)CKClientSuitableError;
- (id)CKClientSuitableUnderlyingError;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (bool)CKHasCKErrorInChildChain;
- (bool)CKIsCKError;
- (bool)CKIsNotFoundError;
- (bool)CKIsPOSIXErrorCode:(long long)arg1;
- (bool)isComparisonError;

// Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth

+ (id)errorWithInfo:(id)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/DeviceCheck.framework/DeviceCheck

+ (id)dc_errorWithCode:(long long)arg1;
+ (id)dc_errorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

+ (id)_defaultDescriptionForCode:(long long)arg1;
+ (id)errorWithCADResult:(int)arg1;
+ (id)errorWithCADResult:(int)arg1 action:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 reason:(id)arg3;
+ (id)errorWithEKErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 reason:(id)arg4;
+ (id)errorWithEKErrorCode:(long long)arg1 underlyingError:(id)arg2;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)fileProviderErrorForCollisionWithItem:(id)arg1;
+ (id)fileProviderErrorForNonExistentItemWithIdentifier:(id)arg1;
+ (id)fp_errorForCollisionWithURL:(id)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)fp_invalidArgumentError:(id)arg1;
+ (void)load;

- (id)fileProviderCollidingFPItem;
- (id)fileProviderCollidingItem;
- (id)fp_annotatedErrorWitName:(id)arg1 path:(id)arg2 variant:(id)arg3;
- (id)fp_annotatedErrorWithItem:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithItems:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithURL:(id)arg1 variant:(id)arg2;
- (id)fp_collidingURL;
- (bool)fp_isFileProviderError:(long long)arg1;
- (bool)fp_isRemoteCrashError;
- (bool)fp_isSyncAnchorExpiredError;
- (id)fp_strippedError;
- (id)fp_userInfoValueForKey:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(out id*)arg3;
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_error:(long long)arg1;
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (bool)hk_assignError:(id*)arg1 code:(long long)arg2 format:(id)arg3;
+ (id)hk_error:(long long)arg1 description:(id)arg2;
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;
+ (id)hk_error:(long long)arg1 format:(id)arg2;
+ (id)hk_featureUnavailableForProfileError;
+ (id)hk_invalidProfileError;
+ (id)hk_protectedDataInaccessibilityError;

- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;
- (bool)hk_OAuth2_isAccessDeniedError;
- (bool)hk_OAuth2_isBearerAuthenticationError;
- (bool)hk_OAuth2_isOAuth2Error;
- (bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;
- (bool)hk_isAuthorizationDeniedError;
- (bool)hk_isAuthorizationNotDeterminedError;
- (bool)hk_isCocoaNoSuchFileError;
- (bool)hk_isDatabaseAccessibilityError;
- (bool)hk_isDatabaseTransactionError;
- (bool)hk_isHealthKitError;
- (bool)hk_isHealthKitErrorWithCode:(long long)arg1;
- (bool)hk_isInternalFailureError;
- (bool)hk_isInvalidArgumentError;
- (bool)hk_isRequiredAuthorizationError;
- (bool)hk_isServiceDeviceNotFoundError;
- (bool)hk_isStreamFailureError;
- (bool)hk_isTimeoutError;
- (bool)hk_isUserCanceledError;
- (bool)hk_isXPCConnectionError;
- (id)hk_sanitizedError;
- (id)hk_underlyingErrorWithDomain:(id)arg1;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1;
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmPrivateErrorWithCode:(long long)arg1;
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;

- (bool)isHMError;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)_errorWithExtensionServiceError:(unsigned long long)arg1;

- (long long)_mapkit_directionsErrorCode;
- (id)_mapkit_error;
- (id)_mapkit_errorWithDirectionsError:(id)arg1;
- (bool)_mapkit_isCLDenied;
- (bool)_mapkit_isCLErrorNetwork;
- (bool)_mapkit_isCLHeadingFailure;
- (bool)_mapkit_isCLLocationUnknown;
- (bool)_mapkit_isDirectionsError;
- (id)_mapkit_locationErrorSettingsURL;
- (id)_mapkit_transitIncident;
- (long long)_mapkit_underlyingGEOError;

// Image: /System/Library/Frameworks/Metal.framework/Metal

- (id)initWithIOAccelError:(long long)arg1;

// Image: /System/Library/Frameworks/ModelIO.framework/ModelIO

+ (id)mdltsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)mdltsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)mdltsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)mdltsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)mdltsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)mdltsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)mdltsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)mdltsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;

- (id)mdltsu_errorPreservingAlertTitle;
- (id)mdltsu_errorPreservingCancel;
- (bool)mdltsu_isCancelError;
- (bool)mdltsu_isCorruptedError;
- (bool)mdltsu_isErrorPassingTest:(id /* block */)arg1;
- (bool)mdltsu_isNoSuchFileError;
- (bool)mdltsu_isOutOfSpaceError;
- (bool)mdltsu_isReadError;
- (bool)mdltsu_isWriteError;
- (id)mdltsu_localizedAlertMessage;
- (id)mdltsu_localizedAlertTitle;

// Image: /System/Library/Frameworks/Photos.framework/Photos

+ (id)_ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;
+ (id)ph_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (id)ph_genericEntitlementError;
+ (id)ph_genericErrorWithLocalizedDescription:(id)arg1;
+ (id)ph_genericErrorWithUnderlyingError:(id)arg1 localizedDescription:(id)arg2;

// Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit

+ (id)_rpUserErrorForCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)failingURL;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)APIAuthorizationErrorFromErrorCode:(long long)arg1;
+ (id)APIFakeUserErrorFromErrorCode:(long long)arg1;
+ (id)APIGenericErrorFromErrorCode:(long long)arg1;
+ (id)APIInternalServerErrorFromErrorCode:(long long)arg1;
+ (id)APILimitErrorFromErrorCode:(long long)arg1;
+ (id)APIParameterErrorFromErrorCode:(long long)arg1;
+ (id)APIUserErrorFromErrorCode:(long long)arg1;
+ (id)errorFromTencentWeiboAPIResponseErrorWithType:(long long)arg1 code:(long long)arg2;

- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;
- (id)encodeableError;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)_un_descriptionForUNErrorCode:(long long)arg1;
+ (id)_un_descriptionForUNPrivateErrorCode:(long long)arg1;
+ (id)_updateUserInfo:(id)arg1 withLocalizedDescription:(id)arg2;
+ (id)un_errorWithUNErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)un_errorWithUNPrivateErrorCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_secureCodingSafeError;

// Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity

+ (id)userInfoDictionaryWithErrorStringsForErrorCode:(long long)arg1;
+ (id)wcErrorFromInternalError:(id)arg1;
+ (id)wcErrorFromReceivedCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1;
+ (id)wcErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)wcErrorWithCode:(long long)arg1 underlyingWCErrorWithCode:(long long)arg2;
+ (id)wcErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)wcInternalErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation

- (id)ATPError;
- (id)initWithATPError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference

+ (id)AVConferenceServiceError:(long long)arg1 detailCode:(long long)arg2 description:(id)arg3;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 filePath:(id)arg3 description:(id)arg4 reason:(id)arg5;
+ (id)AVConferenceServiceError:(long long)arg1 detailedCode:(long long)arg2 returnCode:(long long)arg3 filePath:(id)arg4 description:(id)arg5 reason:(id)arg6;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)ax_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 arguments:(char *)arg4;
+ (id)ax_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)ax_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)aa_errorWithCode:(long long)arg1;
+ (id)aa_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)aa_errorWithServerResponse:(id)arg1;

- (id)_aa_userReadableError;

// Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication

+ (id)aida_errorWithCode:(long long)arg1;
+ (id)aida_errorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (bool)ams_hasDomain:(id)arg1 code:(unsigned long long)arg2;
- (bool)ams_isUserCancelledError;

// Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission

+ (id)pr_errorWithCode:(long long)arg1;
+ (id)pr_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)pr_errorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_errorWithCode:(long long)arg1;
+ (id)ak_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)ak_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)ak_wrappedAnisetteError:(int)arg1;

- (id)ak_errorByAppendingUserInfo:(id)arg1;
- (bool)ak_isUserCancelError;
- (bool)ak_isUserSkippedError;
- (bool)ak_isUserTryAgainError;

// Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport

- (id)_bcs_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_timeoutError;

- (bool)bs_isCancelledError;
- (bool)bs_isTimeoutError;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore

- (void)logRecursively;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

+ (id)formattedCode:(long long)arg1;

- (id)formattedCode;
- (id)verboseDescription;
- (id)verboseDescriptionWithIdentation:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI

+ (id)NPHCellularErrorWithCode:(long long)arg1;
+ (id)NPHCellularSanitizedError:(id)arg1;
+ (bool)_canControlLTEVoiceOptionsSeparately;
+ (id)_techFromBundle;
+ (id)_techStandardName;
+ (id)_titleAndMessageDictForError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit

+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorDictionary:(id)arg2;
+ (id)crk_EDUProfileErrorWithCode:(long long)arg1 errorField:(id)arg2 andValue:(id)arg3;
+ (id)crk_badFieldTypeErrorWithField:(id)arg1;
+ (id)crk_malformedProfileErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_missingFieldErrorWithField:(id)arg1;
+ (id)crk_unsupportedValueErrorWithField:(id)arg1 value:(id)arg2;
+ (id)crk_valueNotUniqueErrorWithField:(id)arg1 value:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs

+ (id)br_errorFromErrno;
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)br_errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3 description:(id)arg4;
+ (id)br_errorWithPOSIXCode:(int)arg1;
+ (id)br_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)brc_addPartialError:(id)arg1 forURL:(id)arg2 toError:(id)arg3;
+ (id)brc_errorAcceptAlreadyInProgressForURL:(id)arg1;
+ (id)brc_errorAccountMismatch;
+ (id)brc_errorAppLibraryNotFound:(id)arg1;
+ (id)brc_errorClientZoneNotFound:(id)arg1;
+ (id)brc_errorCompatibilityIssue;
+ (id)brc_errorDaemonShouldBeLoggedOut;
+ (id)brc_errorDocumentAtURL:(id)arg1 isNotExternalToAppLibrary:(id)arg2;
+ (id)brc_errorDocumentIsNoLongerSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentIsNotShared;
+ (id)brc_errorDocumentIsNotSharedAtURL:(id)arg1;
+ (id)brc_errorDocumentWithFilename:(id)arg1 size:(long long)arg2 isTooLargeToUpload:(long long)arg3;
+ (id)brc_errorDriveDisabledOrAppLibraryDisabled;
+ (id)brc_errorFolderHasSharedSubitems;
+ (id)brc_errorInvalidParameter:(id)arg1 value:(id)arg2;
+ (id)brc_errorItemAlreadyPartOfAShare;
+ (id)brc_errorItemChanged;
+ (id)brc_errorItemInTrash;
+ (id)brc_errorItemNotFound:(id)arg1;
+ (id)brc_errorLoggedOut;
+ (id)brc_errorMethodNotImplemented:(SEL)arg1;
+ (id)brc_errorNoAppLibraryForBundle:(id)arg1;
+ (id)brc_errorNoDocumentAtURL:(id)arg1 underlyingPOSIXError:(int)arg2;
+ (id)brc_errorNoSuitableClientApp;
+ (id)brc_errorNotInCloud:(id)arg1;
+ (id)brc_errorNotOnDisk:(id)arg1;
+ (id)brc_errorOperationCancelled;
+ (id)brc_errorPathOutsideAnyCloudDocsAppLibraryAtURL:(id)arg1;
+ (id)brc_errorPermissionError:(id)arg1;
+ (id)brc_errorPermissionErrorAtURL:(id)arg1;
+ (id)brc_errorSyncBlocked;
+ (id)brc_errorSyncDisabled:(id)arg1;
+ (id)brc_errorUnknownKey:(id)arg1;

- (bool)br_isCloudDocsErrorCode:(long long)arg1;
- (bool)br_isCocoaErrorCode:(long long)arg1;
- (bool)br_isPOSIXErrorCode:(long long)arg1;
- (id)br_underlyingPOSIXError;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_daemonAccessDisabledError;
+ (id)brc_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;
+ (void)initialize;

- (id)_brc_cloudKitInternalWithErrorCode:(long long)arg1;
- (id)_brc_cloudKitPluginErrorPayload;
- (bool)_brc_isCloudKitErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitInternalErrorSafeToSyncUpWithoutSyncDown;
- (bool)_brc_isCloudKitPluginErrorCode:(long long)arg1;
- (bool)_brc_isCloudKitZoneNotFoundError;
- (bool)_brc_isCloudKitZoneUserDeletedError;
- (id)br_cloudKitErrorForIdentifier:(id)arg1;
- (double)br_suggestedRetryTimeInterval;
- (bool)brc_checkErrorsFromCloudKit:(id /* block */)arg1;
- (id)brc_cloudKitErrorForRecordID:(id)arg1;
- (id)brc_cloudKitErrorForSubscriptionID:(id)arg1;
- (id)brc_cloudKitErrorForZone:(id)arg1;
- (unsigned long long)brc_containerResetErrorForSharedZone:(bool)arg1 resetReason:(const char **)arg2;
- (bool)brc_containsCloudKitErrorCode:(long long)arg1;
- (bool)brc_containsCloudKitInternalErrorCode:(long long)arg1;
- (id)brc_description;
- (bool)brc_isBatchRequestFailed;
- (bool)brc_isBlacklistError;
- (bool)brc_isCloudKitAssetFileModified;
- (bool)brc_isCloudKitCancellationError;
- (bool)brc_isCloudKitErrorImplyingZoneNeedsCreation;
- (bool)brc_isCloudKitErrorNeedsPCSPrep;
- (bool)brc_isCloudKitErrorRequiringAssetRescan;
- (bool)brc_isCloudKitErrorRequiringAssetReupload;
- (bool)brc_isCloudKitErrorRequiringSkipThrottling;
- (bool)brc_isCloudKitErrorSafeToSyncUpWithoutSyncDown;
- (bool)brc_isCloudKitErrorUnsupportedOSForItemAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorUnsupportedOSForZoneAndGetMinimumSupported:(id*)arg1;
- (bool)brc_isCloudKitErrorZoneMigrated;
- (bool)brc_isCloudKitErrorZoneUndergoingMigration;
- (bool)brc_isCloudKitOutOfQuota;
- (bool)brc_isCloudKitUnknownItemError;
- (bool)brc_isEverRetriable;
- (bool)brc_isOutOfSpaceError;
- (bool)brc_isResetError;
- (bool)brc_isRetriable;
- (bool)brc_shouldRetryBubbleLater;
- (id)brc_staleUpdateRecordIDs;
- (id)brc_strippedError;
- (int)brc_syncOperationErrorKind;
- (id)brc_wrappedError;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)CKLogErrorWithCode:(long long)arg1 format:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)_cplSafeUserInfoForXPCDidChange:(bool*)arg1;
- (id)cplSafeErrorForXPC;
- (id)cplShortDomainDescription;
- (id)cplUnderlyingPOSIXError;
- (bool)isCPLError;
- (bool)isCPLErrorWithCode:(long long)arg1;
- (bool)isCPLOperationCancelledError;

// Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync

+ (id)errorFromSYErrorInfo:(id)arg1;
+ (id)errorWithSYError:(long long)arg1 userInfo:(id)arg2;

- (id)CPSafeDescription;
- (id)idsIdentifier;
- (id)initWithSYError:(long long)arg1 userInfo:(id)arg2;
- (bool)isFromRequest;
- (unsigned short)messageID;
- (id)messageSent;
- (id)persistentUserInfo;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

- (bool)shouldDisplayToUser;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (id)errorByExtendingUserInfoWithDictionary:(id)arg1;
- (bool)isAuthKitUnableToPromptDueToNetworkError;
- (bool)isAuthKitUnableToPromptError;
- (bool)isAuthenticationError;
- (bool)isCoolDownError;
- (bool)isICSCRecoveryHardLimitError;
- (bool)isLoginHardLimit;
- (bool)isLoginSoftLimit;
- (bool)isRecoveryPETHardLimitError;
- (bool)isRecoveryPETSoftLimitError;

// Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP

+ (id)errorWithOSStatus:(int)arg1;
+ (id)hapErrorWithcode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1;
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmPrivateErrorWithCode:(long long)arg1;
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;

- (bool)isHAPError;
- (bool)isHMError;
- (bool)isHMError;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

+ (id)MMCSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 suggestion:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)MSErrorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4 additionalUserInfo:(id)arg5;

- (int)MMCSErrorType;
- (bool)MMCSIsAuthorizationError;
- (bool)MMCSIsCancelError;
- (bool)MMCSIsFatalError;
- (bool)MMCSIsNetworkConditionsError;
- (id)MMCSRetryAfterDate;
- (bool)MSASStateMachineIsCanceledError;
- (bool)MSCanBeIgnored;
- (bool)MSContainsErrorWithDomain:(id)arg1 code:(long long)arg2;
- (id)MSFindPrimaryError;
- (bool)MSIsAuthError;
- (bool)MSIsBadTokenError;
- (bool)MSIsCounted;
- (bool)MSIsFatal;
- (bool)MSIsQuotaError;
- (bool)MSIsRegistrationError;
- (bool)MSIsTemporaryNetworkError;
- (id)MSMMCSRetryAfterDate;
- (id)MSMakePrimaryError;
- (bool)MSNeedsBackoff;
- (id)MSVerboseDescription;
- (void)_MMCSApplyBlock:(id /* block */)arg1;
- (void)_MSApplyBlock:(id /* block */)arg1;
- (id)_MSVerboseDescriptionRecursionCount:(int)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAExtendedDescription;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACardDAV.framework/DACardDAV

- (bool)DA_isFailedDependencyError;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal

- (bool)isSubCalAuthError;
- (bool)isSubCalReachabilityError;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)fm_cancelledError;
+ (id)fm_errorWithCode:(unsigned long long)arg1;
+ (id)fm_genericError;
+ (id)fm_timeoutError;

- (bool)fm_isCancelledError;
- (bool)fm_isFileNotFoundError;
- (bool)fm_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)sceneMessageErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkUnauthenticatedError;
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;
+ (id)userErrorForServerError:(id)arg1;
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;

- (bool)_gkIsUnauthenticatedError;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)GEOErrorWithCode:(long long)arg1 reason:(id)arg2 underlyingError:(id)arg3;
+ (id)GEOErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)_geo_errorFromXPCData:(id)arg1;
+ (id)_geo_errorFromXPCError:(id)arg1;
+ (id)zilchDecoderErrorForNoSolution;

- (bool)_geo_isXPCInterruptedError;
- (id)_geo_newXPCData;
- (id)zilchDecoderTileLoadingError;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

+ (id)hmfErrorWithCode:(long long)arg1;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmfErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmfErrorWithCode:(long long)arg1 userInfo:(id)arg2;

- (bool)isHMFError;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics

- (id)dictionaryRepresentation;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_errorWithCodableError:(id)arg1;

- (bool)hd_isConstraintViolation;
- (bool)hd_isDatabaseCorruptionError;
- (bool)hd_isFromRequest;
- (bool)hd_isResponseTimeout;
- (unsigned short)hd_messageID;
- (id)hd_messageIDSDeviceIdentifier;
- (id)hd_messageIDSIdentifier;
- (id)hd_messageSent;
- (id)hd_persistentMessage;
- (id)hd_persistentUserInfo;
- (id)hd_underlyingSQLiteError;
- (id)hk_codableError;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_errorWithCode:(long long)arg1;
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2;
+ (id)hf_errorWithCode:(long long)arg1 descriptionFormat:(id)arg2 arguments:(char *)arg3;
+ (id)hf_errorWithCode:(long long)arg1 operation:(id)arg2 options:(id)arg3;
+ (id)hf_internalErrorWithDescription:(id)arg1;
+ (id)hf_synthesizedUnreachableHomeKitAccessoryErrorWithUserInfo:(id)arg1;

- (id)hf_errorWithOperationType:(id)arg1 failedItemName:(id)arg2;
- (id)hf_errorWithOperationType:(id)arg1 options:(id)arg2;
- (bool)hf_isHomeKitNamingError;
- (bool)hf_isHomeKitUnreachableError;
- (bool)hf_isUnreachableError;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)errorWithSQLite3Context:(struct sqlite3 { }*)arg1;
+ (id)errorWithSQLite3Context:(struct sqlite3 { }*)arg1 statement:(const char *)arg2;
+ (id)errorWithSQLite3Statement:(struct sqlite3_stmt { }*)arg1;
+ (id)hmErrorWithCode:(long long)arg1;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1;
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hmPrivateErrorWithCode:(long long)arg1;
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;

- (id)actualCKErrorFromCKErrorPartialFailure:(id)arg1;
- (id)conciseCKError;
- (id)convertToCKError;
- (id)hmErrorFromCKError;
- (bool)isCKError;
- (bool)isHMError;

// Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing

+ (id)hs_cloudErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_cloudLibraryUploadErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)hs_homeSharingErrorWithCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)genericErrorWithFile:(const char *)arg1 function:(const char *)arg2 lineNumber:(long long)arg3;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Frameworks/XCTest.framework/XCTest

+ (id)_xcui_error:(long long)arg1 description:(id)arg2;
+ (id)_xcui_error:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;
+ (id)_xcui_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;

- (bool)xcui_isUITestingError:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)errorArrayFromSerializedErrorArray_im:(id)arg1;
+ (id)serializedErrorArrayFromErrorArray_im:(id)arg1;

- (id)initWithSerializedError_im:(struct NSDictionary { Class x1; }*)arg1;
- (struct NSDictionary { Class x1; }*)serializedError_im;

// Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle

+ (id)errorWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
+ (id)errorWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2;
+ (id)errorWithJoiningError:(int)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (id)errorWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
+ (id)errorWithOSStatus:(int)arg1 userInfo:(id)arg2;

- (id)initWithCoreCryptoStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
- (id)initWithCoreCryptoStatus:(int)arg1 userInfo:(id)arg2;
- (id)initWithJoiningError:(int)arg1 userInfo:(id)arg2;
- (id)initWithOSStatus:(int)arg1 description:(id)arg2 args:(char *)arg3;
- (id)initWithOSStatus:(int)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/MFAAuthentication.framework/MFAAuthentication

+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2;
+ (id)MFAA_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3;

// Image: /System/Library/PrivateFrameworks/MIME.framework/MIME

+ (id)mf_cancelledError;
+ (id)mf_decodeFailedErrorWithUserInfo:(id)arg1;
+ (id)mf_illegalEmailAddressErrorWithAddress:(id)arg1;
+ (void)mf_setDecoder:(id /* block */)arg1 forDomain:(id)arg2;
+ (id)mf_timeoutError;

- (bool)mf_isCancelledError;
- (bool)mf_isTimeoutError;
- (id /* block */)mf_match;
- (id)mf_publicDescription;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (bool)MCContainsErrorDomain:(id)arg1 code:(long long)arg2;
- (id)MCCopyAsPrimaryError;
- (id)MCErrorType;
- (id)MCFindPrimaryError;
- (id)MCUSEnglishDescription;
- (id)MCUSEnglishSuggestion;
- (id)MCVerboseDescription;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (id)MSPJournalDescription;
- (bool)_maps_isCloudKitErrorContainingNotFoundMarkersOnly;
- (bool)_maps_isCloudKitErrorWithCode:(long long)arg1 partialErrorsPolicy:(long long)arg2;
- (bool)_maps_isCloudKitTokenExpirationError;
- (bool)_maps_isFileNotFoundError;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)MPCErrorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
+ (id)MPCErrorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
+ (id)_MPCErrorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescriptionFormat:(id)arg4 arguments:(char *)arg5;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (bool)mf_isInaccessibleAccountCredentialError;
- (bool)mf_isMissingAccountCredentialError;
- (bool)mf_isSMIMEError;
- (bool)mf_isUserCancelledError;
- (id)mf_moreInfo;
- (id)mf_shortDescription;
- (bool)mf_shouldBeReportedToUser;
- (bool)mf_shouldFailDownload;

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)ml_errorWithCode:(unsigned long long)arg1;
+ (id)ml_errorWithCode:(unsigned long long)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

- (id)npk_errorWithDomain:(id)arg1 code:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry

- (id)nr_safeDescription;

// Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation

+ (id)_navigation_errorWithCode:(long long)arg1;
+ (id)_navigation_errorWithCode:(long long)arg1 userInfo:(id)arg2;

- (id)_navigation_errorCodeAsString;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_cancelledError;
+ (id)na_errorWithCode:(unsigned long long)arg1;
+ (id)na_genericError;
+ (id)na_timeoutError;

- (bool)na_isCancelledError;
- (bool)na_isTimeoutError;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (id)descriptionWithIndent:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_belowMinimumVersionError;
+ (id)fc_canaryDownError;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 description:(id)arg2;
+ (id)fc_encryptionErrorWithCode:(unsigned long long)arg1 descriptionFormat:(id)arg2;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)fc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)fc_feedDroppedError;
+ (id)fc_missingAppConfigErrorWithUnderlyingError:(id)arg1;
+ (id)fc_notAvailableError;
+ (id)fc_notCachedError;
+ (id)fc_offlineErrorWithReason:(long long)arg1;
+ (id)fc_requestDroppedErrorForDroppedFeeds:(unsigned long long)arg1 totalFeeds:(unsigned long long)arg2;

- (bool)fc_hasCKErrorWithCodePassingTest:(id /* block */)arg1;
- (bool)fc_hasIdentityLostError;
- (bool)fc_hasIdentityStillSyncingError;
- (bool)fc_isCKErrorWithCode:(long long)arg1;
- (bool)fc_isCKErrorWithCodePassingTest:(id /* block */)arg1;
- (bool)fc_isCKUnknownItemError;
- (bool)fc_isCancellationError;
- (bool)fc_isMissingZoneError;
- (bool)fc_isNetworkUnavailableError;
- (bool)fc_isOfflineError;
- (bool)fc_isOfflineErrorOfflineReason:(long long*)arg1;
- (bool)fc_isOperationThrottledError;
- (bool)fc_isServiceUnavailableError;
- (bool)fc_isTemporaryNetworkOrServerError;
- (bool)fc_shouldRetry;
- (id)fc_underlyingCKErrorUserInfoValueForKey:(id)arg1 forItemID:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation

+ (id)fc_createStateMachineErrorForCode:(long long)arg1 userInfo:(id)arg2;

- (bool)fc_isStateMachineError:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI

+ (id)nu_errorArticleContentTypeUnsuppoted:(id)arg1;
+ (id)nu_errorArticleDownloadFailed:(id)arg1;
+ (id)nu_errorArticleMissingContentURL:(id)arg1;
+ (id)nu_errorArticleMissingHeadline:(id)arg1;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_IOErrorWithCode:(long long)arg1;
+ (id)tsu_IOErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;
+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;

- (int)tsu_IOErrorNumber;
- (id)tsu_errorPreservingAlertTitle;
- (bool)tsu_isCancelError;
- (bool)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync

- (id)psy_safeDescription;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)pk_paymentErrorWithLocalizedDescription;

// Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit

+ (id)pr_errorWithCode:(long long)arg1;

- (bool)pr_isInPersonaDomain;
- (bool)pr_isNetworkAvailabilityError;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

+ (id)phaErrorForInvalidParameterNamed:(id)arg1 localizedDescription:(id)arg2;
+ (id)phaErrorForInvalidParameterValue:(id)arg1 named:(id)arg2;
+ (id)phaErrorForNilParameterNamed:(id)arg1;
+ (id)phaErrorWithCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)phaErrorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)phaNotImplementedErrorForSelector:(SEL)arg1;
+ (id)phaObjectNotFoundErrorForAssetLocalIdentifier:(id)arg1;
+ (id)phaObjectNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaResourceNotFoundErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithLocalizedDescription:(id)arg1;
+ (id)phaUnexpectedConditionErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision

+ (id)errorForPhotoVisionCancelledOperation;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 localizedDescription:(id)arg2 underlyingError:(id)arg3;
+ (id)errorForPhotoVisionErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)errorForPhotoVisionInvalidNilParameterNamed:(id)arg1;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 integerValue:(long long)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 realValue:(double)arg2;
+ (id)errorForPhotoVisionInvalidParameterNamed:(id)arg1 value:(id)arg2;
+ (id)errorForPhotoVisionInvalidParameterWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1;
+ (id)errorForPhotoVisionStorageErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionStorageErrorWithUserInfo:(id)arg1;
+ (id)errorForPhotoVisionUnexpectedCondition:(id)arg1;
+ (id)errorForPhotoVisionUnimplementedFunction;
+ (id)errorForPhotoVisionVisionKitErrorWithLocalizedDescription:(id)arg1 underlyingError:(id)arg2;
+ (id)errorForPhotoVisionVisionKitErrorWithUserInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)_px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 localizedDescription:(id)arg4 debugDescription:(id)arg5;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 debugDescription:(id)arg3;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 debugDescription:(id)arg4;
+ (id)px_errorWithDomain:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3 localizedDescription:(id)arg4;
+ (id)px_genericErrorWithDebugDescription:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

+ (id)PSUICellularErrorWithCode:(long long)arg1;
+ (id)PSUICellularSanitizedError:(id)arg1;
+ (bool)_canControlLTEVoiceOptionsSeparately;
+ (id)_techFromBundle;
+ (id)_techStandardName;
+ (id)_titleAndMessageDictForError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2;
+ (id)rc_errorWithCode:(long long)arg1 description:(id)arg2 additionalUserInfo:(id)arg3;
+ (id)rc_missingConfigErrorWithUnderlyingError:(id)arg1;
+ (id)rc_notAvailableError;
+ (id)rc_notCachedError;
+ (id)rc_offlineErrorWithReason:(long long)arg1;

- (bool)rc_isCancellationError;
- (bool)rc_isNetworkUnavailableError;
- (bool)rc_isOfflineError;
- (bool)rc_isOfflineErrorOfflineReason:(long long*)arg1;
- (bool)rc_isOperationThrottledError;
- (bool)rc_isServiceUnavailableError;
- (bool)rc_shouldRetry;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;

- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
- (bool)safari_isClientSideNetworkError;
- (bool)safari_isSQLiteCorruptionError;
- (bool)safari_isSQLiteError;
- (id)safari_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing

- (id)ssb_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void)_safari_enumerateCloudKitErrorsWithBlock:(id /* block */)arg1;
- (bool)safari_errorOrAnyPartialErrorHasCloudKitErrorCode:(long long)arg1;
- (bool)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport

+ (id)errorWithCode:(unsigned long long)arg1 description:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo

+ (long long)errorCodeForUnderlyingErrorDomain:(id)arg1;
+ (id)videoErrorWithErrorCode:(long long)arg1;
+ (id)videoErrorWithUnderlyingError:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks

+ (id)st_startWorkoutErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI

- (bool)isSiriUISnippetPluginError;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

+ (id)errorWithDescription:(id)arg1;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 localizedDescription:(id)arg3 userInfo:(id)arg4;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (bool)sbf_isFileNotFoundError;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (bool)sck_hasUnderlyingErrorCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

+ (id)errorWithTSKWarning:(id)arg1;
+ (id)tsp_errorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;

- (bool)tsp_isRecoverable;

// Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility

+ (id)tsuErrorWithCode:(long long)arg1;
+ (id)tsu_IOErrorWithCode:(long long)arg1;
+ (id)tsu_IOReadErrorWithErrno:(int)arg1;
+ (id)tsu_IOWriteErrorWithErrno:(int)arg1;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 underlyingError:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;

- (bool)tsu_isCancelError;
- (bool)tsu_isOutOfSpaceError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary

+ (id)tl_errorWithDomain:(id)arg1 description:(id)arg2;

- (id)tl_nonRedundantDescription;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

+ (id)errorWithDomain:(id)arg1 code:(int)arg2 localizedDescription:(id)arg3;
+ (id)errorWithStreamDomain:(long long)arg1 code:(int)arg2 localizedDescription:(id)arg3;

- (bool)isConnectivityError;
- (bool)isEqualToError:(id)arg1;
- (bool)isExpiredPasswordError;
- (bool)isInvalidSubscriberError;
- (bool)isNewPasswordError;
- (bool)isPasswordMismatchError;
- (bool)isSecurityError;
- (bool)isServerError;
- (bool)isStreamDomain:(long long)arg1 error:(int)arg2;
- (bool)shouldPresentErrorForTaskType:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)_vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_partialPersistenceErrorWithPartialErrors:(id)arg1;
+ (id)vc_persistenceErrorWithUnderlyingError:(id)arg1;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 extraUserInfo:(id)arg2 reason:(id)arg3;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 reason:(id)arg2;
+ (id)vc_voiceShortcutErrorWithCode:(long long)arg1 underlyingError:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (id)wf_errorWithCode:(unsigned long long)arg1;
+ (id)wf_errorWithCode:(unsigned long long)arg1 encapsulatedError:(id)arg2 userInfo:(id)arg3;
+ (id)wf_errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)wb_privacyPreservingDescription;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (void)_registerWebKitErrors;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

// Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI

+ (id)_webUI_WebUIErrorWithCode:(unsigned long long)arg1 URL:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore

+ (id)_wl_encodableArrayFromArray:(id)arg1;
+ (id)_wl_encodableDictionaryFromDictionary:(id)arg1;
+ (id)_wl_encodableObjectFromObject:(id)arg1;
+ (id)_wl_encodableSetFromSet:(id)arg1;
+ (bool)_wl_objectIsKindOfNonCollectionPlistClass:(id)arg1;
+ (id)wl_encodableErrorSupportedClasses;

- (bool)wk_representsTransientConnectivityIssueForAttempt:(unsigned long long)arg1;
- (id)wl_encodableError;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

+ (id)associationErrorWithCode:(int)arg1;
+ (id)associationErrorWithCode:(int)arg1 requiresPassword:(bool)arg2;
+ (id)associationErrorWithReason:(long long)arg1;
+ (id)associationErrorWithReason:(long long)arg1 userInfo:(id)arg2;
+ (id)scanErrorWithCode:(long long)arg1;
+ (id)scanErrorWithReason:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap

+ (id)_xct_error:(long long)arg1 description:(id)arg2;
+ (id)_xct_error:(long long)arg1 description:(id)arg2 userInfo:(id)arg3;

// Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

- (id)errorBySettingFatalError:(bool)arg1;
- (bool)isEqual:(id)arg1 compareUserInfo:(bool)arg2;
- (bool)isFatalError;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsa_errorWithCode:(long long)arg1;
+ (id)tsp_ensureReadErrorWithError:(id)arg1;
+ (id)tsp_ensureSaveErrorWithError:(id)arg1;
+ (id)tsp_errorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1 userInfo:(id)arg2 isRecoverable:(bool)arg3;
+ (id)tsp_errorWithError:(id)arg1 hints:(id)arg2;
+ (id)tsp_readCorruptZipOfPackageErrorWithUserInfo:(id)arg1;
+ (id)tsp_readCorruptedDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_readPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_saveDocumentErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownReadErrorWithUserInfo:(id)arg1;
+ (id)tsp_unknownWriteErrorWithUserInfo:(id)arg1;
+ (id)tsp_unsupportedVersionErrorWithUserInfo:(id)arg1;
+ (id)tsp_userInfoWithUserInfo:(id)arg1 additionalUserInfo:(id)arg2;
+ (id)tsp_writePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
+ (id)tsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)tsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)tsu_errorWithWarning:(id)arg1;
+ (id)tsu_fileReadCorruptedFileErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileReadPOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileReadUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_fileWritePOSIXErrorWithNumber:(int)arg1 userInfo:(id)arg2;
+ (id)tsu_fileWriteUnknownErrorWithUserInfo:(id)arg1;
+ (id)tsu_userInfoWithErrorType:(long long)arg1 userInfo:(id)arg2;

- (bool)tsa_isCollaborationError;
- (id)tsp_hints;
- (id)tsp_hintsDescription;
- (bool)tsp_isCorruptZipOfPackageError;
- (bool)tsp_isCorruptedError;
- (bool)tsp_isDocumentTooNewError;
- (bool)tsp_isPasswordInputError;
- (bool)tsp_isReadError;
- (bool)tsp_isRecoverable;
- (bool)tsp_isTSPError;
- (bool)tsp_isUnsupportedVersionError;
- (bool)tsp_isWriteError;
- (void)tsu_enumerateErrorUsingBlock:(id /* block */)arg1;
- (id)tsu_errorPreservingAlertTitle;
- (id)tsu_errorPreservingCancel;
- (bool)tsu_isCancelError;
- (bool)tsu_isCorruptedError;
- (bool)tsu_isErrorPassingTest:(id /* block */)arg1;
- (bool)tsu_isNoPermissionError;
- (bool)tsu_isNoSuchFileError;
- (bool)tsu_isOutOfSpaceError;
- (bool)tsu_isReadError;
- (bool)tsu_isWriteError;
- (id)tsu_localizedAlertMessage;
- (id)tsu_localizedAlertTitle;

// Image: /usr/lib/libprequelite.dylib

+ (id)errorForDB:(struct sqlite3 { }*)arg1;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 SQL:(id)arg2;
+ (id)errorForDB:(struct sqlite3 { }*)arg1 stmt:(struct sqlite3_stmt { }*)arg2;
+ (id)errorWithSqliteCode:(int)arg1 andMessage:(id)arg2;

- (long long)extendedSqliteCode;
- (bool)isSqliteErrorCode:(long long)arg1;
- (id)sqliteStatement;

@end
