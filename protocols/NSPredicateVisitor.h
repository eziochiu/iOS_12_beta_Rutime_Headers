/* made by EzioChiu.
 */

@protocol NSPredicateVisitor

@required

- (void)visitPredicate:(NSPredicate *)arg1;
- (void)visitPredicateExpression:(NSExpression *)arg1;
- (void)visitPredicateOperator:(NSPredicateOperator *)arg1;

@end
