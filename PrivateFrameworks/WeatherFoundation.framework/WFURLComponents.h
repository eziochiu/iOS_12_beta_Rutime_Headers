/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFURLComponents : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _cityIndex;
    unsigned long long  _destination;
    bool  _isLocalWeatherCity;
    NSLocale * _locale;
    CLLocation * _location;
    NSString * _locationName;
    NSString * _platform;
    bool  _showHourlyWeatherOnly;
}

@property (readonly, copy) NSURL *URL;
@property unsigned long long cityIndex;
@property unsigned long long destination;
@property bool isLocalWeatherCity;
@property (retain) NSLocale *locale;
@property (copy) CLLocation *location;
@property (copy) NSString *locationName;
@property (retain) NSString *platform;
@property bool showHourlyWeatherOnly;

+ (id)componentsForLocation:(id)arg1;
+ (id)componentsForURL:(id)arg1;
+ (void)locationForURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)locationForURLComponents:(id)arg1 completion:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (bool)_canBuildURLWithProvidedComponents;
- (unsigned long long)cityIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToComponents:(id)arg1;
- (bool)isLocalWeatherCity;
- (id)locale;
- (id)location;
- (id)locationName;
- (id)platform;
- (void)setCityIndex:(unsigned long long)arg1;
- (void)setDestination:(unsigned long long)arg1;
- (void)setIsLocalWeatherCity:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setPlatform:(id)arg1;
- (void)setShowHourlyWeatherOnly:(bool)arg1;
- (bool)showHourlyWeatherOnly;

@end
