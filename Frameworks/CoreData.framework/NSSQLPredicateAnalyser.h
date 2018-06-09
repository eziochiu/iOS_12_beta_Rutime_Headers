/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLPredicateAnalyser : NSObject <NSPredicateVisitor> {
    NSMutableArray * _allModifierPredicates;
    bool  _compoundPredicate;
    NSMutableArray * _keys;
    NSMutableArray * _setExpressions;
    NSMutableArray * _subqueries;
}

- (id)allModifierPredicates;
- (void)dealloc;
- (id)init;
- (id)keypaths;
- (id)setExpressions;
- (id)subqueries;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
