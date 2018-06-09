/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {
    MSPDirectionsSearch * _directionsSearch;
    struct { 
        unsigned int position : 1; 
        unsigned int timestamp : 1; 
        unsigned int searchType : 1; 
        unsigned int tracksRAPRecordingOnly : 1; 
    }  _has;
    NSString * _identifier;
    MSPPlaceDisplay * _placeDisplay;
    double  _position;
    MSPQuerySearch * _querySearch;
    MSPRidesharingTrip * _ridesharingTrip;
    int  _searchType;
    double  _timestamp;
    bool  _tracksRAPRecordingOnly;
    MSPTransitStorageLineItem * _transitLineItem;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) MSPDirectionsSearch *directionsSearch;
@property (nonatomic, readonly) bool hasDirectionsSearch;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPlaceDisplay;
@property (nonatomic) bool hasPosition;
@property (nonatomic, readonly) bool hasQuerySearch;
@property (nonatomic, readonly) bool hasRidesharingTrip;
@property (nonatomic) bool hasSearchType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTracksRAPRecordingOnly;
@property (nonatomic, readonly) bool hasTransitLineItem;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) MSPPlaceDisplay *placeDisplay;
@property (nonatomic) double position;
@property (nonatomic, retain) MSPQuerySearch *querySearch;
@property (nonatomic, retain) MSPRidesharingTrip *ridesharingTrip;
@property (nonatomic) int searchType;
@property (nonatomic) double timestamp;
@property (nonatomic) bool tracksRAPRecordingOnly;
@property (nonatomic, retain) MSPTransitStorageLineItem *transitLineItem;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsSearchType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsSearch;
- (bool)hasDirectionsSearch;
- (bool)hasIdentifier;
- (bool)hasPlaceDisplay;
- (bool)hasPosition;
- (bool)hasQuerySearch;
- (bool)hasRidesharingTrip;
- (bool)hasSearchType;
- (bool)hasTimestamp;
- (bool)hasTracksRAPRecordingOnly;
- (bool)hasTransitLineItem;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeDisplay;
- (double)position;
- (id)querySearch;
- (bool)readFrom:(id)arg1;
- (id)ridesharingTrip;
- (int)searchType;
- (id)searchTypeAsString:(int)arg1;
- (void)setDirectionsSearch:(id)arg1;
- (void)setHasPosition:(bool)arg1;
- (void)setHasSearchType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTracksRAPRecordingOnly:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPlaceDisplay:(id)arg1;
- (void)setPosition:(double)arg1;
- (void)setQuerySearch:(id)arg1;
- (void)setRidesharingTrip:(id)arg1;
- (void)setSearchType:(int)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setTracksRAPRecordingOnly:(bool)arg1;
- (void)setTransitLineItem:(id)arg1;
- (double)timestamp;
- (bool)tracksRAPRecordingOnly;
- (id)transitLineItem;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
