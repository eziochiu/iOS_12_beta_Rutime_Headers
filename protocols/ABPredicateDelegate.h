/* made by EzioChiu.
 */

@protocol ABPredicateDelegate <NSObject>

@required

- (bool)predicateShouldContinue:(NSPredicate *)arg1;
- (bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void*)arg2;

@optional

- (bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void*)arg2 metadata:(NSDictionary *)arg3;
- (bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void*)arg2 metadata:(NSDictionary *)arg3 moreComing:(bool)arg4;
- (bool)predicateShouldContinue:(NSPredicate *)arg1 afterFindingRecord:(void*)arg2 moreComing:(bool)arg3;

@end
