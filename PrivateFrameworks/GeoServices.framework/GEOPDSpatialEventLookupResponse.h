/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDSpatialEventLookupResponse : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _categorys;
    GEOLatLng * _center;
    NSMutableArray * _eventDateTimes;
    GEOPDMapsIdentifier * _eventId;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) int*categorys;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, retain) GEOLatLng *center;
@property (nonatomic, retain) NSMutableArray *eventDateTimes;
@property (nonatomic, retain) GEOPDMapsIdentifier *eventId;
@property (nonatomic, readonly) bool hasCenter;
@property (nonatomic, readonly) bool hasEventId;
@property (nonatomic, readonly) bool hasTimezone;
@property (nonatomic, retain) GEOTimezone *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)eventDateTimeType;

- (void).cxx_destruct;
- (int)StringAsCategorys:(id)arg1;
- (void)addCategory:(int)arg1;
- (void)addEventDateTime:(id)arg1;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (int*)categorys;
- (id)categorysAsString:(int)arg1;
- (unsigned long long)categorysCount;
- (id)center;
- (void)clearCategorys;
- (void)clearEventDateTimes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (id)eventDateTimes;
- (unsigned long long)eventDateTimesCount;
- (id)eventId;
- (bool)hasCenter;
- (bool)hasEventId;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategorys:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCenter:(id)arg1;
- (void)setEventDateTimes:(id)arg1;
- (void)setEventId:(id)arg1;
- (void)setTimezone:(id)arg1;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
