/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineLocation : PBCodable <NSCopying> {
    double  _confidence;
    NSData * _geoData;
    struct { 
        unsigned int confidence : 1; 
        unsigned int latitude : 1; 
        unsigned int longitude : 1; 
        unsigned int uncertainty : 1; 
        unsigned int locationOfInterestType : 1; 
    }  _has;
    double  _latitude;
    int  _locationOfInterestType;
    double  _longitude;
    double  _uncertainty;
    NSString * _uuid;
    NSMutableArray * _visits;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSData *geoData;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasGeoData;
@property (nonatomic) bool hasLatitude;
@property (nonatomic) bool hasLocationOfInterestType;
@property (nonatomic) bool hasLongitude;
@property (nonatomic) bool hasUncertainty;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) double latitude;
@property (nonatomic) int locationOfInterestType;
@property (nonatomic) double longitude;
@property (nonatomic) double uncertainty;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSMutableArray *visits;

+ (Class)visitsType;

- (void).cxx_destruct;
- (int)StringAsLocationOfInterestType:(id)arg1;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoData;
- (bool)hasConfidence;
- (bool)hasGeoData;
- (bool)hasLatitude;
- (bool)hasLocationOfInterestType;
- (bool)hasLongitude;
- (bool)hasUncertainty;
- (bool)hasUuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (int)locationOfInterestType;
- (id)locationOfInterestTypeAsString:(int)arg1;
- (double)longitude;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setGeoData:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasLatitude:(bool)arg1;
- (void)setHasLocationOfInterestType:(bool)arg1;
- (void)setHasLongitude:(bool)arg1;
- (void)setHasUncertainty:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLocationOfInterestType:(int)arg1;
- (void)setLongitude:(double)arg1;
- (void)setUncertainty:(double)arg1;
- (void)setUuid:(id)arg1;
- (void)setVisits:(id)arg1;
- (double)uncertainty;
- (id)uuid;
- (id)visits;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)writeTo:(id)arg1;

@end
