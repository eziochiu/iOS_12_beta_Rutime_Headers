/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalTime : PBCodable <NSCopying> {
    struct { 
        unsigned int timeRoundedToHour : 1; 
        unsigned int timezoneOffsetFromGmtInHours : 1; 
    }  _has;
    unsigned long long  _timeRoundedToHour;
    float  _timezoneOffsetFromGmtInHours;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasTimeRoundedToHour;
@property (nonatomic) bool hasTimezoneOffsetFromGmtInHours;
@property (nonatomic) unsigned long long timeRoundedToHour;
@property (nonatomic) float timezoneOffsetFromGmtInHours;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimeRoundedToHour;
- (bool)hasTimezoneOffsetFromGmtInHours;
- (unsigned long long)hash;
- (id)initWithCFAbsoluteTime:(double)arg1;
- (id)initWithDate:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeRoundedToHour:(bool)arg1;
- (void)setHasTimezoneOffsetFromGmtInHours:(bool)arg1;
- (void)setTimeRoundedToHour:(unsigned long long)arg1;
- (void)setTimezoneOffsetFromGmtInHours:(float)arg1;
- (unsigned long long)timeRoundedToHour;
- (float)timezoneOffsetFromGmtInHours;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
