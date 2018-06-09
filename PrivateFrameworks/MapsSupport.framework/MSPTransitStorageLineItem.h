/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying> {
    NSMutableArray * _incidents;
    MSPTransitStorageLine * _line;
    GEOMapRegion * _storedMapRegion;
    MSPTransitStorageAttribution * _transitAttribution;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *alternateArtwork;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *artwork;
@property (nonatomic, readonly) <GEOTransitAttribution> *attribution;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long departureTimeDisplayStyle;
@property (nonatomic, readonly) bool departuresAreVehicleSpecific;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (nonatomic, readonly) bool hasEncyclopedicInfo;
@property (nonatomic, readonly) bool hasIncidentComponent;
@property (nonatomic, readonly) bool hasLine;
@property (nonatomic, readonly) bool hasLineColorString;
@property (nonatomic, readonly) bool hasStoredMapRegion;
@property (nonatomic, readonly) bool hasTransitAttribution;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (nonatomic, readonly) NSArray *incidents;
@property (nonatomic, retain) NSMutableArray *incidents;
@property (nonatomic, readonly) bool isIncidentsTTLExpired;
@property (nonatomic, readonly) NSArray *labelItems;
@property (nonatomic, retain) MSPTransitStorageLine *line;
@property (nonatomic, readonly) NSString *lineColorString;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) <GEOTransitArtworkDataSource> *modeArtwork;
@property (nonatomic, readonly) unsigned long long muid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (nonatomic, readonly) bool showVehicleNumber;
@property (nonatomic, retain) GEOMapRegion *storedMapRegion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitSystem> *system;
@property (nonatomic, retain) MSPTransitStorageAttribution *transitAttribution;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)incidentsType;

- (void).cxx_destruct;
- (void)addIncidents:(id)arg1;
- (id)alternateArtwork;
- (id)artwork;
- (id)attribution;
- (void)clearIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)departureTimeDisplayStyle;
- (bool)departuresAreVehicleSpecific;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encyclopedicInfo;
- (bool)hasEncyclopedicInfo;
- (bool)hasIncidentComponent;
- (bool)hasLine;
- (bool)hasLineColorString;
- (bool)hasStoredMapRegion;
- (bool)hasTransitAttribution;
- (unsigned long long)hash;
- (id)identifier;
- (id)incidents;
- (id)incidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentsCount;
- (id)initWithLineItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isIncidentsTTLExpired;
- (id)labelItems;
- (id)line;
- (id)lineColorString;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)name;
- (id)operatingHours;
- (bool)readFrom:(id)arg1;
- (void)setIncidents:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setStoredMapRegion:(id)arg1;
- (void)setTransitAttribution:(id)arg1;
- (bool)showVehicleNumber;
- (id)storedMapRegion;
- (id)system;
- (id)transitAttribution;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
