/* made by EzioChiu.
 */

@protocol NSPredicatedStoreRequest <NSObject>

@required

- (NSEntityDescription *)entity;
- (bool)includesSubentities;
- (NSPredicate *)predicate;

@end
