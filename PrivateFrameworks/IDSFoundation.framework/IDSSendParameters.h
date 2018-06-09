/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSendParameters : NSObject <NSCopying> {
    IDSOutgoingMessageCheckpointTrace * _checkpointTrace;
    NSMutableDictionary * _params;
}

@property (nonatomic, retain) NSData *accessToken;
@property (nonatomic, retain) NSString *accountUUID;
@property (nonatomic) bool activityContinuation;
@property (nonatomic) bool allowCloudDelivery;
@property (nonatomic, retain) NSString *alternateCallbackID;
@property (nonatomic) bool alwaysSkipSelf;
@property (nonatomic, retain) NSArray *bulkedPayload;
@property (nonatomic) bool bypassDuet;
@property (nonatomic) bool bypassSizeCheck;
@property (nonatomic) bool bypassStorage;
@property (nonatomic, retain) IDSOutgoingMessageCheckpointTrace *checkpointTrace;
@property (nonatomic, retain) NSNumber *command;
@property (nonatomic) bool compressPayload;
@property (nonatomic) bool compressed;
@property (nonatomic) bool daemonDeathResend;
@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSData *dataToEncrypt;
@property (nonatomic, retain) NSDictionary *deliveryStatusContext;
@property (nonatomic, retain) IDSDestination *destinations;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool disableAliasValidation;
@property (nonatomic) bool disallowRefresh;
@property (nonatomic, retain) NSArray *duetIdentifiersOverride;
@property (nonatomic) bool encryptPayload;
@property (nonatomic) bool enforceRemoteTimeouts;
@property (nonatomic) bool expectsPeerResponse;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic) bool fakeMessage;
@property (nonatomic, retain) NSArray *finalDestinations;
@property (nonatomic) bool fireAndForget;
@property (nonatomic) bool forceEncryptionOff;
@property (nonatomic, retain) NSString *fromID;
@property (nonatomic, retain) NSData *groupData;
@property (nonatomic) bool homeKitPayload;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *interestingRegistrationProperties;
@property (nonatomic) bool isProxiedOutgoingMessage;
@property (nonatomic) bool liveMessageDelivery;
@property (nonatomic) bool localDelivery;
@property (nonatomic, retain) NSString *localDestinationDeviceUUID;
@property (nonatomic, retain) NSString *mainAccountUUID;
@property (nonatomic, retain) NSDictionary *message;
@property (nonatomic, retain) NSNumber *messageType;
@property (nonatomic, retain) NSData *messageUUID;
@property (nonatomic, retain) NSString *metricReportIdentifier;
@property (nonatomic) bool nonCloudWaking;
@property (nonatomic) bool nonWaking;
@property (nonatomic, retain) NSString *originalfromID;
@property (nonatomic, retain) NSString *peerResponseIdentifier;
@property (nonatomic) long long priority;
@property (nonatomic, retain) NSDictionary *protobuf;
@property (nonatomic, retain) NSString *queueOneIdentifier;
@property (nonatomic, retain) NSArray *requireAllRegistrationProperties;
@property (nonatomic) bool requireBluetooth;
@property (nonatomic, retain) NSArray *requireLackOfRegistrationProperties;
@property (nonatomic) bool requireLocalWiFi;
@property (nonatomic, retain) NSDictionary *resourceMetadata;
@property (nonatomic, retain) NSString *resourcePath;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic, retain) NSString *subService;
@property (nonatomic, retain) NSString *subServiceAccountUUID;
@property (nonatomic) double timeout;
@property (nonatomic) bool useDictAsTopLevel;
@property (nonatomic) bool wantsAppAck;
@property (nonatomic) bool wantsDeliveryStatus;
@property (nonatomic) bool wantsProgress;
@property (nonatomic) bool wantsResponse;

