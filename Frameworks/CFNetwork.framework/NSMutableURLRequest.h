/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSData *HTTPBody;
@property (retain) NSInputStream *HTTPBodyStream;
@property (copy) NSString *HTTPMethod;
@property bool HTTPShouldHandleCookies;
@property bool HTTPShouldUsePipelining;
@property (copy) NSURL *URL;
@property (copy) NSDictionary *allHTTPHeaderFields;
@property bool allowsCellularAccess;
@property unsigned long long cachePolicy;
@property (copy) NSURL *mainDocumentURL;
@property unsigned long long networkServiceType;
@property double timeoutInterval;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

- (void)_setIgnoreHSTS:(bool)arg1;
- (void)_setPayloadTransmissionTimeout:(double)arg1;
- (void)_setPreventHSTSStorage:(bool)arg1;
- (void)_setRequiresShortConnectionTimeout:(bool)arg1;
- (void)_setStartTimeoutDate:(id)arg1;
- (void)_setTimeWindowDelay:(double)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)requestPriority;
- (void)setAllHTTPHeaderFields:(id)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setBoundInterfaceIdentifier:(id)arg1;
- (void)setCachePolicy:(unsigned long long)arg1;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)setExpectedWorkload:(unsigned long long)arg1;
- (void)setHTTPBody:(id)arg1;
- (void)setHTTPBodyStream:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPMethod:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPShouldHandleCookies:(bool)arg1;
- (void)setHTTPShouldUsePipelining:(bool)arg1;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setMainDocumentURL:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setRequestPriority:(unsigned long long)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setURL:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;

// Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension

