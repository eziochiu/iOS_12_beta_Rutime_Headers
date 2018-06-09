/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching> {
    NSArray * _childServicePredicates;
    <HFServiceTreeMatching> * _rootServicePredicate;
}

@property (nonatomic, readonly, copy) NSArray *childServicePredicates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFServiceTreeMatching> *rootServicePredicate;
@property (readonly) Class superclass;

+ (id)na_identity;

- (void).cxx_destruct;
- (id)childServicePredicates;
- (id)description;
- (unsigned long long)hash;
- (id)initWithRootServicePredicate:(id)arg1 childServicePredicates:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)matchingServicesForRootService:(id)arg1;
- (id)rootServicePredicate;

@end
