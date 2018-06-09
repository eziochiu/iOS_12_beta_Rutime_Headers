/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKRatioValue : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    HKCodedQuantity * _denominator;
    HKCodedQuantity * _numerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) HKCodedQuantity *denominator;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) HKCodedQuantity *numerator;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)ratioValueWithNumerator:(id)arg1 andDenominator:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithNumerator:(id)arg1 denominator:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)denominator;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)numerator;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