- (void)bindToHotspotHelperCommand:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (bool)aa_addAuthTokenOrBasicAuthHeaderWithAccount:(id)arg1 preferUsingPassword:(bool)arg2;
- (void)aa_addBasicAuthPasswordWithAccount:(id)arg1;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(bool)arg2;
- (void)aa_addContentTypeHeaders:(id)arg1;
- (void)aa_addDeviceIDHeader;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1 sendEmptyValues:(bool)arg2;
- (bool)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;
- (bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (bool)aa_addGrandslamAuthorizationHeaderWithAltDSID:(id)arg1 grandslamToken:(id)arg2;
- (bool)aa_addGrandslamAuthorizationheaderWithAltDSID:(id)arg1 heartbeatToken:(id)arg2;
- (void)aa_addLocationSharingAllowedHeader;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;
- (void)aa_addMultiUserDeviceHeaderIfEnabled;
- (void)aa_addTokenAuthHeaderWithAccount:(id)arg1;
- (void)aa_addiTunesHeadersWithAccount:(id)arg1;
- (void)aa_setBodyWithParameters:(id)arg1;
- (id)aa_setXMLBodyWithParameters:(id)arg1;
- (void)aa_setXMLBodyWithParameters:(id)arg1 signingSession:(id)arg2;
- (void)aa_signBodyData:(id)arg1 withSigningSession:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

- (void)ams_addAcceptLanguageHeader;
- (void)ams_addAccountCookiesForAccount:(id)arg1;
- (void)ams_addAnisetteHeadersForAccount:(id)arg1 type:(long long)arg2;
- (void)ams_addAuthKitHeaders;
- (void)ams_addCacheBusterParameter;
- (void)ams_addCachePolicyHeader;
- (void)ams_addClientIdentifierHeaderForClient:(id)arg1;
- (void)ams_addClientVersions;
- (void)ams_addConnectionTypeHeader;
- (void)ams_addContentLengthHeaderForData:(id)arg1;
- (void)ams_addContentTypeHeaderForEncoding:(long long)arg1;
- (void)ams_addGUIDParameterUsingContract:(id)arg1;
- (void)ams_addIdentifierHeadersForAccount:(id)arg1;
- (void)ams_addIssuingProcessHeader;
- (void)ams_addMescalHeaderWithType:(long long)arg1 bagContract:(id)arg2;
- (void)ams_addParameters:(id)arg1 encoding:(long long)arg2 compressBody:(bool)arg3 error:(id*)arg4;
- (void)ams_addPrimaryiCloudIdentifierHeader;
- (void)ams_addRequestingProcessWithClient:(id)arg1;
- (void)ams_addStoreFrontHeaderFromAccount:(id)arg1 bagContract:(id)arg2;
- (void)ams_addTimezoneOffsetHeader;
- (void)ams_addUserAgentHeaderFromClient:(id)arg1 additionalComponents:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_anisetteHeadersWithCompanionData:(id)arg1;
+ (id)ak_anisetteHeadersWithData:(id)arg1;
+ (id)ak_clientInfoHeader;
+ (id)ak_clientTimeHeader;
+ (id)ak_deviceUDIDHeader;
+ (id)ak_localeHeader;
+ (id)ak_proxiedAnisetteHeadersWithData:(id)arg1;
+ (id)ak_timeZoneHeader;

- (void)_setAuthorizationHeaderWithToken:(id)arg1 altDSID:(id)arg2 key:(id)arg3;
- (void)ak_addAbsintheHeaderWithValue:(id)arg1;
- (void)ak_addAcceptedSLAHeaderWithVersion:(unsigned long long)arg1;
- (void)ak_addAnisetteHeaders;
- (void)ak_addAppleIDHeaderWithValue:(id)arg1;
- (void)ak_addAppleIDUserModeHeaderWithValue:(unsigned long long)arg1;
- (void)ak_addAuthorizationHeaderWithHeartbeatToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addAuthorizationHeaderWithServiceToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addCFUHeader:(id)arg1;
- (void)ak_addCircleStatusHeader;
- (void)ak_addClientApp:(id)arg1;
- (void)ak_addClientInfoHeader;
- (void)ak_addClientTimeHeader;
- (void)ak_addCompanionClientInfoHeader:(id)arg1;
- (void)ak_addContextHeaderForServiceType:(long long)arg1;
- (void)ak_addContinutationKeyHeader:(id)arg1;
- (void)ak_addCountryHeader;
- (void)ak_addDeviceMLBHeader;
- (void)ak_addDeviceModel;
- (void)ak_addDeviceROMHeader;
- (void)ak_addDeviceSerialNumberHeader;
- (void)ak_addDeviceUDIDHeader;
- (void)ak_addEphemeralAuthHeader;
- (void)ak_addICSCIntentHeader;
- (void)ak_addICSCRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addInternalBuildHeader;
- (void)ak_addLocalUserHasAppleIDLoginHeader;
- (void)ak_addLocalUserUUIDHashHeader;
- (void)ak_addLocaleHeader;
- (void)ak_addLoggedInServicesHeaderForServices:(id)arg1;
- (void)ak_addPRKRequestHeader;
- (void)ak_addPasswordResetKeyHeader:(id)arg1;
- (void)ak_addPhoneNumberCertificateHeaderWithValue:(id)arg1;
- (void)ak_addPhoneNumberHeader;
- (void)ak_addProxiedAnisetteHeaders:(id)arg1;
- (void)ak_addProxiedClientInfoHeader:(id)arg1;
- (void)ak_addProxiedDeviceUDIDHeader:(id)arg1;
- (void)ak_addProxyApp:(id)arg1;
- (void)ak_addRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addShortLivedTokenHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;
- (void)ak_addShowWarranty;
- (void)ak_addTimeZoneHeader;
- (void)ak_setBodyWithParameters:(id)arg1;
- (void)ak_setJSONBodyWithParameters:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CaptiveNetwork.framework/CaptiveNetwork

- (void)bindToCommand:(struct __CNPluginCommand { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __CFDictionary {} *x2; unsigned int x3; }*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal

- (void)cdp_addAuthHeaderWithContext:(id)arg1;
- (void)cdp_addClientInfoHeader;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;
+ (int)hashForPlayerID:(id)arg1;

- (void)setBuildVersion:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setGameDescriptor:(id)arg1;
- (void)setInternal:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;
- (void)setProcessName:(id)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setSAPSignature:(id)arg1;
- (void)setSAPversion:(id)arg1;
- (void)setStoreMode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)_web_setHTTPContentType:(id)arg1;
- (void)_web_setHTTPReferrer:(id)arg1;
- (void)_web_setHTTPUserAgent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices

- (void)setAdvertisingIdentifier:(id)arg1;
- (void)setMaximumRequestCount:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

- (void)ic_appendHTTPCookieWithName:(id)arg1 value:(id)arg2;
- (void)ic_appendHTTPCookies:(id)arg1;

@end
