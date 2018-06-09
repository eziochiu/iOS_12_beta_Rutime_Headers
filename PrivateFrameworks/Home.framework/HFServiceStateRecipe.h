/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceStateRecipe : NSObject <NAIdentifiable, NSCopying> {
    NSSet * _characteristicRecipes;
    <HFServiceTreeMatching> * _predicate;
}

@property (nonatomic, readonly) NSSet *characteristicRecipes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFServiceTreeMatching> *predicate;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)characteristicRecipes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPredicate:(id)arg1 characteristicRecipes:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)matchResultForServices:(id)arg1;
- (id)predicate;

@end
