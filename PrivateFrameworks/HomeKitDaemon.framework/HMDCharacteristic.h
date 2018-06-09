/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristic : HMFObject <HMDBulletinIdentifiers, HMFDumpState, NSSecureCoding> {
    HMDHAPAccessory * _accessory;
    NSData * _authorizationData;
    bool  _broadcastNotificationEnabled;
    NSNumber * _characteristicInstanceID;
    HMDCharacteristicMetadata * _characteristicMetadata;
    long long  _characteristicProperties;
    NSString * _characteristicType;
    NSSet * _hapCharacteristicTuples;
    id  _lastKnownValue;
    NSDate * _lastKnownValueUpdateTime;
    NSDate * _notificationEnabledTime;
    bool  _notificationRegisteredWithRemoteGateway;
    NSMutableSet * _notificationRegistrations;
    HMDService * _service;
    NSNumber * _stateNumber;
}

@property (nonatomic, readonly) HMDHAPAccessory *accessory;
@property (nonatomic, copy) NSData *authorizationData;
@property (nonatomic) bool broadcastNotificationEnabled;
@property (nonatomic, readonly) NSDictionary *bulletinContext;
@property (nonatomic, retain) NSNumber *characteristicInstanceID;
@property (nonatomic, retain) HMDCharacteristicMetadata *characteristicMetadata;
@property (nonatomic) long long characteristicProperties;
@property (nonatomic, retain) NSString *characteristicType;
@property (nonatomic, readonly, copy) NSString *contextID;
@property (nonatomic, readonly, copy) NSUUID *contextSPIUniqueIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *hapCharacteristicTuples;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *instanceID;
@property (nonatomic, retain) id lastKnownValue;
@property (nonatomic, retain) NSDate *lastKnownValueUpdateTime;
@property (nonatomic, readonly) HMDCharacteristicMetadata *metadata;
@property (nonatomic, retain) NSDate *notificationEnabledTime;
@property (nonatomic) bool notificationRegisteredWithRemoteGateway;
@property (nonatomic, retain) NSMutableSet *notificationRegistrations;
@property (nonatomic, readonly) long long properties;
@property (nonatomic, readonly) NSString *serializedIdentifier;
@property (nonatomic, readonly) HMDService *service;
@property (setter=setStateNumber:, nonatomic, copy) NSNumber *stateNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) id value;

+ (bool)supportsSecureCoding;
+ (bool)value:(id)arg1 differentThan:(id)arg2;

- (void).cxx_destruct;
- (id)accessory;
- (id)authorizationData;
- (bool)broadcastNotificationEnabled;
- (struct NSDictionary { Class x1; }*)bulletinContext;
- (id)characteristicForHAPAccessory:(id)arg1;
- (id)characteristicInstanceID;
- (id)characteristicMetadata;
- (long long)characteristicProperties;
- (id)characteristicType;
- (id)characteristicTypeDescription;
- (void)configureWithCharacteristic:(id)arg1;
- (id)contextID;
- (id)contextSPIUniqueIdentifier;
- (bool)deregisterNotificationForClientIdentifier:(id)arg1;
- (id)description;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)getCharacteristicDictionary;
- (id)hapCharacteristicTupleWithIdentifier:(id)arg1 linkType:(long long)arg2;
- (id)hapCharacteristicTuples;
- (id)initWithCharacteristic:(id)arg1 service:(id)arg2 accessory:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)instanceID;
- (bool)isClientNotificationEnabled;
- (bool)isNonClientNotificationEnabled;
- (bool)isNonHomeNotificationsEnabled;
- (bool)isNotificationEnabled;
- (bool)isNotificationEnabledForClientIdentifier:(id)arg1;
- (bool)isNotificationEnabledForClientIdentifierPrefix:(id)arg1;
- (bool)isValueUpdatedFromHAPCharacteristic:(id)arg1;
- (id)lastKnownValue;
- (id)lastKnownValueUpdateTime;
- (id)metadata;
- (id)notificationEnabledTime;
- (bool)notificationRegisteredWithRemoteGateway;
- (id)notificationRegistrations;
- (long long)properties;
- (id)serializedIdentifier;
- (id)service;
- (void)setAuthorizationData:(id)arg1;
- (void)setBroadcastNotificationEnabled:(bool)arg1;
- (void)setCharacteristicInstanceID:(id)arg1;
- (void)setCharacteristicMetadata:(id)arg1;
- (void)setCharacteristicProperties:(long long)arg1;
- (void)setCharacteristicType:(id)arg1;
- (void)setHapCharacteristicTuples:(id)arg1;
- (void)setLastKnownValue:(id)arg1;
- (void)setLastKnownValueUpdateTime:(id)arg1;
- (void)setNotificationEnabled:(bool)arg1 forClientIdentifier:(id)arg2;
- (void)setNotificationEnabledTime:(id)arg1;
- (void)setNotificationRegisteredWithRemoteGateway:(bool)arg1;
- (void)setNotificationRegistrations:(id)arg1;
- (void)setStateNumber:(id)arg1;
- (id)shortTypeDescription;
- (id)stateNumber;
- (bool)supportsNotification;
- (bool)supportsRead;
- (id)type;
- (void)unconfigure;
- (void)unconfigureForServerIdentifier:(id)arg1 linkType:(long long)arg2;
- (void)updateLastKnownValue;
- (void)updateService:(id)arg1 accessory:(id)arg2;
- (void)updateValue:(id)arg1 updatedTime:(id)arg2 stateNumber:(id)arg3;
- (bool)updateWithDictionary:(id)arg1;
- (id)validateValue:(id)arg1 outValue:(id*)arg2;
- (id)validateValueForNotify:(id)arg1 outValue:(id*)arg2;
- (id)validateValueForWrite:(id)arg1 outValue:(id*)arg2;
- (id)value;

@end
