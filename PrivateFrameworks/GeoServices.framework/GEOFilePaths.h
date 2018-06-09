/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFilePaths : NSObject

+ (id)aleStringsCacheDirectoryPath;
+ (id)geoServicesCacheDirectoryPath;
+ (id)geodCacheDirectoryPath;
+ (id)geodLibraryDirectoryURL;
+ (id)homeDirectory;
+ (void)initialize;
+ (id)layerDataTrackerDBFilePath;
+ (id)locationShifterDBFilePath;
+ (id)logMessageCacheDirectoryPath;
+ (id)mapLayerDataDirectoryPath;
+ (id)mapsSuggestionsCacheDirectoryPath;
+ (id)navTracesDirectoryPath;
+ (id)navdCacheDirectoryPath;
+ (id)phoneNumberMUIDMappingFilePath;
+ (id)placeDataCacheDirectoryPath;
+ (id)preferencesDirectoryPath;
+ (id)requestCountsDBFilePath;
+ (id)tileCacheDirectoryPath;
+ (id)traceExtension;

@end
