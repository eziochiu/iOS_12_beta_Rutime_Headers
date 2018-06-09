/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalCodingResult : NSObject <NSCopying, NSSecureCoding> {
    HKMedicalConcept * _concept;
    NSError * _error;
}

@property (nonatomic, readonly, copy) HKMedicalConcept *concept;
@property (nonatomic, readonly, copy) NSError *error;

+ (id)resultWithConcept:(id)arg1;
+ (id)resultWithError:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)concept;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConcept:(id)arg1 error:(id)arg2;

@end
