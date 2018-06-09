/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFIncrementalStateControlItem : HFControlItem <HFTogglableControlItem> {
    NSString * _incrementalCharacteristicType;
    HFControlItem<HFPrimaryStateWriter> * _primaryStateControlItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *incrementalCharacteristicType;
@property (nonatomic, readonly) HFControlItem<HFPrimaryStateWriter> *primaryStateControlItem;
@property (nonatomic, readonly) NSNumber *stepValue;
@property (readonly) Class superclass;

+ (Class)valueClass;

- (void).cxx_destruct;
- (bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)incrementalCharacteristicType;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 incrementalAndPrimaryCharacteristicType:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 primaryStateControlItem:(id)arg2 incrementalCharacteristicType:(id)arg3 displayResults:(id)arg4;
- (id)primaryStateControlItem;
- (id)stepValue;
- (id)togglePrimaryAndIncrementalState;
- (id)toggleValue;
- (id)updateWithOptions:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writeValue:(id)arg1;

@end
