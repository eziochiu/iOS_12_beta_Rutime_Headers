/* made by EzioChiu.
 */

@protocol _DRTopicInterestQuerying

@required

+ (NSPredicate *)predicateForTopicInteractionsAfter:(NSDate *)arg1;
+ (NSPredicate *)predicateForTopicsWithPrefix:(NSString *)arg1;

- (_DRTopicInterestSummary *)computeSummaryWithFilter:(NSPredicate *)arg1;
- (void)enumerateTopicCountsWithFilter:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 10: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, unsigned long long, unsigned long long, bool*, void*

@end
