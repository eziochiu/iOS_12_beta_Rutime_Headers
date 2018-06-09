/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFControlItem : HFItem <NAIdentifiable, NSCopying> {
    HFControlItemCharacteristicOptions * _characteristicOptions;
    NSDictionary * _displayResults;
    <HFAggregatedCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HFControlItemCharacteristicOptions *characteristicOptions;
@property (nonatomic, readonly) NSSet *characteristicTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *displayResults;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long sortPriority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFAggregatedCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)na_identity;
+ (Class)valueClass;

- (void).cxx_destruct;
- (id)_characteristicValuesByTypeForBatchReadResponse:(id)arg1;
- (id)_descriptionWithCharacteristicOptions:(bool)arg1 includeResults:(bool)arg2;
- (id)_standardResultsForResultValue:(id)arg1 characteristicValuesByType:(id)arg2;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)canCopyWithCharacteristicOptions:(id)arg1;
- (id)characteristicOptions;
- (id)characteristicTypes;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayResults;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 characteristicTypes:(id)arg2 displayResults:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)normalizedCharacteristicValuesForValues:(id)arg1;
- (id)normalizedValueForCharacteristicValue:(id)arg1 ofType:(id)arg2;
- (id)normalizedValueForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (id)resultsForBatchReadResponse:(id)arg1;
- (id)servicePredicateForCharacteristicType:(id)arg1 withUsage:(unsigned long long)arg2;
- (long long)sortPriority;
- (bool)supportsItemRepresentingServices:(id)arg1;
- (id)valueForCharacteristicType:(id)arg1 inBatchReadResponse:(id)arg2;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueSource;
- (id)writeValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id /* block */)_hf_controlItemComparator;
+ (id)_hu_prioritizedViewControllerClasses;
+ (id)_hu_quickControlViewControllerForControlItemWithPreferredPurposes:(unsigned long long)arg1 inControlItems:(id)arg2 configuration:(id)arg3;
+ (id)_hu_quickControlViewControllerOfClass:(Class)arg1 controlItems:(id)arg2 configuration:(id)arg3;
+ (id)hu_preferredQuickControlViewControllerGroupForControlItems:(id)arg1 configuration:(id)arg2;
+ (id)hu_preferredTogglableControlItemInControlItems:(id)arg1;

@end
