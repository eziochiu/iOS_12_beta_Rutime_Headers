/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitStop : PBCodable <GEOTransitNamedItem, NSCopying> {
    unsigned int  _hallIndex;
    struct { 
        unsigned int muid : 1; 
        unsigned int hallIndex : 1; 
        unsigned int stopIndex : 1; 
    }  _has;
    GEOLatLng * _latLng;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    unsigned int  _stopIndex;
    GEOStyleAttributes * _styleAttributes;
    NSString * _timezone;
    PBUnknownFields * _unknownFields;
    NSMutableArray * _zoomNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int hallIndex;
@property (nonatomic) bool hasHallIndex;
@property (nonatomic, readonly) bool hasLatLng;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNameDisplayString;
@property (nonatomic) bool hasStopIndex;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic, readonly) bool hasTimezone;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOLatLng *latLng;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic) unsigned int stopIndex;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSMutableArray *zoomNames;

+ (Class)zoomNameType;

- (void).cxx_destruct;
- (void)addZoomName:(id)arg1;
- (id)bestName;
- (id)bestNameWithLocale:(out id*)arg1;
- (void)clearZoomNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hallIndex;
- (bool)hasHallIndex;
- (bool)hasLatLng;
- (bool)hasMuid;
- (bool)hasNameDisplayString;
- (bool)hasStopIndex;
- (bool)hasStyleAttributes;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)latLng;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (bool)readFrom:(id)arg1;
- (void)setHallIndex:(unsigned int)arg1;
- (void)setHasHallIndex:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasStopIndex:(bool)arg1;
- (void)setLatLng:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStopIndex:(unsigned int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setTimezone:(id)arg1;
- (void)setZoomNames:(id)arg1;
- (unsigned int)stopIndex;
- (id)styleAttributes;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;
- (id)zoomNameAtIndex:(unsigned long long)arg1;
- (id)zoomNames;
- (unsigned long long)zoomNamesCount;

@end
