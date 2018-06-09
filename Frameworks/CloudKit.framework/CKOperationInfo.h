/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationInfo : NSObject <NSCopying, NSSecureCoding> {
    CKOperationMMCSRequestOptions * _MMCSRequestOptions;
    unsigned int  _clientSDKVersion;
    NSString * _deviceIdentifier;
    CKOperationGroup * _group;
    bool  _isLongLived;
    bool  _isOutstandingOperation;
    NSString * _name;
    NSString * _operationClass;
    NSString * _operationID;
    id  _parentOperation;
    NSString * _parentSectionID;
    CKOperationConfiguration * _perOpConfiguration;
    CKOperationConfiguration * _resolvedConfiguration;
    CKContainerSetupInfo * _setupInfo;
    bool  _wantsRequestStatistics;
}

@property (nonatomic, retain) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic, readonly) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic, readonly) bool allowsBackgroundNetworking;
@property (nonatomic, readonly) bool allowsCellularAccess;
@property (nonatomic, readonly) NSString *authPromptReason;
@property (nonatomic, readonly) bool automaticallyRetryNetworkFailures;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, readonly) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic, retain) CKOperationGroup *group;
@property (nonatomic) bool isLongLived;
@property (nonatomic) bool isOutstandingOperation;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *operationClass;
@property (nonatomic, retain) NSString *operationID;
@property (nonatomic) id parentOperation;
@property (nonatomic, retain) NSString *parentSectionID;
@property (nonatomic, retain) CKOperationConfiguration *perOpConfiguration;
@property (nonatomic, readonly) bool preferAnonymousRequests;
@property (nonatomic, readonly) long long qualityOfService;
@property (nonatomic, readonly) CKOperationConfiguration *resolvedConfiguration;
@property (nonatomic, retain) CKContainerSetupInfo *setupInfo;
@property (nonatomic, readonly) bool shouldSkipZonePCSUpdate;
@property (nonatomic, readonly) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly) double timeoutIntervalForRequest;
@property (nonatomic, readonly) double timeoutIntervalForResource;
@property (nonatomic) bool wantsRequestStatistics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MMCSRequestOptions;
- (id)additionalRequestHTTPHeaders;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (id)authPromptReason;
- (bool)automaticallyRetryNetworkFailures;
- (unsigned int)clientSDKVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdentifier;
- (unsigned long long)discretionaryNetworkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLongLived;
- (bool)isOutstandingOperation;
- (id)name;
- (id)operationClass;
- (id)operationID;
- (id)parentOperation;
- (id)parentSectionID;
- (id)perOpConfiguration;
- (bool)preferAnonymousRequests;
- (long long)qualityOfService;
- (id)resolvedConfiguration;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsLongLived:(bool)arg1;
- (void)setIsOutstandingOperation:(bool)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOperationClass:(id)arg1;
- (void)setOperationID:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setParentSectionID:(id)arg1;
- (void)setPerOpConfiguration:(id)arg1;
- (void)setSetupInfo:(id)arg1;
- (void)setWantsRequestStatistics:(bool)arg1;
- (id)setupInfo;
- (bool)shouldSkipZonePCSUpdate;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (void)takeValuesFrom:(id)arg1;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;
- (bool)wantsRequestStatistics;

@end
