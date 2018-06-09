/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCustomPredicateOperator : NSPredicateOperator {
    SEL  _selector;
}

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (SEL)selector;
- (id)symbol;

@end
