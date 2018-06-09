/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPoiEvent : PBCodable <NSCopying> {
    NSMutableArray * _eventCategorys;
    NSMutableArray * _eventDateTimes;
    GEOPDMapsIdentifier * _eventId;
    int  _expectedAttendance;
    struct { 
        unsigned int expectedAttendance : 1; 
    }  _has;
    GEOLocalizedString * _name;
    NSMutableArray * _performers;
    NSMutableArray * _poiIds;
    GEOTimezone * _timezone;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *eventCategorys;
@property (nonatomic, retain) NSMutableArray *eventDateTimes;
@property (nonatomic, retain) GEOPDMapsIdentifier *eventId;
@property (nonatomic) int expectedAttendance;
@property (nonatomic, readonly) bool hasEventId;
@property (nonatomic) bool hasExpectedAttendance;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasTimezone;
@property (nonatomic, retain) GEOLocalizedString *name;
@property (nonatomic, retain) NSMutableArray *performers;
@property (nonatomic, retain) NSMutableArray *poiIds;
@property (nonatomic, retain) GEOTimezone *timezone;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)eventCategoryType;
+ (Class)eventDateTimeType;
+ (Class)performerType;
+ (Class)poiIdType;

- (void).cxx_destruct;
- (void)addEventCategory:(id)arg1;
- (void)addEventDateTime:(id)arg1;
- (void)addPerformer:(id)arg1;
- (void)addPoiId:(id)arg1;
- (void)clearEventCategorys;
- (void)clearEventDateTimes;
- (void)clearPerformers;
- (void)clearPoiIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventCategoryAtIndex:(unsigned long long)arg1;
- (id)eventCategorys;
- (unsigned long long)eventCategorysCount;
- (id)eventDateTimeAtIndex:(unsigned long long)arg1;
- (id)eventDateTimes;
- (unsigned long long)eventDateTimesCount;
- (id)eventId;
- (int)expectedAttendance;
- (bool)hasEventId;
- (bool)hasExpectedAttendance;
- (bool)hasName;
- (bool)hasTimezone;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)performerAtIndex:(unsigned long long)arg1;
- (id)performers;
- (unsigned long long)performersCount;
- (id)poiIdAtIndex:(unsigned long long)arg1;
- (id)poiIds;
- (unsigned long long)poiIdsCount;
- (bool)readFrom:(id)arg1;
- (void)setEventCategorys:(id)arg1;
- (void)setEventDateTimes:(id)arg1;
- (void)setEventId:(id)arg1;
- (void)setExpectedAttendance:(int)arg1;
- (void)setHasExpectedAttendance:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPerformers:(id)arg1;
- (void)setPoiIds:(id)arg1;
- (void)setTimezone:(id)arg1;
- (id)timezone;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
