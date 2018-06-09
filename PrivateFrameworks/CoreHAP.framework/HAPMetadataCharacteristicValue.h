/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPMetadataCharacteristicValue : HMFObject {
    NSNumber * _maxLength;
    NSNumber * _maxValue;
    NSNumber * _minLength;
    NSNumber * _minValue;
    NSNumber * _stepValue;
    NSArray * _validValues;
}

@property (nonatomic, retain) NSNumber *maxLength;
@property (nonatomic, retain) NSNumber *maxValue;
@property (nonatomic, retain) NSNumber *minLength;
@property (nonatomic, retain) NSNumber *minValue;
@property (nonatomic, retain) NSNumber *stepValue;
@property (nonatomic, readonly) NSArray *validValues;

+ (id)initWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)dump;
- (id)generateDictionary;
- (id)initWithMinLength:(id)arg1 maxLength:(id)arg2;
- (id)initWithMinValue:(id)arg1 maxValue:(id)arg2 stepValue:(id)arg3 validValues:(id)arg4;
- (id)maxLength;
- (id)maxValue;
- (id)minLength;
- (id)minValue;
- (void)setMaxLength:(id)arg1;
- (void)setMaxValue:(id)arg1;
- (void)setMinLength:(id)arg1;
- (void)setMinValue:(id)arg1;
- (void)setStepValue:(id)arg1;
- (id)stepValue;
- (id)validValues;

@end
