/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalProvider : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    struct NSDictionary { Class x1; } * _addressDictionary;
    HKClinicalBrand * _brand;
    NSString * _externalID;
    NSArray * _gateways;
    NSURL * _informationURL;
    NSNumber * _latitude;
    NSNumber * _longitude;
    bool  _multiple;
    NSString * _phoneNumber;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSDictionary *addressDictionary;
@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (nonatomic, readonly, copy) NSArray *gateways;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSURL *informationURL;
@property (nonatomic, readonly, copy) NSNumber *latitude;
@property (nonatomic, readonly, copy) NSNumber *longitude;
@property (getter=hasMultipleLocations, nonatomic, readonly) bool multiple;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)addressDictionary;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (id)gateways;
- (bool)hasMultipleLocations;
- (id)informationURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 hasMultipleLocations:(bool)arg4 latitude:(id)arg5 longitude:(id)arg6 addressDictionary:(struct NSDictionary { Class x1; }*)arg7 phoneNumber:(id)arg8 informationURL:(id)arg9 brand:(id)arg10 gateways:(id)arg11;
- (bool)isSupported;
- (id)latitude;
- (id)longitude;
- (id)phoneNumber;
- (id)subtitle;
- (id)title;

@end
