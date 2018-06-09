/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOActiveTileGroup : PBCodable <NSCopying> {
    NSString * _abExperimentURL;
    NSMutableArray * _activeResources;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeScales;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeScenarios;
    NSString * _addressCorrectionInitURL;
    NSString * _addressCorrectionUpdateURL;
    NSMutableArray * _announcementsSupportedLanguages;
    NSString * _announcementsURL;
    NSMutableArray * _attributions;
    NSString * _authProxyURL;
    NSString * _backgroundDispatcherURL;
    NSString * _backgroundRevGeoURL;
    NSString * _batchReverseGeocoderURL;
    NSString * _batchTrafficProbeURL;
    NSString * _bluePOIURL;
    NSString * _businessPortalBaseURL;
    GEODataSetDescription * _dataSet;
    NSString * _directionsURL;
    NSString * _dispatcherURL;
    NSString * _etaURL;
    NSData * _flyoverRegionVersions;
    NSMutableArray * _fontChecksums;
    NSMutableArray * _fonts;
    struct { 
        unsigned int locationShiftVersion : 1; 
        unsigned int modelVersion : 1; 
    }  _has;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _hybridUnavailableRegions;
    unsigned long long  _hybridUnavailableRegionsCount;
    unsigned long long  _hybridUnavailableRegionsSpace;
    NSMutableArray * _iconChecksums;
    NSMutableArray * _icons;
    unsigned int  _identifier;
    NSMutableArray * _locationShiftEnabledRegions;
    unsigned int  _locationShiftVersion;
    NSString * _logMessageUsageURL;
    NSString * _logMessageUsageV3URL;
    unsigned int  _modelVersion;
    NSString * _polyLocationShiftURL;
    NSString * _proactiveRoutingURL;
    NSString * _problemCategoriesURL;
    NSString * _problemOptInURL;
    NSString * _problemStatusURL;
    NSString * _problemSubmissionURL;
    NSString * _realtimeTrafficProbeURL;
    NSMutableArray * _regionalResourceRegions;
    NSMutableArray * _regionalResourceTiles;
    NSMutableArray * _regionalResources;
    NSString * _regionalResourcesURL;
    NSString * _releaseInfo;
    NSData * _reserved;
    NSMutableArray * _resources;
    NSString * _resourcesURL;
    NSString * _reverseGeocoderVersionsURL;
    NSString * _searchAttributionManifestURL;
    NSString * _simpleETAURL;
    NSString * _spatialLookupURL;
    NSMutableArray * _staleResources;
    NSMutableArray * _styleSheetChecksums;
    NSMutableArray * _styleSheets;
    NSMutableArray * _textureChecksums;
    NSMutableArray * _textures;
    NSMutableArray * _tileSets;
    NSString * _uniqueIdentifier;
    PBUnknownFields * _unknownFields;
    GEOVersionManifest * _versionManifest;
    NSString * _wifiConnectionQualityProbeURL;
    NSMutableArray * _xmlChecksums;
    NSMutableArray * _xmls;
}

