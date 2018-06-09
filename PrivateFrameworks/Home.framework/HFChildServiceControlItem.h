/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFChildServiceControlItem : HFControlItem {
    HFChildServiceFilter * _childServiceFilter;
    HMService * _parentService;
}

@property (nonatomic, readonly) HFChildServiceFilter *childServiceFilter;
@property (nonatomic, readonly) HMService *parentService;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)characteristicValuesForValue:(id)arg1;
- (id)childServiceFilter;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithBaseValueSource:(id)arg1 parentService:(id)arg2 childServiceFilter:(id)arg3 displayResults:(id)arg4;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)normalizedValueForValue:(id)arg1;
- (id)parentService;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicValues:(id)arg1;

@end
