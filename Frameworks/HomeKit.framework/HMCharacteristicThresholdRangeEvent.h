/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicThresholdRangeEvent : HMEvent <HFCharacteristicLikeEvent, HFPrettyDescription, HFStateDumpSerializable, HMCharacteristicEventProtocol, NSCopying, NSMutableCopying, NSSecureCoding> {
    HMCharacteristic * _characteristic;
    HMNumberRange * _thresholdRange;
}

@property (nonatomic, readonly) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id hf_representativeTriggerValue;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) HMNumberRange *thresholdRange;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)isSupportedForHome:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (id)_serializeForAdd;
- (void)_updateThresholdRange:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)characteristic;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 thresholdRange:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 characteristic:(id)arg2 thresholdRange:(id)arg3;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setThresholdRange:(id)arg1;
- (id)thresholdRange;
- (void)updateThresholdRange:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_representativeTriggerValue;
- (id)hf_serializedStateDumpRepresentation;
- (bool)hf_wouldFireForValue:(id)arg1;

@end