@property (nonatomic, retain) NSString *abExperimentURL;
@property (nonatomic, retain) NSMutableArray *activeResources;
@property (nonatomic, readonly) int*activeScales;
@property (nonatomic, readonly) unsigned long long activeScalesCount;
@property (nonatomic, readonly) int*activeScenarios;
@property (nonatomic, readonly) unsigned long long activeScenariosCount;
@property (nonatomic, retain) NSString *addressCorrectionInitURL;
@property (nonatomic, retain) NSString *addressCorrectionUpdateURL;
@property (nonatomic, retain) NSMutableArray *announcementsSupportedLanguages;
@property (nonatomic, retain) NSString *announcementsURL;
@property (nonatomic, retain) NSMutableArray *attributions;
@property (nonatomic, retain) NSString *authProxyURL;
@property (nonatomic, retain) NSString *backgroundDispatcherURL;
@property (nonatomic, retain) NSString *backgroundRevGeoURL;
@property (nonatomic, retain) NSString *batchReverseGeocoderURL;
@property (nonatomic, retain) NSString *batchTrafficProbeURL;
@property (nonatomic, retain) NSString *bluePOIURL;
@property (nonatomic, retain) NSString *businessPortalBaseURL;
@property (nonatomic, retain) GEODataSetDescription *dataSet;
@property (nonatomic, retain) NSString *directionsURL;
@property (nonatomic, retain) NSString *dispatcherURL;
@property (nonatomic, retain) NSString *etaURL;
@property (nonatomic, retain) NSData *flyoverRegionVersions;
@property (nonatomic, retain) NSMutableArray *fontChecksums;
@property (nonatomic, retain) NSMutableArray *fonts;
@property (nonatomic, readonly) bool hasAbExperimentURL;
@property (nonatomic, readonly) bool hasAddressCorrectionInitURL;
@property (nonatomic, readonly) bool hasAddressCorrectionUpdateURL;
@property (nonatomic, readonly) bool hasAnnouncementsURL;
@property (nonatomic, readonly) bool hasAuthProxyURL;
@property (nonatomic, readonly) bool hasBackgroundDispatcherURL;
@property (nonatomic, readonly) bool hasBackgroundRevGeoURL;
@property (nonatomic, readonly) bool hasBatchReverseGeocoderURL;
@property (nonatomic, readonly) bool hasBatchTrafficProbeURL;
@property (nonatomic, readonly) bool hasBluePOIURL;
@property (nonatomic, readonly) bool hasBusinessPortalBaseURL;
@property (nonatomic, readonly) bool hasDataSet;
@property (nonatomic, readonly) bool hasDirectionsURL;
@property (nonatomic, readonly) bool hasDispatcherURL;
@property (nonatomic, readonly) bool hasEtaURL;
@property (nonatomic, readonly) bool hasFlyoverRegionVersions;
@property (nonatomic) bool hasLocationShiftVersion;
@property (nonatomic, readonly) bool hasLogMessageUsageURL;
@property (nonatomic, readonly) bool hasLogMessageUsageV3URL;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic, readonly) bool hasPolyLocationShiftURL;
@property (nonatomic, readonly) bool hasProactiveRoutingURL;
@property (nonatomic, readonly) bool hasProblemCategoriesURL;
@property (nonatomic, readonly) bool hasProblemOptInURL;
@property (nonatomic, readonly) bool hasProblemStatusURL;
@property (nonatomic, readonly) bool hasProblemSubmissionURL;
@property (nonatomic, readonly) bool hasRealtimeTrafficProbeURL;
@property (nonatomic, readonly) bool hasRegionalResourcesURL;
@property (nonatomic, readonly) bool hasReleaseInfo;
@property (nonatomic, readonly) bool hasReserved;
@property (nonatomic, readonly) bool hasResourcesURL;
@property (nonatomic, readonly) bool hasReverseGeocoderVersionsURL;
@property (nonatomic, readonly) bool hasSearchAttributionManifestURL;
@property (nonatomic, readonly) bool hasSimpleETAURL;
@property (nonatomic, readonly) bool hasSpatialLookupURL;
@property (nonatomic, readonly) bool hasUniqueIdentifier;
@property (nonatomic, readonly) bool hasVersionManifest;
@property (nonatomic, readonly) bool hasWifiConnectionQualityProbeURL;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*hybridUnavailableRegions;
@property (nonatomic, readonly) unsigned long long hybridUnavailableRegionsCount;
@property (nonatomic, retain) NSMutableArray *iconChecksums;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, retain) NSMutableArray *locationShiftEnabledRegions;
@property (nonatomic) unsigned int locationShiftVersion;
@property (nonatomic, retain) NSString *logMessageUsageURL;
@property (nonatomic, retain) NSString *logMessageUsageV3URL;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic, retain) NSString *polyLocationShiftURL;
@property (nonatomic, retain) NSString *proactiveRoutingURL;
@property (nonatomic, retain) NSString *problemCategoriesURL;
@property (nonatomic, retain) NSString *problemOptInURL;
@property (nonatomic, retain) NSString *problemStatusURL;
@property (nonatomic, retain) NSString *problemSubmissionURL;
@property (nonatomic, retain) NSString *realtimeTrafficProbeURL;
@property (nonatomic, retain) NSMutableArray *regionalResourceRegions;
@property (nonatomic, retain) NSMutableArray *regionalResourceTiles;
@property (nonatomic, retain) NSMutableArray *regionalResources;
@property (nonatomic, retain) NSString *regionalResourcesURL;
@property (nonatomic, retain) NSString *releaseInfo;
@property (nonatomic, retain) NSData *reserved;
@property (nonatomic, retain) NSMutableArray *resources;
@property (nonatomic, retain) NSString *resourcesURL;
@property (nonatomic, retain) NSString *reverseGeocoderVersionsURL;
@property (nonatomic, retain) NSString *searchAttributionManifestURL;
@property (nonatomic, retain) NSString *simpleETAURL;
@property (nonatomic, retain) NSString *spatialLookupURL;
@property (nonatomic, retain) NSMutableArray *staleResources;
@property (nonatomic, retain) NSMutableArray *styleSheetChecksums;
@property (nonatomic, retain) NSMutableArray *styleSheets;
@property (nonatomic, retain) NSMutableArray *textureChecksums;
@property (nonatomic, retain) NSMutableArray *textures;
@property (nonatomic, retain) NSMutableArray *tileSets;
@property (nonatomic, retain) NSString *uniqueIdentifier;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOVersionManifest *versionManifest;
@property (nonatomic, retain) NSString *wifiConnectionQualityProbeURL;
@property (nonatomic, retain) NSMutableArray *xmlChecksums;
@property (nonatomic, retain) NSMutableArray *xmls;

