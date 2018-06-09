/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPredictedCommuteDestination : PBCodable <NSCopying> {
    bool  _chosen;
    double  _confidenceScore;
    int  _destinationType;
    struct { 
        unsigned int confidenceScore : 1; 
        unsigned int destinationType : 1; 
        unsigned int chosen : 1; 
    }  _has;
}

@property (nonatomic) bool chosen;
@property (nonatomic) double confidenceScore;
@property (nonatomic) int destinationType;
@property (nonatomic) bool hasChosen;
@property (nonatomic) bool hasConfidenceScore;
@property (nonatomic) bool hasDestinationType;

- (int)StringAsDestinationType:(id)arg1;
- (bool)chosen;
- (double)confidenceScore;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)destinationType;
- (id)destinationTypeAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasChosen;
- (bool)hasConfidenceScore;
- (bool)hasDestinationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChosen:(bool)arg1;
- (void)setConfidenceScore:(double)arg1;
- (void)setDestinationType:(int)arg1;
- (void)setHasChosen:(bool)arg1;
- (void)setHasConfidenceScore:(bool)arg1;
- (void)setHasDestinationType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
