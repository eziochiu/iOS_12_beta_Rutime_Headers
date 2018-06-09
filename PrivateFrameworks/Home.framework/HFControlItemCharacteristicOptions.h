/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFControlItemCharacteristicOptions : NSObject <NAIdentifiable> {
    NSDictionary * _characteristicTypesByUsage;
}

@property (nonatomic, readonly, copy) NSSet *allCharacteristicTypes;
@property (nonatomic, readonly, copy) NSSet *allRequiredCharacteristicTypes;
@property (nonatomic, readonly, copy) NSDictionary *characteristicTypesByUsage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)optionsWithReadWriteCharacteristicTypes:(id)arg1;

- (void).cxx_destruct;
- (id)_characteristicTypesForUsagesPassingTest:(id /* block */)arg1;
- (id)_optionsByReducingWithOptions:(id)arg1 reducer:(id /* block */)arg2;
- (id)allCharacteristicTypes;
- (id)allRequiredCharacteristicTypes;
- (id)characteristicTypesByUsage;
- (id)characteristicTypesForUsage:(unsigned long long)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCharacteristicTypesByUsage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)optionsByAddingCharacteristicOptions:(id)arg1;
- (id)optionsByAddingCharacteristicTypes:(id)arg1 forUsage:(unsigned long long)arg2;
- (id)optionsByIntersectingWithOptions:(id)arg1;

@end
