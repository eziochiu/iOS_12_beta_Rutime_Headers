/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDTransitSchedule : PBCodable <NSCopying> {
    GEOPDDeparturePredicate * _departurePredicateCountdown;
    GEOPDDeparturePredicate * _departurePredicateStamp;
    NSMutableArray * _departureSequences;
    struct { 
        unsigned int operatingHoursRange : 1; 
    }  _has;
    struct GEOPDTimeRange { 
        unsigned int _duration; 
        unsigned int _startTime; 
        struct { 
            unsigned int duration : 1; 
            unsigned int startTime : 1; 
        } _has; 
    }  _operatingHoursRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPDDeparturePredicate *departurePredicateCountdown;
@property (nonatomic, retain) GEOPDDeparturePredicate *departurePredicateStamp;
@property (nonatomic, retain) NSMutableArray *departureSequences;
@property (nonatomic, readonly) bool hasDeparturePredicateCountdown;
@property (nonatomic, readonly) bool hasDeparturePredicateStamp;
@property (nonatomic) bool hasOperatingHoursRange;
@property (nonatomic) struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } operatingHoursRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)departureSequenceType;
+ (id)transitScheduleForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (void)addDepartureSequence:(id)arg1;
- (void)clearDepartureSequences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)departurePredicateCountdown;
- (id)departurePredicateStamp;
- (id)departureSequenceAtIndex:(unsigned long long)arg1;
- (id)departureSequences;
- (unsigned long long)departureSequencesCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeparturePredicateCountdown;
- (bool)hasDeparturePredicateStamp;
- (bool)hasOperatingHoursRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })operatingHoursRange;
- (bool)readFrom:(id)arg1;
- (void)setDeparturePredicateCountdown:(id)arg1;
- (void)setDeparturePredicateStamp:(id)arg1;
- (void)setDepartureSequences:(id)arg1;
- (void)setHasOperatingHoursRange:(bool)arg1;
- (void)setOperatingHoursRange:(struct GEOPDTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
