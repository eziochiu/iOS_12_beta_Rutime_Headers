/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {
    long long  _displayStyle;
    <GEOTransitLine> * _line;
    NSSet * _nextStopIDs;
    GEOPDDepartureSequence * _sequence;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departures;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) long long displayStyle;
@property (nonatomic, readonly) NSArray *frequencies;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *headsign;
@property (nonatomic, readonly) bool isLowFrequency;
@property (nonatomic, readonly) <GEOTransitLine> *line;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(id /* block */)arg2;
- (id)departures;
- (id)departuresValidForDate:(id)arg1;
- (id)direction;
- (long long)displayStyle;
- (id)firstDepartureAfterDate:(id)arg1;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
- (id)firstDepartureOnOrAfterDate:(id)arg1;
- (id)firstDepartureValidForDate:(id)arg1;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
- (id)frequencies;
- (double)frequencyForSortingAtDate:(id)arg1;
- (id)frequencyToDescribeAtDate:(id)arg1;
- (bool)hasFrequencyAtDate:(id)arg1;
- (id)headsign;
- (id)initWithSequence:(id)arg1 line:(id)arg2 pbLine:(id)arg3;
- (bool)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
- (bool)isLowFrequency;
- (bool)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)line;
- (id)nextStopIDs;
- (unsigned long long)numberOfDeparturesAfterDate:(id)arg1;
- (id)operatingHours;
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;

@end
