/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest {
    NSString * _containerIdentifier;
    CKDContainerInfo * _containerInfo;
    bool  _requireUserIDs;
}

@property (nonatomic) NSString *containerIdentifier;
@property (nonatomic, copy) CKDContainerInfo *containerInfo;
@property (nonatomic) bool requireUserIDs;

- (void).cxx_destruct;
- (bool)allowsAnonymousAccount;
- (bool)allowsAuthedAccount;
- (id)containerIdentifier;
- (id)containerInfo;
- (bool)hasRequestBody;
- (id)initWithContainerIdentifier:(id)arg1;
- (long long)partitionType;
- (void)requestDidParseJSONObject:(id)arg1;
- (bool)requireUserIDs;
- (bool)requiresConfiguration;
- (bool)requiresDeviceID;
- (bool)requiresSignature;
- (long long)serverType;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerInfo:(id)arg1;
- (void)setRequireUserIDs:(bool)arg1;
- (id)url;
- (bool)usesCloudKitAuthToken;
- (bool)usesiCloudAuthToken;

@end
