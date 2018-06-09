/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDirectionIntent : PBCodable <NSCopying> {
    GEOPDResolvedItem * _destination;
    struct { 
        unsigned int transportType : 1; 
    }  _has;
    GEOPDResolvedItem * _origin;
    int  _transportType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDResolvedItem *destination;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasTransportType;
@property (nonatomic, retain) GEOPDResolvedItem *origin;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsTransportType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destination;
- (id)dictionaryRepresentation;
- (bool)hasDestination;
- (bool)hasOrigin;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (bool)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setOrigin:(id)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (id)transportTypeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
