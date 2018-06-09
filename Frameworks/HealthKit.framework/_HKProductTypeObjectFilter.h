/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKProductTypeObjectFilter : _HKFilter {
    unsigned long long  _operatorType;
    NSString * _productType;
}

@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly) NSString *productType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_filterMatchingProductType:(id)arg1 operator:(unsigned long long)arg2;
+ (bool)_supportsOperatorType:(unsigned long long)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptsDataObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;
- (id)productType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
