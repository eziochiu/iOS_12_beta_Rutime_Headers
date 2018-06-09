/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitStation : PBCodable <GEOTransitNamedItem, NSCopying> {
    struct { 
        unsigned int muid : 1; 
        unsigned int stationIndex : 1; 
        unsigned int structureType : 1; 
    }  _has;
    GEOLatLng * _location;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    unsigned int  _stationIndex;
    int  _structureType;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _zoomNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNameDisplayString;
@property (nonatomic) bool hasStationIndex;
@property (nonatomic) bool hasStructureType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOLatLng *location;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic) unsigned int stationIndex;
@property (nonatomic) int structureType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *zoomNames;

+ (Class)zoomNameType;

- (void).cxx_destruct;
- (int)StringAsStructureType:(id)arg1;
- (void)addZoomName:(id)arg1;
- (id)bestName;
- (void)clearZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocation;
- (bool)hasMuid;
- (bool)hasNameDisplayString;
- (bool)hasStationIndex;
- (bool)hasStructureType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)location;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (bool)readFrom:(id)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasStationIndex:(bool)arg1;
- (void)setHasStructureType:(bool)arg1;
- (void)setLocation:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStationIndex:(unsigned int)arg1;
- (void)setStructureType:(int)arg1;
- (void)setZoomNames:(id)arg1;
- (unsigned int)stationIndex;
- (int)structureType;
- (id)structureTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (id)zoomNames;
- (unsigned long long)zoomNamesCount;

@end
