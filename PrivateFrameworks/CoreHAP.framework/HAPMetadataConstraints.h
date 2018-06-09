/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataConstraints : HMFObject <NSCopying, NSSecureCoding> {
    NSNumber * _maxLength;
    NSNumber * _maximumValue;
    NSNumber * _minLength;
    NSNumber * _minimumValue;
    NSNumber * _stepValue;
    NSArray * _validValues;
}

@property (nonatomic, retain) NSNumber *maxLength;
@property (nonatomic, retain) NSNumber *maximumValue;
@property (nonatomic, retain) NSNumber *minLength;
@property (nonatomic, retain) NSNumber *minimumValue;
@property (nonatomic, retain) NSNumber *stepValue;
@property (nonatomic, copy) NSArray *validValues;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToMetadataConstraints:(id)arg1;
- (id)maxLength;
- (id)maximumValue;
- (id)minLength;
- (id)minimumValue;
- (void)setMaxLength:(id)arg1;
- (void)setMaximumValue:(id)arg1;
- (void)setMinLength:(id)arg1;
- (void)setMinimumValue:(id)arg1;
- (void)setStepValue:(id)arg1;
- (void)setValidValues:(id)arg1;
- (id)stepValue;
- (id)validValues;

@end
