/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFProgrammableSwitchAccessoryItem : HFItem <HFCharacteristicWriteActionBuilderFactory, HFServiceLikeBuilderCreating, HFServiceLikeItem> {
    HMAccessory * _accessory;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (bool)actionsMayRequireDeviceUnlock;
- (bool)containsActionableCharacteristics;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)homeKitObject;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (void)setAccessory:(id)arg1;
- (void)setValueSource:(id)arg1;
- (bool)shouldReduceOptionItemsForNotifyingCharacteristics;
- (id)valueSource;

@end
