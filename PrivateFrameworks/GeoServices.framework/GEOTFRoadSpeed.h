/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTFRoadSpeed : PBCodable <NSCopying> {
    int  _color;
    float  _confidence;
    unsigned int  _decayTimeWindowInMinutes;
    float  _endOffset;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _geoIds;
    long long  _geoid;
    struct { 
        unsigned int color : 1; 
        unsigned int confidence : 1; 
        unsigned int decayTimeWindowInMinutes : 1; 
        unsigned int endOffset : 1; 
        unsigned int speedKph : 1; 
        unsigned int startOffset : 1; 
        unsigned int hidden : 1; 
    }  _has;
    bool  _hidden;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _latitudeCoordinates;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _longitudeCoordinates;
    NSData * _openlr;
    NSMutableArray * _predictedSpeeds;
    unsigned int  _speedKph;
    float  _startOffset;
    NSData * _zilch;
}

@property (nonatomic) int color;
@property (nonatomic) float confidence;
@property (nonatomic) unsigned int decayTimeWindowInMinutes;
@property (nonatomic) float endOffset;
@property (nonatomic, readonly) long long*geoIds;
@property (nonatomic, readonly) unsigned long long geoIdsCount;
@property (nonatomic) long long geoid;
@property (nonatomic) bool hasColor;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasDecayTimeWindowInMinutes;
@property (nonatomic) bool hasEndOffset;
@property (nonatomic) bool hasHidden;
@property (nonatomic, readonly) bool hasOpenlr;
@property (nonatomic) bool hasSpeedKph;
@property (nonatomic) bool hasStartOffset;
@property (nonatomic, readonly) bool hasZilch;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly) float*latitudeCoordinates;
@property (nonatomic, readonly) unsigned long long latitudeCoordinatesCount;
@property (nonatomic, readonly) float*longitudeCoordinates;
@property (nonatomic, readonly) unsigned long long longitudeCoordinatesCount;
@property (nonatomic, retain) NSData *openlr;
@property (nonatomic, retain) NSMutableArray *predictedSpeeds;
@property (nonatomic) unsigned int speedKph;
@property (nonatomic) float startOffset;
@property (nonatomic, retain) NSData *zilch;

+ (Class)predictedSpeedType;

- (void).cxx_destruct;
- (int)StringAsColor:(id)arg1;
- (void)addGeoIds:(long long)arg1;
- (void)addLatitudeCoordinates:(float)arg1;
- (void)addLongitudeCoordinates:(float)arg1;
- (void)addPredictedSpeed:(id)arg1;
- (void)clearGeoIds;
- (void)clearLatitudeCoordinates;
- (void)clearLongitudeCoordinates;
- (void)clearPredictedSpeeds;
- (int)color;
- (id)colorAsString:(int)arg1;
- (float)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)decayTimeWindowInMinutes;
- (id)description;
- (id)dictionaryRepresentation;
- (float)endOffset;
- (long long*)geoIds;
- (long long)geoIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)geoIdsCount;
- (long long)geoid;
- (bool)hasColor;
- (bool)hasConfidence;
- (bool)hasDecayTimeWindowInMinutes;
- (bool)hasEndOffset;
- (bool)hasHidden;
- (bool)hasOpenlr;
- (bool)hasSpeedKph;
- (bool)hasStartOffset;
- (bool)hasZilch;
- (unsigned long long)hash;
- (bool)hidden;
- (bool)isEqual:(id)arg1;
- (float*)latitudeCoordinates;
- (float)latitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)latitudeCoordinatesCount;
- (float*)longitudeCoordinates;
- (float)longitudeCoordinatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)longitudeCoordinatesCount;
- (void)mergeFrom:(id)arg1;
- (id)openlr;
- (id)predictedSpeedAtIndex:(unsigned long long)arg1;
- (id)predictedSpeeds;
- (unsigned long long)predictedSpeedsCount;
- (bool)readFrom:(id)arg1;
- (void)setColor:(int)arg1;
- (void)setConfidence:(float)arg1;
- (void)setDecayTimeWindowInMinutes:(unsigned int)arg1;
- (void)setEndOffset:(float)arg1;
- (void)setGeoIds:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setGeoid:(long long)arg1;
- (void)setHasColor:(bool)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasDecayTimeWindowInMinutes:(bool)arg1;
- (void)setHasEndOffset:(bool)arg1;
- (void)setHasHidden:(bool)arg1;
- (void)setHasSpeedKph:(bool)arg1;
- (void)setHasStartOffset:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setLatitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2;
- (void)setLongitudeCoordinates:(float*)arg1 count:(unsigned long long)arg2;
- (void)setOpenlr:(id)arg1;
- (void)setPredictedSpeeds:(id)arg1;
- (void)setSpeedKph:(unsigned int)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setZilch:(id)arg1;
- (unsigned int)speedKph;
- (float)startOffset;
- (void)writeTo:(id)arg1;
- (id)zilch;

@end
