/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKStringFilter : _HKFilter {
    unsigned long long  _operatorType;
    NSString * _value;
}

@property (nonatomic, readonly) unsigned long long operatorType;
@property (nonatomic, readonly, copy) NSString *value;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_acceptedKeyPath;
+ (bool)_acceptsDataType:(id)arg1;
+ (bool)_supportsOperatorType:(unsigned long long)arg1;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperatorType:(unsigned long long)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;
- (id)value;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;
- (id)property;

@end
