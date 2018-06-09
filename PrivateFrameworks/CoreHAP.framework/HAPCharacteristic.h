/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPCharacteristic : HMFObject <HMFMerging> {
    HAPCharacteristicMetadata * _accessoryMetadata;
    bool  _eventNotificationsEnabled;
    NSNumber * _instanceID;
    HAPCharacteristicMetadata * _metadata;
    unsigned long long  _properties;
    HAPService * _service;
    bool  _shouldValidateValueAfterReading;
    NSNumber * _stateNumber;
    NSString * _type;
    id  _value;
    NSDate * _valueUpdatedTime;
}

@property (nonatomic, readonly) HAPCharacteristicMetadata *accessoryMetadata;
@property (setter=setCBCharacteristic:, nonatomic, retain) CBCharacteristic *cbCharacteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool eventNotificationsEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *instanceID;
@property (nonatomic, copy) HAPCharacteristicMetadata *metadata;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) HAPService *service;
@property (nonatomic) bool shouldValidateValueAfterReading;
@property (nonatomic, readonly) NSNumber *stateNumber;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAdditionalAuthorizationData;
@property (nonatomic, copy) NSString *type;
@property (setter=setValue:, nonatomic, copy) id value;
@property (nonatomic, retain) NSDate *valueUpdatedTime;

- (void).cxx_destruct;
- (id)_generateValidMetadata:(id)arg1;
- (void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2;
- (id)accessoryMetadata;
- (id)cbCharacteristic;
- (id)description;
- (bool)eventNotificationsEnabled;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 stateNumber:(id)arg4 properties:(unsigned long long)arg5 eventNotificationsEnabled:(bool)arg6 metadata:(id)arg7;
- (id)instanceID;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCharacteristic:(id)arg1;
- (bool)mergeObject:(id)arg1;
- (id)metadata;
- (unsigned long long)properties;
- (id)propertiesDescription;
- (id)service;
- (void)setCBCharacteristic:(id)arg1;
- (void)setEventNotificationsEnabled:(bool)arg1;
- (void)setInstanceID:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setShouldValidateValueAfterReading:(bool)arg1;
- (void)setStateNumber:(id)arg1;
- (void)setType:(id)arg1;
- (void)setValue:(id)arg1;
- (void)setValueUpdatedTime:(id)arg1;
- (bool)shouldMergeObject:(id)arg1;
- (bool)shouldValidateValueAfterReading;
- (id)stateNumber;
- (bool)supportsAdditionalAuthorizationData;
- (id)type;
- (id)validateValue:(id)arg1 outValue:(id*)arg2;
- (id)value;
- (id)valueUpdatedTime;

@end
