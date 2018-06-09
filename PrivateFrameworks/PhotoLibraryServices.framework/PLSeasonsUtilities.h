/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSeasonsUtilities : NSObject

+ (id)_localizedSeasonNameForMonthNumber:(unsigned long long)arg1 locale:(id)arg2;
+ (id)_northernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;
+ (id)_seasonCountryCodesDictionary;
+ (id)_southernMeteorologicalSeasonKeyForMonthNumber:(unsigned long long)arg1;
+ (bool)isCountryCodePartOfNorthernHemisphere:(id)arg1;
+ (bool)isCountryCodePartOfSouthernHemisphere:(id)arg1;
+ (id)localizedSeasonNameForDate:(id)arg1 calendar:(id)arg2 locale:(id)arg3;

@end
