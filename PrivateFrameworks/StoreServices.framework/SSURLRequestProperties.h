/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLRequestProperties : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, SSXPCCoding> {
    NSDictionary * _additionalMetrics;
    long long  _allowedRetryCount;
    bool  _allowsBootstrapCellularData;
    unsigned long long  _cachePolicy;
    NSString * _clientAuditBundleIdentifier;
    NSData * _clientAuditTokenData;
    NSString * _clientIdentifier;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _expectedContentLength;
    NSData * _httpBody;
    NSInputStream * _httpBodyStream;
    NSDictionary * _httpHeaders;
    NSString * _httpMethod;
    bool  _isITunesStoreRequest;
    long long  _kbsyncType;
    bool  _largeDownload;
    long long  _machineDataStyle;
    unsigned long long  _networkServiceType;
    NSDictionary * _requestParameters;
    bool  _requiresCellularDataNetwork;
    BOOL  _requiresExtendedValidationCertificates;
    bool  _requiresExternal;
    bool  _requiresHTTPS;
    bool  _shouldDecodeResponse;
    bool  _shouldDisableCellular;
    bool  _shouldDisableCellularFallback;
    bool  _shouldDisableReversePush;
    bool  _shouldProcessProtocol;
    bool  _shouldSendSecureToken;
    bool  _shouldSetCookies;
    double  _timeoutInterval;
    NSString * _urlBagKey;
    long long  _urlBagType;
    id /* block */  _urlBagURLBlock;
    NSArray * _urls;
    NSArray * _userAgentComponents;
}

@property (readonly, copy) NSData *HTTPBody;
@property (readonly, retain) NSInputStream *HTTPBodyStream;
@property (readonly, copy) NSDictionary *HTTPHeaders;
@property (readonly, copy) NSString *HTTPMethod;
@property (getter=isITunesStoreRequest, readonly) bool ITunesStoreRequest;
@property (readonly) long long KBSyncType;
@property (readonly, retain) NSURL *URL;
@property (readonly, copy) NSString *URLBagKey;
@property (readonly) long long URLBagType;
@property (readonly, copy) id /* block */ URLBagURLBlock;
@property (readonly, copy) NSArray *URLs;
@property (readonly, copy) NSDictionary *additionalMetrics;
@property (readonly) long long allowedRetryCount;
@property (readonly) bool allowsBootstrapCellularData;
@property (readonly) unsigned long long cachePolicy;
@property (readonly) bool canBeResolved;
@property (readonly, copy) NSString *clientAuditBundleIdentifier;
@property (readonly, copy) NSData *clientAuditTokenData;
@property (readonly) NSString *clientBundleIdentifier;
@property (readonly, copy) NSString *clientIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) long long expectedContentLength;
@property (readonly) unsigned long long hash;
@property (getter=isLargeDownload, readonly) bool largeDownload;
@property (readonly) long long machineDataStyle;
@property (readonly) unsigned long long networkServiceType;
@property (readonly, copy) NSDictionary *requestParameters;
@property (readonly) bool requiresCellularDataNetwork;
@property (readonly) bool requiresExtendedValidationCertificates;
@property (readonly) bool requiresExternal;
@property (readonly) bool requiresHTTPS;
@property (readonly) bool shouldAddKBSyncData;
@property (readonly) bool shouldDecodeResponse;
@property (readonly) bool shouldDisableCellular;
@property (readonly) bool shouldDisableCellularFallback;
@property (readonly) bool shouldDisableReversePush;
@property (readonly) bool shouldProcessProtocol;
@property (readonly) bool shouldSendSecureToken;
@property (readonly) bool shouldSetCookies;
@property (readonly) Class superclass;
@property (readonly) double timeoutInterval;
@property (readonly, copy) NSArray *userAgentComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPHeaders;
- (id)HTTPMethod;
- (long long)KBSyncType;
- (id)URL;
- (id)URLBagKey;
- (long long)URLBagType;
- (id /* block */)URLBagURLBlock;
- (id)URLs;
- (id)_initCommon;
- (id)additionalMetrics;
- (long long)allowedRetryCount;
- (bool)allowsBootstrapCellularData;
- (unsigned long long)cachePolicy;
- (bool)canBeResolved;
- (id)clientAuditBundleIdentifier;
- (id)clientAuditTokenData;
- (id)clientBundleIdentifier;
- (id)clientIdentifier;
- (id)copyURLRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isITunesStoreRequest;
- (bool)isLargeDownload;
- (long long)machineDataStyle;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)networkServiceType;
- (id)requestParameters;
- (bool)requiresCellularDataNetwork;
- (bool)requiresExtendedValidationCertificates;
- (bool)requiresExternal;
- (bool)requiresHTTPS;
- (bool)shouldAddKBSyncData;
- (bool)shouldDecodeResponse;
- (bool)shouldDisableCellular;
- (bool)shouldDisableCellularFallback;
- (bool)shouldDisableReversePush;
- (bool)shouldProcessProtocol;
- (bool)shouldSendSecureToken;
- (bool)shouldSetCookies;
- (double)timeoutInterval;
- (id)userAgentComponents;

@end
