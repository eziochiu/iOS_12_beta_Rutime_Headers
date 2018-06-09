/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface WorldClockCity : NSObject {
    ALCity * _alCity;
    NSString * _countryCode;
    NSString * _countryName;
    NSString * _name;
    NSString * _timeZone;
    NSString * _unlocalizedCountryName;
    NSString * _unlocalizedName;
}

@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) ALCity *alCity;
@property (nonatomic, readonly) NSNumber *alCityId;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSString *countryName;
@property (nonatomic, readonly) NSURL *idUrl;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDictionary *properties;
@property (nonatomic, readonly) NSString *timeZone;
@property (nonatomic, readonly) NSString *unlocalizedCityName;
@property (nonatomic, readonly) NSString *unlocalizedCountryName;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (bool)isCachedLanguageStaleForProperties:(id)arg1;
+ (bool)isCachedLanguageStaleForProperties:(id)arg1 systemLanguage:(id)arg2;
+ (bool)isWorldClockCityProperties:(id)arg1;
+ (id)unlocalizedExampleCity;

- (void).cxx_destruct;
- (id)alCity;
- (id)alCityId;
- (id)countryCode;
- (id)countryName;
- (id)description;
- (unsigned long long)hash;
- (id)idUrl;
- (id)initWithALCity:(id)arg1;
- (id)initWithALCityIdentifier:(int)arg1;
- (id)initWithProperties:(id)arg1;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)properties;
- (id)timeZone;
- (id)unlocalizedCityName;
- (id)unlocalizedCountryName;

// Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion

- (id)abbreviation;

@end
