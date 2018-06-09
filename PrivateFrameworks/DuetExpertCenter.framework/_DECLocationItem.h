/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECLocationItem : _DECItem {
    NSString * _administrativeArea;
    NSString * _country;
    NSString * _fullFormattedAddress;
    NSString * _label;
    NSNumber * _latitude;
    NSString * _locality;
    NSNumber * _longitude;
    NSURL * _mapItemURL;
    NSString * _name;
    NSString * _originatingBundleID;
    NSURL * _originatingWebsiteURL;
    NSString * _postalCode;
    NSString * _shortValue;
    bool  _shouldAggregate;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *administrativeArea;
@property (nonatomic, readonly, copy) NSString *country;
@property (nonatomic, readonly, copy) NSString *fullFormattedAddress;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSNumber *latitude;
@property (nonatomic, readonly, copy) NSString *locality;
@property (nonatomic, readonly, copy) NSNumber *longitude;
@property (nonatomic, readonly, copy) NSURL *mapItemURL;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *originatingBundleID;
@property (nonatomic, readonly, copy) NSURL *originatingWebsiteURL;
@property (nonatomic, readonly, copy) NSString *postalCode;
@property (nonatomic, readonly, copy) NSString *shortValue;
@property (nonatomic, readonly) bool shouldAggregate;
@property (nonatomic, readonly, copy) NSString *subThoroughfare;
@property (nonatomic, readonly, copy) NSString *thoroughfare;
@property (nonatomic, readonly, copy) NSString *value;

+ (id)locationWithName:(id)arg1 label:(id)arg2 value:(id)arg3 shortValue:(id)arg4 originatingBundleID:(id)arg5 originatingWebsiteURL:(id)arg6 shouldAggregate:(bool)arg7 fullFormattedAddress:(id)arg8 thoroughfare:(id)arg9 subThoroughfare:(id)arg10 locality:(id)arg11 administrativeArea:(id)arg12 postalCode:(id)arg13 country:(id)arg14 latitude:(id)arg15 longitude:(id)arg16 mapItemURL:(id)arg17;
+ (id)locationWithName:(id)arg1 label:(id)arg2 value:(id)arg3 shortValue:(id)arg4 originatingBundleID:(id)arg5 shouldAggregate:(bool)arg6;
+ (id)locationWithName:(id)arg1 label:(id)arg2 value:(id)arg3 shortValue:(id)arg4 originatingBundleID:(id)arg5 shouldAggregate:(bool)arg6 fullFormattedAddress:(id)arg7 thoroughfare:(id)arg8 subThoroughfare:(id)arg9 locality:(id)arg10 administrativeArea:(id)arg11 postalCode:(id)arg12 country:(id)arg13 latitude:(id)arg14 longitude:(id)arg15;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECLocationItem:(id)arg1;
- (id)administrativeArea;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)country;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullFormattedAddress;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 label:(id)arg2 value:(id)arg3 shortValue:(id)arg4 originatingBundleID:(id)arg5 originatingWebsiteURL:(id)arg6 shouldAggregate:(bool)arg7 fullFormattedAddress:(id)arg8 thoroughfare:(id)arg9 subThoroughfare:(id)arg10 locality:(id)arg11 administrativeArea:(id)arg12 postalCode:(id)arg13 country:(id)arg14 latitude:(id)arg15 longitude:(id)arg16 mapItemURL:(id)arg17;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)label;
- (id)latitude;
- (id)locality;
- (id)longitude;
- (id)mapItemURL;
- (id)name;
- (id)originatingBundleID;
- (id)originatingWebsiteURL;
- (id)postalCode;
- (id)shortValue;
- (bool)shouldAggregate;
- (id)subThoroughfare;
- (id)thoroughfare;
- (id)value;

@end
