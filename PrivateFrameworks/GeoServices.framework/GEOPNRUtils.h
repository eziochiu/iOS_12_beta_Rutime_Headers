/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPNRUtils : NSObject

+ (id)PNRStringsSuffix;
+ (id)PNRTrieSuffix;
+ (id)PNRZippedStringsSuffix;
+ (id)PNRZippedTrieSuffix;
+ (id)_cacheDirectoryPath;
+ (id)_cachesPathForFileBaseName:(id)arg1 fileExtension:(id)arg2;
+ (id)_countryCodeForInternationalCode:(id)arg1;
+ (bool)_createCachesDirectory;
+ (id)_currentCountry;
+ (id)_currentLocale;
+ (id)_frameworkPathForFileBaseName:(id)arg1 fileExtension:(id)arg2;
+ (id)_internationalCodeForCountryCode:(id)arg1;
+ (bool)_isValidPhoneNumber:(id)arg1;
+ (id)_preferredLanguages;
+ (id)_stringByStrippingFormattingAndNotVisiblyAllowable:(id)arg1;
+ (id)alePackDirectory;
+ (id)versionFilePath;

@end
