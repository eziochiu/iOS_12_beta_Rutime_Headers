/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSRequestOptions : NSObject {
    CKOperationMMCSRequestOptions * _MMCSRequestOptions;
    bool  _allowsCellularAccess;
    bool  _allowsPowerNapScheduling;
    NSString * _applicationBundleID;
    NSString * _applicationSecondaryID;
    NSData * _authPutResponse;
    NSDictionary * _authPutResponseHeaders;
    bool  _automaticallyRetryNetworkFailures;
    long long  _containerEnvironment;
    NSString * _containerID;
    long long  _databaseScope;
    NSString * _deviceHardwareID;
    unsigned long long  _discretionaryNetworkBehavior;
    unsigned long long  _networkServiceType;
    long long  _qualityOfService;
    NSString * _topmostParentOperationGroupID;
    NSString * _topmostParentOperationID;
    NSArray * _zoneNames;
}

@property (nonatomic, retain) CKOperationMMCSRequestOptions *MMCSRequestOptions;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) bool allowsPowerNapScheduling;
@property (nonatomic, retain) NSString *applicationBundleID;
@property (nonatomic, retain) NSString *applicationSecondaryID;
@property (nonatomic, retain) NSData *authPutResponse;
@property (nonatomic, retain) NSDictionary *authPutResponseHeaders;
@property (nonatomic) bool automaticallyRetryNetworkFailures;
@property (nonatomic) long long containerEnvironment;
@property (nonatomic, retain) NSString *containerID;
@property (nonatomic) long long databaseScope;
@property (nonatomic, retain) NSString *deviceHardwareID;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) unsigned long long networkServiceType;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) NSString *topmostParentOperationGroupID;
@property (nonatomic, retain) NSString *topmostParentOperationID;
@property (nonatomic, retain) NSArray *zoneNames;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)MMCSOptions;
- (id)MMCSRequestOptions;
- (bool)allowsCellularAccess;
- (bool)allowsPowerNapScheduling;
- (id)applicationBundleID;
- (id)applicationSecondaryID;
- (id)authPutResponse;
- (id)authPutResponseHeaders;
- (bool)automaticallyRetryNetworkFailures;
- (long long)containerEnvironment;
- (id)containerID;
- (long long)databaseScope;
- (id)description;
- (id)deviceHardwareID;
- (unsigned long long)discretionaryNetworkBehavior;
- (id)initWithOperation:(id)arg1;
- (unsigned long long)networkServiceType;
- (long long)qualityOfService;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAllowsPowerNapScheduling:(bool)arg1;
- (void)setApplicationBundleID:(id)arg1;
- (void)setApplicationSecondaryID:(id)arg1;
- (void)setAuthPutResponse:(id)arg1;
- (void)setAuthPutResponseHeaders:(id)arg1;
- (void)setAutomaticallyRetryNetworkFailures:(bool)arg1;
- (void)setContainerEnvironment:(long long)arg1;
- (void)setContainerID:(id)arg1;
- (void)setDatabaseScope:(long long)arg1;
- (void)setDeviceHardwareID:(id)arg1;
- (void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1;
- (void)setMMCSRequestOptions:(id)arg1;
- (void)setNetworkServiceType:(unsigned long long)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTopmostParentOperationGroupID:(id)arg1;
- (void)setTopmostParentOperationID:(id)arg1;
- (void)setZoneNames:(id)arg1;
- (id)topmostParentOperationGroupID;
- (id)topmostParentOperationID;
- (bool)usesBackgroundSession;
- (id)zoneNames;

@end
