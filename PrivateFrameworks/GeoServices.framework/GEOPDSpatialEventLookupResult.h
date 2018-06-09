/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialEventLookupResult : PBCodable <NSCopying> {
    NSMutableArray * _events;
    struct { 
        unsigned int statusCode : 1; 
    }  _has;
    int  _statusCode;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *events;
@property (nonatomic) bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)eventType;

- (void).cxx_destruct;
- (int)StringAsStatusCode:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)clearEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventAtIndex:(unsigned long long)arg1;
- (id)events;
- (unsigned long long)eventsCount;
- (bool)hasStatusCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvents:(id)arg1;
- (void)setHasStatusCode:(bool)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (id)statusCodeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
