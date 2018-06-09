/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFTargetModeControlItem : HFMultiStateControlItem <HFTogglableControlItem> {
    HFPowerStateControlItem * _primaryPowerStateControlItem;
    NSString * _targetModeCharacteristicType;
    HFMultiStateValueSet * _targetModeValueSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFPowerStateControlItem *primaryPowerStateControlItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *targetModeCharacteristicType;
@property (nonatomic, readonly) HFMultiStateValueSet *targetModeValueSet;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicType:(id)arg2 possibleValueSet:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 targetModeCharacteristicType:(id)arg2 targetModeValueSet:(id)arg3 primaryPowerStateControlItem:(id)arg4 displayResults:(id)arg5;
- (id)primaryPowerStateControlItem;
- (id)targetModeCharacteristicType;
- (id)targetModeValueSet;
- (id)toggleValue;
- (id)updateWithOptions:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;

@end
