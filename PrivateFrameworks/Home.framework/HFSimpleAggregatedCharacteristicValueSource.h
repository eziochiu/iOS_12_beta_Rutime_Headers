/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSimpleAggregatedCharacteristicValueSource : NSObject <HFAggregatedCharacteristicValueSource> {
    NSSet * _allServices;
    NSSet * _characteristics;
    NSDictionary * _characteristicsByType;
    HFServiceDescriptor * _primaryServiceDescriptor;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly, copy) NSSet *allServices;
@property (nonatomic, readonly, copy) NSSet *characteristics;
@property (nonatomic, readonly, copy) NSDictionary *characteristicsByType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFServiceDescriptor *primaryServiceDescriptor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)allCharacteristicsForCharacteristicType:(id)arg1;
- (id)allServices;
- (void)beginTransactionWithReason:(id)arg1 readPolicy:(id)arg2 logger:(id)arg3;
- (id)characteristics;
- (id)characteristicsByType;
- (void)commitTransactionWithReason:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithValueSource:(id)arg1 characteristics:(id)arg2 primaryServiceDescriptor:(id)arg3;
- (id)initWithValueSource:(id)arg1 services:(id)arg2 primaryServiceDescriptor:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metadataForCharacteristicType:(id)arg1;
- (id)primaryServiceDescriptor;
- (id)readValuesForCharacteristicTypes:(id)arg1;
- (id)readValuesForServiceStateRecipe:(id)arg1;
- (id)valueSource;
- (id)writeValuesForCharacteristicRecipes:(id)arg1;
- (id)writeValuesForCharacteristicTypes:(id)arg1;

@end
