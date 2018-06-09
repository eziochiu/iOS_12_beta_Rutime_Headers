/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAutomobileOptions : PBCodable <NSCopying> {
    struct { 
        unsigned int trafficType : 1; 
        unsigned int includeHistoricTravelTime : 1; 
        unsigned int includeStaticTravelTime : 1; 
    }  _has;
    bool  _includeHistoricTravelTime;
    bool  _includeStaticTravelTime;
    int  _trafficType;
    GEOUserPreferences * _userPreferences;
}

@property (nonatomic) bool hasIncludeHistoricTravelTime;
@property (nonatomic) bool hasIncludeStaticTravelTime;
@property (nonatomic) bool hasTrafficType;
@property (nonatomic, readonly) bool hasUserPreferences;
@property (nonatomic) bool includeHistoricTravelTime;
@property (nonatomic) bool includeStaticTravelTime;
@property (nonatomic) int trafficType;
@property (nonatomic, retain) GEOUserPreferences *userPreferences;

- (void).cxx_destruct;
- (int)StringAsTrafficType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIncludeHistoricTravelTime;
- (bool)hasIncludeStaticTravelTime;
- (bool)hasTrafficType;
- (bool)hasUserPreferences;
- (unsigned long long)hash;
- (bool)includeHistoricTravelTime;
- (bool)includeStaticTravelTime;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIncludeHistoricTravelTime:(bool)arg1;
- (void)setHasIncludeStaticTravelTime:(bool)arg1;
- (void)setHasTrafficType:(bool)arg1;
- (void)setIncludeHistoricTravelTime:(bool)arg1;
- (void)setIncludeStaticTravelTime:(bool)arg1;
- (void)setTrafficType:(int)arg1;
- (void)setUserPreferences:(id)arg1;
- (int)trafficType;
- (id)trafficTypeAsString:(int)arg1;
- (id)userPreferences;
- (void)writeTo:(id)arg1;

@end
