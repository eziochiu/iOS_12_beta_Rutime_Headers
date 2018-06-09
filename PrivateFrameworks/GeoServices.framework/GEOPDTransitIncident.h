/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitIncident : PBCodable <NSCopying> {
    NSMutableArray * _transitIncidents;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *transitIncidents;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)transitIncidentType;
+ (id)transitIncidentsForPlaceData:(id)arg1 hasTransitIncidentComponent:(bool*)arg2;
+ (id)transitIncidentsTTLExpirationDateForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addTransitIncident:(id)arg1;
- (void)clearTransitIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTransitIncidents:(id)arg1;
- (id)transitIncidentAtIndex:(unsigned long long)arg1;
- (id)transitIncidents;
- (unsigned long long)transitIncidentsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