- (void).cxx_destruct;
- (id)accessToken;
- (id)accountUUID;
- (bool)activityContinuation;
- (bool)allowCloudDelivery;
- (id)alternateCallbackID;
- (bool)alwaysSkipSelf;
- (id)bulkedPayload;
- (bool)bypassDuet;
- (bool)bypassSizeCheck;
- (bool)bypassStorage;
- (id)checkpointTrace;
- (id)command;
- (bool)compressPayload;
- (bool)compressed;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)daemonDeathResend;
- (id)data;
- (id)dataToEncrypt;
- (id)deliveryStatusContext;
- (id)destinations;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationIncludingTrace:(bool)arg1;
- (bool)disableAliasValidation;
- (bool)disallowRefresh;
- (id)duetIdentifiersOverride;
- (void)encodeWithCoder:(id)arg1;
- (bool)encryptPayload;
- (bool)enforceRemoteTimeouts;
- (bool)expectsPeerResponse;
- (id)expirationDate;
- (bool)fakeMessage;
- (id)finalDestinations;
- (bool)fireAndForget;
- (bool)forceEncryptionOff;
- (id)fromID;
- (id)groupData;
- (bool)homeKitPayload;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)interestingRegistrationProperties;
- (bool)isProxiedOutgoingMessage;
- (bool)liveMessageDelivery;
- (bool)localDelivery;
- (id)localDestinationDeviceUUID;
- (id)mainAccountUUID;
- (id)message;
- (id)messageType;
- (id)messageUUID;
- (id)metricReportIdentifier;
- (bool)nonCloudWaking;
- (bool)nonWaking;
- (id)objectForKey:(id)arg1;
- (id)originalfromID;
- (id)peerResponseIdentifier;
- (long long)priority;
- (id)protobuf;
- (id)queueOneIdentifier;
- (id)requireAllRegistrationProperties;
- (bool)requireBluetooth;
- (id)requireLackOfRegistrationProperties;
- (bool)requireLocalWiFi;
- (id)resourceMetadata;
- (id)resourcePath;
- (id)sessionID;
- (void)setAccessToken:(id)arg1;
- (void)setAccountUUID:(id)arg1;
- (void)setActivityContinuation:(bool)arg1;
- (void)setAllowCloudDelivery:(bool)arg1;
- (void)setAlternateCallbackID:(id)arg1;
- (void)setAlwaysSkipSelf:(bool)arg1;
- (void)setBulkedPayload:(id)arg1;
- (void)setBypassDuet:(bool)arg1;
- (void)setBypassSizeCheck:(bool)arg1;
- (void)setBypassStorage:(bool)arg1;
- (void)setCheckpointTrace:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setCompressPayload:(bool)arg1;
- (void)setCompressed:(bool)arg1;
- (void)setDaemonDeathResend:(bool)arg1;
- (void)setData:(id)arg1;
- (void)setDataToEncrypt:(id)arg1;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setDisableAliasValidation:(bool)arg1;
- (void)setDisallowRefresh:(bool)arg1;
- (void)setDuetIdentifiersOverride:(id)arg1;
- (void)setEncryptPayload:(bool)arg1;
- (void)setEnforceRemoteTimeouts:(bool)arg1;
- (void)setExpectsPeerResponse:(bool)arg1;
- (void)setFakeMessage:(bool)arg1;
- (void)setFinalDestinations:(id)arg1;
- (void)setFireAndForget:(bool)arg1;
- (void)setForceEncryptionOff:(bool)arg1;
- (void)setFromID:(id)arg1;
- (void)setGroupData:(id)arg1;
- (void)setHomeKitPayload:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterestingRegistrationProperties:(id)arg1;
- (void)setIsProxiedOutgoingMessage:(bool)arg1;
- (void)setLiveMessageDelivery:(bool)arg1;
- (void)setLocalDelivery:(bool)arg1;
- (void)setLocalDestinationDeviceUUID:(id)arg1;
- (void)setMainAccountUUID:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageType:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setMetricReportIdentifier:(id)arg1;
- (void)setNonCloudWaking:(bool)arg1;
- (void)setNonWaking:(bool)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setOriginalfromID:(id)arg1;
- (void)setPeerResponseIdentifier:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setProtobuf:(id)arg1;
- (void)setQueueOneIdentifier:(id)arg1;
- (void)setRequireAllRegistrationProperties:(id)arg1;
- (void)setRequireBluetooth:(bool)arg1;
- (void)setRequireLackOfRegistrationProperties:(id)arg1;
- (void)setRequireLocalWiFi:(bool)arg1;
- (void)setResourceMetadata:(id)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)setSubService:(id)arg1;
- (void)setSubServiceAccountUUID:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUseDictAsTopLevel:(bool)arg1;
- (void)setWantsAppAck:(bool)arg1;
- (void)setWantsDeliveryStatus:(bool)arg1;
- (void)setWantsProgress:(bool)arg1;
- (void)setWantsResponse:(bool)arg1;
- (id)subService;
- (id)subServiceAccountUUID;
- (double)timeout;
- (bool)useDictAsTopLevel;
- (bool)wantsAppAck;
- (bool)wantsDeliveryStatus;
- (bool)wantsProgress;
- (bool)wantsResponse;

@end
