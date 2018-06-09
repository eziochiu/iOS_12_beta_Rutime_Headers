/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDViewportInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int mapType : 1; 
        unsigned int timeSinceMapViewportChanged : 1; 
    }  _has;
    GEOMapRegion * _mapRegion;
    int  _mapType;
    unsigned int  _timeSinceMapViewportChanged;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMapRegion;
@property (nonatomic) bool hasMapType;
@property (nonatomic) bool hasTimeSinceMapViewportChanged;
@property (nonatomic, retain) GEOMapRegion *mapRegion;
@property (nonatomic) int mapType;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)viewportInfoForTraits:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMapRegion;
- (bool)hasMapType;
- (bool)hasTimeSinceMapViewportChanged;
- (unsigned long long)hash;
- (id)initWithTraits:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mapRegion;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setHasTimeSinceMapViewportChanged:(bool)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setTimeSinceMapViewportChanged:(unsigned int)arg1;
- (unsigned int)timeSinceMapViewportChanged;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
