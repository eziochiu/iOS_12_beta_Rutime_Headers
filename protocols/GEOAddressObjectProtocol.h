/* made by EzioChiu.
 */

@protocol GEOAddressObjectProtocol <NSObject>

@required

+ (NSString *)libraryVersion;

- (GEOAddress *)address;
- (NSDictionary *)addressDictionary;
- (NSString *)cityDisplayNameWithFallback:(bool)arg1;
- (CNPostalAddress *)cnPostalAddress;
- (NSString *)fullAddressNoCurrentCountryWithMultiline:(bool)arg1;
- (NSString *)fullAddressWithMultiline:(bool)arg1;
- (NSString *)fullAddressWithMultiline:(bool)arg1 relative:(GEOAddressObject *)arg2;
- (bool)hasKnownAccuracy;
- (id)initWithCNPostalAddress:(CNPostalAddress *)arg1 langauge:(NSString *)arg2 country:(NSString *)arg3 phoneticLocale:(NSString *)arg4;
- (id)initWithContactAddressDictionary:(NSDictionary *)arg1 langauge:(NSString *)arg2 country:(NSString *)arg3 phoneticLocale:(NSString *)arg4;
- (id)initWithCurrentCountry;
- (id)initWithPlaceDataAddressObject:(GEOPDAddressObject *)arg1 placeDataAddress:(GEOPDAddress *)arg2 placeDataInfo:(GEOPDPlaceInfo *)arg3 placeDataEntity:(GEOPDEntity *)arg4 language:(NSString *)arg5 country:(NSString *)arg6 phoneticLocale:(NSString *)arg7;
- (int)knownAccuracy;
- (NSString *)name;
- (NSString *)parkingDisplayName;
- (GEOAddress *)phoneticAddress;
- (NSString *)phoneticLocaleIdentifier;
- (NSString *)phoneticName;
- (NSString *)shortAddress;
- (NSString *)spokenAddress;
- (NSString *)spokenAddressForLocale:(NSString *)arg1;
- (NSString *)spokenName;
- (GEOStructuredAddress *)spokenStructuredAddress;
- (NSOrderedSet *)titlesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSString *)venueLabel;
- (NSString *)venueLabel:(long long)arg1;
- (NSString *)venueLevel;
- (NSString *)venueShortAddress;
- (NSString *)weatherDisplayName;

@end
