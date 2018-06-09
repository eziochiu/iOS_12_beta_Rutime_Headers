/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKActivityCacheIndexFilter : _HKFilter {
    long long  _cacheIndex;
    unsigned long long  _operatorType;
}

@property (nonatomic, readonly) long long cacheIndex;
@property (nonatomic, readonly) unsigned long long operatorType;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithOperatorType:(unsigned long long)arg1 activityCacheIndex:(long long)arg2;
+ (bool)supportsSecureCoding;

- (bool)acceptsDataObject:(id)arg1;
- (long long)cacheIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operatorType;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
