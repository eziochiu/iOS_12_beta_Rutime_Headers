/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface KeychainSyncCountryInfo : NSObject <NSCopying> {
    NSString * _countryCode;
    NSString * _countryName;
    NSString * _dialingPrefix;
    NSString * _localizedCountryName;
}

@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, retain) NSString *countryName;
@property (nonatomic, retain) NSString *dialingPrefix;
@property (nonatomic, retain) NSString *localizedCountryName;

+ (void)_loadCountriesIfNeeded;
+ (id)allCountries;
+ (id)countryInfoForCountryCode:(id)arg1 dialingPrefix:(id)arg2;
+ (id)countryInfoWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)countryName;
- (id)description;
- (id)dialingPrefix;
- (bool)isEqual:(id)arg1;
- (id)localizedCountryName;
- (void)setCountryCode:(id)arg1;
- (void)setCountryName:(id)arg1;
- (void)setDialingPrefix:(id)arg1;
- (void)setLocalizedCountryName:(id)arg1;

@end
