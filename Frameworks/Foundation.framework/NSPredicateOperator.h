/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPredicateOperator : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _modifier;
    unsigned long long  _operatorType;
}

+ (SEL)_getSelectorForType:(unsigned long long)arg1;
+ (id)_getSymbolForType:(unsigned long long)arg1;
+ (id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;
+ (id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void)_setModifier:(unsigned long long)arg1;
- (void)_setOptions:(unsigned long long)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)modifier;
- (unsigned long long)operatorType;
- (unsigned long long)options;
- (bool)performOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (SEL)selector;
- (id)symbol;

@end
