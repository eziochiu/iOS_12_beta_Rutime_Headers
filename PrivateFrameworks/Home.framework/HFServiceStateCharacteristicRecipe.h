/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceStateCharacteristicRecipe : NSObject <NAIdentifiable, NSCopying> {
    NSString * _characteristicType;
    bool  _required;
    <HFServiceTreeMatching> * _servicePredicate;
}

@property (nonatomic, readonly, copy) NSString *characteristicType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isRequired, nonatomic, readonly) bool required;
@property (nonatomic, readonly) <HFServiceTreeMatching> *servicePredicate;
@property (readonly) Class superclass;

+ (id)na_identity;
+ (id)recipeForRootServiceCharacteristicType:(id)arg1 required:(bool)arg2;
+ (id)recipesForRootServiceCharacteristicTypes:(id)arg1 required:(bool)arg2;

- (void).cxx_destruct;
- (id)characteristicType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCharacteristicType:(id)arg1 servicePredicate:(id)arg2 required:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isRequired;
- (id)matchResultForServices:(id)arg1;
- (id)servicePredicate;

@end
