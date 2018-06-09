/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMCharacteristicWriteAction : HMAction <HFPrettyDescription, HFStateDumpSerializable, HMObjectMerge, NSSecureCoding> {
    HMCharacteristic * _characteristic;
    id  _targetValue;
}

@property (nonatomic, retain) HMCharacteristic *characteristic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id targetValue;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)_actionWithInfo:(id)arg1 home:(id)arg2;
+ (id)_lookupActionWithInfo:(id)arg1 inArray:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configure:(id)arg1 actionSet:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (bool)_handleUpdates:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)_serializeForAdd;
- (void)_updateTargetValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)characteristic;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setCharacteristic:(id)arg1;
- (void)setTargetValue:(id)arg1;
- (id)targetValue;
- (void)updateTargetValue:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;

@end
