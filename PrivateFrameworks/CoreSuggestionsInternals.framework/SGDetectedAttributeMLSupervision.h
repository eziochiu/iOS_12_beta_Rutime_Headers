/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDetectedAttributeMLSupervision : NSObject {
    bool  _foundDefinitiveNegative;
    bool  _foundDefinitivePositive;
    bool  _isKnownNegativeAppleContact;
    bool  _isKnownPositiveAppleContact;
    bool  _isNegativeAddressBookContact;
    bool  _isPositiveAddressBookContact;
}

@property (nonatomic) bool foundDefinitiveNegative;
@property (nonatomic) bool foundDefinitivePositive;
@property (nonatomic) bool isKnownNegativeAppleContact;
@property (nonatomic) bool isKnownPositiveAppleContact;
@property (nonatomic) bool isNegativeAddressBookContact;
@property (nonatomic) bool isPositiveAddressBookContact;

+ (unsigned long long)supervisionTypeIfFoundByPrevModel:(bool)arg1 isKnownContact:(bool)arg2 isKnownInternal:(bool)arg3;

- (bool)foundDefinitive;
- (bool)foundDefinitiveNegative;
- (bool)foundDefinitivePositive;
- (id)initWithEntity:(id)arg1 ddMatch:(id)arg2;
- (bool)isHighConfidenceLabel;
- (bool)isKnownAppleContact;
- (bool)isKnownContact;
- (bool)isKnownNegativeAppleContact;
- (bool)isKnownPositiveAppleContact;
- (bool)isNegativeAddressBookContact;
- (bool)isPositive;
- (bool)isPositiveAddressBookContact;
- (struct SGMContactDetailFoundIn_ { unsigned long long x1; })metricsContactDetailFoundIn;
- (struct SGMContactDetailOwner_ { unsigned long long x1; })metricsContactDetailOwner;
- (struct SGMFoundInMailSupervisionType_ { unsigned long long x1; })metricsSupervisionType;
- (unsigned long long)sessionSupervisionType;
- (void)setFoundDefinitiveNegative:(bool)arg1;
- (void)setFoundDefinitivePositive:(bool)arg1;
- (void)setIsKnownNegativeAppleContact:(bool)arg1;
- (void)setIsKnownPositiveAppleContact:(bool)arg1;
- (void)setIsNegativeAddressBookContact:(bool)arg1;
- (void)setIsPositiveAddressBookContact:(bool)arg1;

@end
