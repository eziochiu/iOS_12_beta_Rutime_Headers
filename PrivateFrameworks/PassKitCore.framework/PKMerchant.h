/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding> {
    NSString * _displayName;
    NSString * _industryCategory;
    long long  _industryCode;
    double  _locationLatitude;
    double  _locationLongitude;
    unsigned long long  _mapsIdentifier;
    NSString * _mapsName;
    NSString * _name;
    NSString * _phoneNumber;
    CNPostalAddress * _postalAddress;
    NSString * _rawName;
    int  _resultProviderIdentifier;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, copy) NSString *industryCategory;
@property (nonatomic) long long industryCode;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) unsigned long long mapsIdentifier;
@property (nonatomic, copy) NSString *mapsName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) CNPostalAddress *postalAddress;
@property (nonatomic, copy) NSString *rawName;
@property (nonatomic) int resultProviderIdentifier;
@property (setter=setURL:, nonatomic, copy) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_jsonEncodedPostalAddressString;
- (void)_regenerateDisplayName;
- (id)description;
- (id)displayName;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCloudArchivableDeviceData;
- (unsigned long long)hash;
- (id)industryCategory;
- (long long)industryCode;
- (id)initWithCloudStoreCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCloudArchivableDeviceDataEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMerchant:(id)arg1;
- (bool)isValid;
- (unsigned long long)itemType;
- (id)jsonDictionaryRepresentation;
- (id)location;
- (double)locationLatitude;
- (double)locationLongitude;
- (unsigned long long)mapsIdentifier;
- (id)mapsName;
- (id)name;
- (id)phoneNumber;
- (id)postalAddress;
- (id)rawName;
- (id)recordTypesAndNames;
- (int)resultProviderIdentifier;
- (void)setIndustryCategory:(id)arg1;
- (void)setIndustryCode:(long long)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationLatitude:(double)arg1;
- (void)setLocationLongitude:(double)arg1;
- (void)setMapsIdentifier:(unsigned long long)arg1;
- (void)setMapsName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setPostalAddress:(id)arg1;
- (void)setRawName:(id)arg1;
- (void)setResultProviderIdentifier:(int)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end
