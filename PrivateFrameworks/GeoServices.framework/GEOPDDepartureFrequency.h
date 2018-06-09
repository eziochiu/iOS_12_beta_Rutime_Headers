/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDDepartureFrequency : PBCodable <GEOTransitDepartureFrequency, NSCopying> {
    unsigned int  _displayDepartureFrequency;
    unsigned int  _earliestDepartureTime;
    struct { 
        unsigned int displayDepartureFrequency : 1; 
        unsigned int earliestDepartureTime : 1; 
        unsigned int latestDepartureTime : 1; 
        unsigned int maxDepartureFrequency : 1; 
        unsigned int minDepartureFrequency : 1; 
        unsigned int isEstimated : 1; 
    }  _has;
    bool  _isEstimated;
    unsigned int  _latestDepartureTime;
    unsigned int  _maxDepartureFrequency;
    unsigned int  _minDepartureFrequency;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int displayDepartureFrequency;
@property (nonatomic, readonly) long long displayFrequency;
@property (nonatomic) unsigned int earliestDepartureTime;
@property (nonatomic, readonly) NSDate *firstTimeInFrequency;
@property (nonatomic, readonly) double frequencyForSorting;
@property (nonatomic, readonly) long long frequencyType;
@property (nonatomic) bool hasDisplayDepartureFrequency;
@property (nonatomic) bool hasEarliestDepartureTime;
@property (nonatomic) bool hasIsEstimated;
@property (nonatomic) bool hasLatestDepartureTime;
@property (nonatomic) bool hasMaxDepartureFrequency;
@property (nonatomic) bool hasMinDepartureFrequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEstimate;
@property (nonatomic) bool isEstimated;
@property (nonatomic, readonly) NSDate *lastTimeInFrequency;
@property (nonatomic) unsigned int latestDepartureTime;
@property (nonatomic) unsigned int maxDepartureFrequency;
@property (nonatomic, readonly) long long maxFrequency;
@property (nonatomic) unsigned int minDepartureFrequency;
@property (nonatomic, readonly) long long minFrequency;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)displayDepartureFrequency;
- (long long)displayFrequency;
- (unsigned int)earliestDepartureTime;
- (id)firstTimeInFrequency;
- (double)frequencyForSorting;
- (long long)frequencyType;
- (bool)hasDisplayDepartureFrequency;
- (bool)hasEarliestDepartureTime;
- (bool)hasIsEstimated;
- (bool)hasLatestDepartureTime;
- (bool)hasMaxDepartureFrequency;
- (bool)hasMinDepartureFrequency;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEstimate;
- (bool)isEstimated;
- (bool)isValidAtDate:(id)arg1;
- (id)lastTimeInFrequency;
- (unsigned int)latestDepartureTime;
- (unsigned int)maxDepartureFrequency;
- (long long)maxFrequency;
- (void)mergeFrom:(id)arg1;
- (unsigned int)minDepartureFrequency;
- (long long)minFrequency;
- (bool)readFrom:(id)arg1;
- (void)setDisplayDepartureFrequency:(unsigned int)arg1;
- (void)setEarliestDepartureTime:(unsigned int)arg1;
- (void)setHasDisplayDepartureFrequency:(bool)arg1;
- (void)setHasEarliestDepartureTime:(bool)arg1;
- (void)setHasIsEstimated:(bool)arg1;
- (void)setHasLatestDepartureTime:(bool)arg1;
- (void)setHasMaxDepartureFrequency:(bool)arg1;
- (void)setHasMinDepartureFrequency:(bool)arg1;
- (void)setIsEstimated:(bool)arg1;
- (void)setLatestDepartureTime:(unsigned int)arg1;
- (void)setMaxDepartureFrequency:(unsigned int)arg1;
- (void)setMinDepartureFrequency:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
