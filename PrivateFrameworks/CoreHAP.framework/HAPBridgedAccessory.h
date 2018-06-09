/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBridgedAccessory : HAPAccessory <HAPAccessoryServerInternalDelegate> {
    HAPCharacteristic * _reachabilityCharacteristic;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HAPCharacteristic *reachabilityCharacteristic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)__isReachable;
- (bool)__parseBridgeService:(id)arg1;
- (bool)__parseServices;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (id)accessoryServerDidRequestCharacteristicsToRegisterForNotifications:(id)arg1;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3;
- (bool)isPrimary;
- (bool)mergeObject:(id)arg1;
- (bool)mergeWithAccessory:(id)arg1;
- (id)reachabilityCharacteristic;
- (void)setReachabilityCharacteristic:(id)arg1;
- (void)setReachable:(bool)arg1;
- (id)shortDescription;
- (bool)shouldMergeObject:(id)arg1;

@end
