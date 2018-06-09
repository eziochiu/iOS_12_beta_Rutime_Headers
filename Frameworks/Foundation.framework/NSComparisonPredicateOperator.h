/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSComparisonPredicateOperator : NSPredicateOperator {
    unsigned long long  _options;
    unsigned long long  _variant;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3;
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 variant:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)options;
- (bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (id)predicateFormat;
- (unsigned long long)variant;

// Image: /System/Library/Frameworks/CoreData.framework/CoreData

- (id)minimalFormInContext:(id)arg1 ofPredicate:(id)arg2;

@end
