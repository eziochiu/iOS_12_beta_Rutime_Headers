/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGStorageLocation : NSObject <NSCopying, NSSecureCoding, SGEventLocationForGeocode> {
    double  _accuracy;
    NSString * _address;
    NSString * _airportCode;
    NSData * _handle;
    NSString * _label;
    double  _latitude;
    unsigned long long  _locationType;
    double  _longitude;
    double  _quality;
}

@property (nonatomic, readonly) double accuracy;
@property (nonatomic, readonly) NSString *address;
@property (nonatomic, readonly) NSString *airportCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSData *handle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) unsigned long long locationType;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) double quality;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)accuracy;
- (id)address;
- (id)airportCode;
- (long long)compare:(id)arg1;
- (id)convertToLocationWithId:(id)arg1 origin:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)geocodeAccuracy;
- (id)geocodeAddress;
- (id)geocodeAirportCode;
- (id)geocodeHandle;
- (bool)geocodeIsEnd;
- (bool)geocodeIsStart;
- (id)geocodeLabel;
- (double)geocodeLatitude;
- (double)geocodeLongitude;
- (id)geocodedLocationWithLabel:(id)arg1 address:(id)arg2 latitude:(double)arg3 longitude:(double)arg4 accuracy:(double)arg5 handle:(id)arg6;
- (id)geocodedLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3 handle:(id)arg4;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 accuracy:(double)arg5 quality:(double)arg6;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 address:(id)arg3 airportCode:(id)arg4 latitude:(double)arg5 longitude:(double)arg6 accuracy:(double)arg7 quality:(double)arg8 handle:(id)arg9;
- (id)initWithType:(unsigned long long)arg1 label:(id)arg2 airportCode:(id)arg3 latitude:(double)arg4 longitude:(double)arg5 accuracy:(double)arg6 quality:(double)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStorageLocation:(id)arg1;
- (id)label;
- (double)latitude;
- (unsigned long long)locationType;
- (double)longitude;
- (double)quality;

@end
