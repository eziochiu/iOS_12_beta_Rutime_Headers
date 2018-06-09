/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSSubqueryExpression : NSExpression {
    NSExpression * _collection;
    NSPredicate * _subpredicate;
    NSExpression * _variableExpression;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (bool)_shouldUseParensWithDescription;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (void)allowEvaluation;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3;
- (id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)predicate;
- (id)predicateFormat;
- (id)variable;
- (id)variableExpression;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1;

@end
