/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalCodingTask : NSObject <NSCopying, NSSecureCoding> {
    HKMedicalCodingCollection * _codings;
    NSArray * _preferredSystems;
}

@property (nonatomic, readonly, copy) HKMedicalCodingCollection *codings;
@property (nonatomic, readonly, copy) NSArray *preferredSystems;

+ (bool)supportsSecureCoding;
+ (id)taskWithCodings:(id)arg1 preferredSystems:(id)arg2;

- (void).cxx_destruct;
- (id)codings;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodings:(id)arg1 preferredSystems:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)preferredSystems;

@end
