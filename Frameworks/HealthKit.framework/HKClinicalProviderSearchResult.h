/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKClinicalProviderSearchResult : NSObject <HKClinicalBrandable, NSCopying, NSSecureCoding> {
    NSString * _administrativeArea;
    NSString * _batchID;
    HKClinicalBrand * _brand;
    NSString * _externalID;
    NSString * _locality;
    bool  _multiple;
    NSString * _subtitle;
    bool  _supported;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly, copy) NSString *batchID;
@property (nonatomic, readonly, copy) HKClinicalBrand *brand;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *externalID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *locality;
@property (getter=hasMultipleLocations, nonatomic, readonly) bool multiple;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (getter=isSupported, nonatomic, readonly) bool supported;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)batchID;
- (id)brand;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)externalID;
- (bool)hasMultipleLocations;
- (unsigned long long)hash;
- (id)informationURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalID:(id)arg1 batchID:(id)arg2 title:(id)arg3 subtitle:(id)arg4 locality:(id)arg5 administrativeArea:(id)arg6 supported:(bool)arg7 multiple:(bool)arg8 brand:(id)arg9;
- (bool)isEqual:(id)arg1;
- (bool)isSupported;
- (id)locality;
- (id)subtitle;
- (id)title;

@end
