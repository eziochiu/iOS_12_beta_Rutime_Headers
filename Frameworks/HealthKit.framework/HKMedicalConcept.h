/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalConcept : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayString;
}

@property (nonatomic, readonly, copy) NSString *displayString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayString;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayString:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
