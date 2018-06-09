/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSEqualityPredicateOperator : NSPredicateOperator {
    bool  _negate;
    unsigned long long  _options;
}

+ (bool)supportsSecureCoding;

- (void)_setOptions:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(bool)arg3;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(bool)arg3 options:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isNegation;
- (unsigned long long)options;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (void)setNegation:(bool)arg1;

@end
