/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _NSChildContextPredicateRemapper : NSObject {
    NSManagedObjectContext * _context;
}

- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1;
- (id)replacementValueForValue:(id)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;

@end
