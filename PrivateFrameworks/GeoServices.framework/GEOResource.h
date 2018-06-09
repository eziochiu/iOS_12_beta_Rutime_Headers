/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOResource : PBCodable <NSCopying> {
    NSData * _checksum;
    int  _connectionType;
    NSString * _filename;
    NSMutableArray * _filters;
    struct { 
        unsigned int connectionType : 1; 
        unsigned int preferWiFiAllowedStaleThreshold : 1; 
        unsigned int resourceType : 1; 
    }  _has;
    unsigned int  _preferWiFiAllowedStaleThreshold;
    struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } * _regions;
    unsigned long long  _regionsCount;
    unsigned long long  _regionsSpace;
    int  _resourceType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSData *checksum;
@property (nonatomic) int connectionType;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic, readonly) bool hasChecksum;
@property (nonatomic) bool hasConnectionType;
@property (nonatomic, readonly) bool hasFilename;
@property (nonatomic) bool hasPreferWiFiAllowedStaleThreshold;
@property (nonatomic) bool hasResourceType;
@property (nonatomic) unsigned int preferWiFiAllowedStaleThreshold;
@property (nonatomic, readonly) struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*regions;
@property (nonatomic, readonly) unsigned long long regionsCount;
@property (nonatomic) int resourceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)filterType;

- (void).cxx_destruct;
- (int)StringAsConnectionType:(id)arg1;
- (int)StringAsResourceType:(id)arg1;
- (bool)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2;
- (void)addFilter:(id)arg1;
- (void)addRegion:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })arg1;
- (id)checksum;
- (void)clearFilters;
- (void)clearRegions;
- (int)connectionType;
- (id)connectionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)filename;
- (id)filterAtIndex:(unsigned long long)arg1;
- (id)filters;
- (unsigned long long)filtersCount;
- (bool)hasChecksum;
- (bool)hasConnectionType;
- (bool)hasFilename;
- (bool)hasPreferWiFiAllowedStaleThreshold;
- (bool)hasResourceType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)preferWiFiAllowedStaleThreshold;
- (bool)readFrom:(id)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; })regionAtIndex:(unsigned long long)arg1;
- (struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)regions;
- (unsigned long long)regionsCount;
- (int)resourceType;
- (id)resourceTypeAsString:(int)arg1;
- (void)setChecksum:(id)arg1;
- (void)setConnectionType:(int)arg1;
- (void)setFilename:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setHasConnectionType:(bool)arg1;
- (void)setHasPreferWiFiAllowedStaleThreshold:(bool)arg1;
- (void)setHasResourceType:(bool)arg1;
- (void)setPreferWiFiAllowedStaleThreshold:(unsigned int)arg1;
- (void)setRegions:(struct GEOTileSetRegion { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; }*)arg1 count:(unsigned long long)arg2;
- (void)setResourceType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