+ (Class)activeResourceType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)attributionType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)regionalResourceRegionType;
+ (Class)regionalResourceTileType;
+ (Class)regionalResourceType;
+ (Class)resourceType;
+ (Class)staleResourceType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)textureChecksumType;
+ (Class)textureType;
+ (Class)tileSetType;
+ (Class)xmlChecksumType;
+ (Class)xmlType;

- (void).cxx_destruct;
- (int)StringAsActiveScales:(id)arg1;
- (int)StringAsActiveScenarios:(id)arg1;
- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)_decodedFlyoverRegionVersions;
- (void)_resetBestLanguages;
- (void)_setDecodedFlyoverRegionVersions:(id)arg1;
- (id)abExperimentURL;
- (id)activeResourceAtIndex:(unsigned long long)arg1;
- (id)activeResources;
- (unsigned long long)activeResourcesCount;
- (int)activeScaleAtIndex:(unsigned long long)arg1;
- (int*)activeScales;
- (id)activeScalesAsString:(int)arg1;
- (unsigned long long)activeScalesCount;
- (int)activeScenarioAtIndex:(unsigned long long)arg1;
- (int*)activeScenarios;
- (id)activeScenariosAsString:(int)arg1;
- (unsigned long long)activeScenariosCount;
- (id)activeTileSetForKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (void)addActiveResource:(id)arg1;
- (void)addActiveScale:(int)arg1;
- (void)addActiveScenario:(int)arg1;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addFontChecksum:(id)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)addRegionalResourceTile:(id)arg1;
- (void)addResource:(id)arg1;
- (void)addStaleResource:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addTextureChecksum:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)addXml:(id)arg1;
- (void)addXmlChecksum:(id)arg1;
- (id)addressCorrectionInitURL;
- (id)addressCorrectionUpdateURL;
- (id)announcementsSupportedLanguages;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)announcementsURL;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (id)attributions;
- (unsigned long long)attributionsCount;
- (id)authProxyURL;
- (id)backgroundDispatcherURL;
- (id)backgroundRevGeoURL;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)batchReverseGeocoderURL;
- (id)batchTrafficProbeURL;
- (id)bluePOIURL;
- (id)businessPortalBaseURL;
- (void)clearActiveResources;
- (void)clearActiveScales;
- (void)clearActiveScenarios;
- (void)clearAnnouncementsSupportedLanguages;
- (void)clearAttributions;
- (void)clearFontChecksums;
- (void)clearFonts;
- (void)clearHybridUnavailableRegions;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearLocationShiftEnabledRegions;
- (void)clearModernFormatFields;
- (void)clearRegionalResourceRegions;
- (void)clearRegionalResourceTiles;
- (void)clearRegionalResources;
- (void)clearResources;
- (void)clearStaleResources;
- (void)clearStyleSheetChecksums;
- (void)clearStyleSheets;
- (void)clearTextureChecksums;
- (void)clearTextures;
- (void)clearTileSets;
- (void)clearXmlChecksums;
- (void)clearXmls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSet;
- (unsigned int)dataVersionForFlyoverRegion:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsURL;
- (id)dispatcherURL;
- (void)enumerateFlyoverRegions:(id /* block */)arg1;
- (id)etaURL;
- (id)flyoverRegionVersions;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (id)fontChecksums;
- (unsigned long long)fontChecksumsCount;
- (id)fonts;
- (unsigned long long)fontsCount;
- (bool)hasAbExperimentURL;
- (bool)hasAddressCorrectionInitURL;
- (bool)hasAddressCorrectionUpdateURL;
- (bool)hasAnnouncementsURL;
- (bool)hasAuthProxyURL;
- (bool)hasBackgroundDispatcherURL;
- (bool)hasBackgroundRevGeoURL;
- (bool)hasBatchReverseGeocoderURL;
- (bool)hasBatchTrafficProbeURL;
- (bool)hasBluePOIURL;
- (bool)hasBusinessPortalBaseURL;
- (bool)hasDataSet;
- (bool)hasDataVersionForFlyoverRegion:(unsigned int)arg1;
- (bool)hasDirectionsURL;
- (bool)hasDispatcherURL;
- (bool)hasEtaURL;
- (bool)hasFlyoverRegionVersions;
- (bool)hasLocationShiftVersion;
- (bool)hasLogMessageUsageURL;
- (bool)hasLogMessageUsageV3URL;
- (bool)hasModelVersion;
- (bool)hasPolyLocationShiftURL;
- (bool)hasProactiveRoutingURL;
- (bool)hasProblemCategoriesURL;
- (bool)hasProblemOptInURL;
- (bool)hasProblemStatusURL;
- (bool)hasProblemSubmissionURL;
- (bool)hasRealtimeTrafficProbeURL;
- (bool)hasRegionalResourcesForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)hasRegionalResourcesURL;
- (bool)hasReleaseInfo;
- (bool)hasReserved;
- (bool)hasResourcesURL;
- (bool)hasReverseGeocoderVersionsURL;
- (bool)hasSearchAttributionManifestURL;
- (bool)hasSimpleETAURL;
- (bool)hasSpatialLookupURL;
- (bool)hasUniqueIdentifier;
- (bool)hasVersionManifest;
- (bool)hasWifiConnectionQualityProbeURL;
- (unsigned long long)hash;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)hybridUnavailableRegions;
- (unsigned long long)hybridUnavailableRegionsCount;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (id)iconChecksums;
- (unsigned long long)iconChecksumsCount;
- (id)icons;
- (unsigned long long)iconsCount;
- (unsigned int)identifier;
- (bool)isAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHybridModeAvailableForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)iterateActiveTileSets:(id /* block */)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 overrideLocale:(id)arg2;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (id)locationShiftEnabledRegions;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (unsigned int)locationShiftVersion;
- (id)logMessageUsageURL;
- (id)logMessageUsageV3URL;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelVersion;
- (id)polyLocationShiftURL;
- (void)populateLegacyFormat;
- (void)populateRegionalResources:(id)arg1;
- (id)proactiveRoutingURL;
- (id)problemCategoriesURL;
- (id)problemOptInURL;
- (id)problemStatusURL;
- (id)problemSubmissionURL;
- (bool)readFrom:(id)arg1;
- (id)realtimeTrafficProbeURL;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 scale:(int)arg2 scenarios:(id)arg3;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (id)regionalResourceRegions;
- (unsigned long long)regionalResourceRegionsCount;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (id)regionalResourceTiles;
- (unsigned long long)regionalResourceTilesCount;
- (id)regionalResources;
- (unsigned long long)regionalResourcesCount;
- (id)regionalResourcesForMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)regionalResourcesURL;
- (id)releaseInfo;
- (int)requestStyleForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)reserved;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (id)resources;
- (unsigned long long)resourcesCount;
- (id)resourcesURL;
- (id)reverseGeocoderVersionsURL;
- (id)searchAttributionManifestURL;
- (void)setAbExperimentURL:(id)arg1;
- (void)setActiveResources:(id)arg1;
- (void)setActiveScales:(int*)arg1 count:(unsigned long long)arg2;
- (void)setActiveScenarios:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAddressCorrectionInitURL:(id)arg1;
- (void)setAddressCorrectionUpdateURL:(id)arg1;
- (void)setAnnouncementsSupportedLanguages:(id)arg1;
- (void)setAnnouncementsURL:(id)arg1;
- (void)setAttributions:(id)arg1;
- (void)setAuthProxyURL:(id)arg1;
- (void)setBackgroundDispatcherURL:(id)arg1;
- (void)setBackgroundRevGeoURL:(id)arg1;
- (void)setBatchReverseGeocoderURL:(id)arg1;
- (void)setBatchTrafficProbeURL:(id)arg1;
- (void)setBluePOIURL:(id)arg1;
- (void)setBusinessPortalBaseURL:(id)arg1;
- (void)setDataSet:(id)arg1;
- (void)setDirectionsURL:(id)arg1;
- (void)setDispatcherURL:(id)arg1;
- (void)setEtaURL:(id)arg1;
- (void)setFlyoverRegionVersions:(id)arg1;
- (void)setFontChecksums:(id)arg1;
- (void)setFonts:(id)arg1;
- (void)setHasLocationShiftVersion:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setIconChecksums:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setLocationShiftEnabledRegions:(id)arg1;
- (void)setLocationShiftVersion:(unsigned int)arg1;
- (void)setLogMessageUsageURL:(id)arg1;
- (void)setLogMessageUsageV3URL:(id)arg1;
- (void)setModelVersion:(unsigned int)arg1;
- (void)setPolyLocationShiftURL:(id)arg1;
- (void)setProactiveRoutingURL:(id)arg1;
- (void)setProblemCategoriesURL:(id)arg1;
- (void)setProblemOptInURL:(id)arg1;
- (void)setProblemStatusURL:(id)arg1;
- (void)setProblemSubmissionURL:(id)arg1;
- (void)setRealtimeTrafficProbeURL:(id)arg1;
- (void)setRegionalResourceRegions:(id)arg1;
- (void)setRegionalResourceTiles:(id)arg1;
- (void)setRegionalResources:(id)arg1;
- (void)setRegionalResourcesURL:(id)arg1;
- (void)setReleaseInfo:(id)arg1;
- (void)setReserved:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setResourcesURL:(id)arg1;
- (void)setReverseGeocoderVersionsURL:(id)arg1;
- (void)setSearchAttributionManifestURL:(id)arg1;
- (void)setSimpleETAURL:(id)arg1;
- (void)setSpatialLookupURL:(id)arg1;
- (void)setStaleResources:(id)arg1;
- (void)setStyleSheetChecksums:(id)arg1;
- (void)setStyleSheets:(id)arg1;
- (void)setTextureChecksums:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setTileSets:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setVersionManifest:(id)arg1;
- (void)setWifiConnectionQualityProbeURL:(id)arg1;
- (void)setXmlChecksums:(id)arg1;
- (void)setXmls:(id)arg1;
- (id)simpleETAURL;
- (id)spatialLookupURL;
- (id)staleResourceAtIndex:(unsigned long long)arg1;
- (id)staleResources;
- (unsigned long long)staleResourcesCount;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksums;
- (unsigned long long)styleSheetChecksumsCount;
- (id)styleSheets;
- (unsigned long long)styleSheetsCount;
- (bool)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)textureAtIndex:(unsigned long long)arg1;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (id)textureChecksums;
- (unsigned long long)textureChecksumsCount;
- (id)textures;
- (unsigned long long)texturesCount;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (id)tileSets;
- (unsigned long long)tileSetsCount;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)uniqueIdentifier;
- (id)unknownFields;
- (unsigned int)versionForFlyoverRegion:(unsigned int)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (id)versionManifest;
- (id)wifiConnectionQualityProbeURL;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (id)xmlChecksums;
- (unsigned long long)xmlChecksumsCount;
- (id)xmls;
- (unsigned long long)xmlsCount;

@end
