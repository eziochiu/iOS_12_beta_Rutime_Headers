/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAltitudeManifest : NSObject <GEOResourceManifestTileGroupObserver, NSXMLParserDelegate> {
    GEOAltitudeManifestReserved * _reserved;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_reloadManifest;
- (id)availableRegions;
- (void)commonInit;
- (unsigned int)dataVersionForRegion:(unsigned int)arg1;
- (void)dealloc;
- (bool)hasDataVersionForRegion:(unsigned int)arg1;
- (id)init;
- (id)initWithoutObserver;
- (bool)isValidTourId:(unsigned long long)arg1;
- (id)nameForRegion:(unsigned int)arg1;
- (void)parseManifest:(id)arg1;
- (bool)parseXml:(id)arg1;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)tourIdsForRegion:(unsigned int)arg1;
- (id)tripIdsForRegion:(unsigned int)arg1;
- (unsigned int)versionForRegion:(unsigned int)arg1;

@end
