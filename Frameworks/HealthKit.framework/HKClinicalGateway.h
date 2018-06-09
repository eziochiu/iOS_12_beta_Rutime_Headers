/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalGateway : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    HKClinicalBrand * _brand;
    NSString * _displayableDescription;
    NSString * _externalID;
    NSURL * _informationURL;
    NSURL * _passwordResetURL;
    NSURL * _patientPortalURL;
    NSString * _phoneNumber;
    NSURL * _signupURL;
    long long  _status;
    NSString * _subtitle;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayableDescription;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *informationURL;
@property (getter=hasMultipleLocations, nonatomic, readonly) bool multiple;
@property (nonatomic, readonly, copy) NSURL *passwordResetURL;
@property (nonatomic, readonly, copy) NSURL *patientPortalURL;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly, copy) NSURL *signupURL;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayableDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (unsigned long long)hash;
- (id)informationURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 displayableDescription:(id)arg4 phoneNumber:(id)arg5 informationURL:(id)arg6 passwordResetURL:(id)arg7 patientPortalURL:(id)arg8 signupURL:(id)arg9 status:(long long)arg10 type:(long long)arg11 brand:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)passwordResetURL;
- (id)patientPortalURL;
- (id)phoneNumber;
- (id)signupURL;
- (long long)status;
- (id)subtitle;
- (id)title;
- (long long)type;

@end
