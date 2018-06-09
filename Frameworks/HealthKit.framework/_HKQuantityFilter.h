/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKQuantityFilter : _HKFilter {
    HKQuantity * _comparisonQuantity;
    HKQuantityType * _dataType;
    unsigned long long  _operatorType;
}

@property (nonatomic, readonly) HKQuantity *comparisonQuantity;
@property (nonatomic, readonly) HKQuantityType *dataType;
@property (nonatomic, readonly) unsigned long long operatorType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 comparisonQuantity:(id)arg2 dataType:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (id)comparisonQuantity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
