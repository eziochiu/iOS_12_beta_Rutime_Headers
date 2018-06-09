/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCommonOptions : PBCodable <NSCopying> {
    bool  _excludeGuidance;
    struct { 
        unsigned int excludeGuidance : 1; 
        unsigned int includeSummaryForPredictedDestination : 1; 
        unsigned int includeTravelTimeAggressive : 1; 
        unsigned int includeTravelTimeConservative : 1; 
        unsigned int includeTravelTimeEstimate : 1; 
    }  _has;
    bool  _includeSummaryForPredictedDestination;
    bool  _includeTravelTimeAggressive;
    bool  _includeTravelTimeConservative;
    bool  _includeTravelTimeEstimate;
}

@property (nonatomic) bool excludeGuidance;
@property (nonatomic) bool hasExcludeGuidance;
@property (nonatomic) bool hasIncludeSummaryForPredictedDestination;
@property (nonatomic) bool hasIncludeTravelTimeAggressive;
@property (nonatomic) bool hasIncludeTravelTimeConservative;
@property (nonatomic) bool hasIncludeTravelTimeEstimate;
@property (nonatomic) bool includeSummaryForPredictedDestination;
@property (nonatomic) bool includeTravelTimeAggressive;
@property (nonatomic) bool includeTravelTimeConservative;
@property (nonatomic) bool includeTravelTimeEstimate;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)excludeGuidance;
- (bool)hasExcludeGuidance;
- (bool)hasIncludeSummaryForPredictedDestination;
- (bool)hasIncludeTravelTimeAggressive;
- (bool)hasIncludeTravelTimeConservative;
- (bool)hasIncludeTravelTimeEstimate;
- (unsigned long long)hash;
- (bool)includeSummaryForPredictedDestination;
- (bool)includeTravelTimeAggressive;
- (bool)includeTravelTimeConservative;
- (bool)includeTravelTimeEstimate;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setExcludeGuidance:(bool)arg1;
- (void)setHasExcludeGuidance:(bool)arg1;
- (void)setHasIncludeSummaryForPredictedDestination:(bool)arg1;
- (void)setHasIncludeTravelTimeAggressive:(bool)arg1;
- (void)setHasIncludeTravelTimeConservative:(bool)arg1;
- (void)setHasIncludeTravelTimeEstimate:(bool)arg1;
- (void)setIncludeSummaryForPredictedDestination:(bool)arg1;
- (void)setIncludeTravelTimeAggressive:(bool)arg1;
- (void)setIncludeTravelTimeConservative:(bool)arg1;
- (void)setIncludeTravelTimeEstimate:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
