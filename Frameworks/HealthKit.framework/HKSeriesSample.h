/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKSeriesSample : HKSample {
    long long  _count;
    bool  _frozen;
}

@property (readonly) unsigned long long count;
@property (getter=_isFrozen, setter=_setFrozen:, nonatomic) bool frozen;

+ (bool)supportsSecureCoding;

- (bool)_isFrozen;
- (void)_setCount:(unsigned long long)arg1;
- (void)_setFrozen:(bool)arg1;
- (bool)_shouldNotifyOnInsert;
- (id)_validateConfiguration;
- (id)_validateSample;
- (id)_valueDescription;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
