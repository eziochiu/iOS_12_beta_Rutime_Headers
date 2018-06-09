/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeRemoteNotification : HMFObject <HMFLogging> {
    NSString * _accessoryUUID;
    NSString * _characteristicInstanceID;
    NSString * _serviceInstanceID;
    NSString * _updateIdentifier;
    id  _value;
}

@property (nonatomic, readonly) NSString *accessoryUUID;
@property (nonatomic, readonly) NSString *characteristicInstanceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *serviceInstanceID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *updateIdentifier;
@property (nonatomic, readonly) id value;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)characteristicInstanceID;
- (id)description;
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 updateIdentifier:(id)arg4 value:(id)arg5;
- (id)logIdentifier;
- (bool)matchesAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3;
- (bool)matchesCharacterisitic:(id)arg1;
- (id)serviceInstanceID;
- (id)updateIdentifier;
- (id)value;

@end
