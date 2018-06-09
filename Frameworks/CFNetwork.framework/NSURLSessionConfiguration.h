/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  __allowsWCA;
}

@property (copy) NSDictionary *HTTPAdditionalHeaders;
@property unsigned long long HTTPCookieAcceptPolicy;
@property (retain) NSHTTPCookieStorage *HTTPCookieStorage;
@property long long HTTPMaximumConnectionsPerHost;
@property bool HTTPShouldSetCookies;
@property bool HTTPShouldUsePipelining;
@property int TLSMaximumSupportedProtocol;
@property int TLSMinimumSupportedProtocol;
@property (retain) NSURLCache *URLCache;
@property (retain) NSURLCredentialStorage *URLCredentialStorage;
@property (copy) NSString *_CTDataConnectionServiceType;
@property unsigned long long _TCPAdaptiveReadTimeout;
@property unsigned long long _TCPAdaptiveWriteTimeout;
@property bool _allowTCPIOConnectionStreamTask;
@property bool _allowsExpensiveAccess;
@property bool _allowsIndefiniteConnections;
@property bool _allowsMultipathTCP;
@property bool _allowsPowerNapScheduling;
@property bool _allowsResponseMonitoringDuringBodyTranmission;
@property bool _allowsRetryForBackgroundDataTasks;
@property bool _allowsTCPFastOpen;
@property bool _allowsTLSSessionResumption;
@property bool _allowsTLSSessionTickets;
@property bool _allowsWCA;
@property (copy) <NSURLSessionAppleIDContext> *_appleIDContext;
@property (copy) NSData *_atsContext;
@property (copy) NSSet *_authenticatorStatusCodes;
@property bool _clientIsNotExplicitlyDiscretionary;
@property bool _collectsTimingData;
@property (copy) NSString *_companionAppBundleIdentifier;
@property double _connectionCacheCellPurgeTimeout;
@property double _connectionCachePurgeTimeout;
@property (copy) NSString *_connectionPoolName;
@property (copy) NSArray *_contentDispHeadEncFallback;
@property unsigned long long _customReadBufferSize;
@property double _customReadBufferTimeout;
@property (copy) NSURL *_directoryForDownloadedFiles;
@property bool _disablesOutOfProcessDirectWiFiUsage;
@property bool _disablesUseOfProxySession;
@property bool _disallowsSPDY;
@property bool _duetPreauthorized;
@property long long _expiredDNSBehavior;
@property unsigned long long _forcedNetworkServiceType;
@property bool _forcesNewConnections;
@property bool _ignoreDidReceiveResponseDisposition;
@property bool _infersDiscretionaryFromOriginatingClient;
@property (copy) NSString *_ledBellyServiceIdentifier;
@property double _longLivedConnectionCacheCellPurgeTimeout;
@property double _longLivedConnectionCachePurgeTimeout;
@property bool _onBehalfOfPairedDevice;
@property (copy) NSDictionary *_overriddenDelegateOptions;
@property bool _overridesBackgroundSessionAutoRedirect;
@property bool _performsEVCertCheck;
@property (retain) NSHTTPCookieStorage *_phskip_cookieStorage;
@property bool _phskip_cookieStorageSet;
@property (retain) NSURLCredentialStorage *_phskip_credStorage;
@property bool _phskip_credStorageSet;
@property (retain) struct _CFHSTSPolicy { }*_phskip_hstsStorage;
@property bool _phskip_hstsStorageSet;
@property (retain) NSURLCache *_phskip_urlCache;
@property bool _phskip_urlCacheSet;
@property bool _prefersInfraWiFi;
@property bool _preventsDirectWiFiAccess;
@property bool _preventsIdleSleep;
@property bool _preventsIdleSleepOnceConnected;
@property bool _preventsSystemHTTPProxyAuthentication;
@property (getter=_isProxySession) bool _proxySession;
@property bool _requiresClientToOpenFiles;
@property bool _requiresPowerPluggedIn;
@property bool _requiresSecureHTTPSProxyConnection;
@property bool _requiresSustainedDataDelivery;
@property bool _respectsAllowsCellularAccessForDiscretionaryTasks;
@property bool _sessionSendsLaunchOnDemandEvents;
@property bool _shouldPreserveBackgroundSessionDisposition;
@property bool _shouldSkipPreferredClientCertificateLookup;
@property (copy) NSDictionary *_socketStreamProperties;
@property (copy) NSData *_sourceApplicationAuditTokenData;
@property (copy) NSString *_sourceApplicationBundleIdentifier;
@property (copy) NSString *_sourceApplicationSecondaryIdentifier;
@property bool _supportsAVAssetDownloads;
@property (copy) NSSet *_suppressedAutoAddedHTTPHeaders;
@property (copy) NSString *_tcpConnectionPoolName;
@property long long _timingDataOptions;
@property (copy) NSString *_tlsCachePrefix;
@property (copy) NSString *_tlsTrustPinningPolicyName;
@property bool _usePipeliningHeuristics;
@property (copy) NSString *_watchAppBundleIdentifier;
@property (copy) NSString *_watchExtensionBundleIdentifier;
@property bool allowsCellularAccess;
@property (getter=isBackgroundSession) bool backgroundSession;
@property (copy) NSDictionary *connectionProxyDictionary;
@property (getter=isDiscretionary) bool discretionary;
@property NSString *disposition;
@property (copy) NSString *identifier;
@property long long minimumFastLanePriority;
@property long long multipathServiceType;
@property unsigned long long networkServiceType;
@property long long numFastLanes;
@property long long numPriorityLevels;
@property long long pipeliningHighWatermark;
@property long long pipeliningLowWatermark;
@property (copy) NSArray *protocolClasses;
@property unsigned long long requestCachePolicy;
@property bool sessionSendsLaunchEvents;
@property (copy) NSString *sharedContainerIdentifier;
@property bool shouldUseExtendedBackgroundIdleMode;
@property bool skip_download_unlink;
@property double timeoutIntervalForRequest;
@property double timeoutIntervalForResource;
@property bool waitsForConnectivity;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)_AVBackgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)_defaultProtocolClasses;
+ (id)_proxySessionConfigurationWithIdentifier:(id)arg1;
+ (id)backgroundSessionConfiguration:(id)arg1;
+ (id)backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)defaultSessionConfiguration;
+ (id)ephemeralSessionConfiguration;
+ (id)sessionConfigurationForSharedSession;
+ (bool)supportsSecureCoding;

- (bool)_allowsWCA;
- (void*)_copyAttribute:(struct __CFString { }*)arg1;
- (struct OpaqueCFHTTPCookieStorage { }*)_copyCFCookieStorage;
- (struct _CFHSTSPolicy { }*)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct HTTPConnectionCacheLimits { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })getConnectionCacheLimits;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisposition:(id)arg1;
- (void)set_allowsWCA:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

- (void)aa_registerProtocolClass:(Class)arg1;
- (void)aa_unregisterProtocolClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)geo_backgroundSessionConfigurationWithIdentifier:(id)arg1;
+ (id)geo_defaultSessionConfiguration;
+ (id)geo_ephemeralSessionConfiguration;

- (void)applyNSURLConnectionProperties:(id)arg1;
- (void)geo_configureWithRequest:(id)arg1;
- (bool)geo_hasApplicationAttribution:(id)arg1;
- (bool)geo_isCompatibleWithRequest:(id)arg1;
- (void)geo_setApplicationAttribution:(id)arg1;
- (void)geo_setRequiredProperties;

// Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer

- (void)applyNSURLConnectionProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI

+ (id)vs_defaultSessionConfigurationForSourceAppWithAuditToken:(id)arg1;

@end
