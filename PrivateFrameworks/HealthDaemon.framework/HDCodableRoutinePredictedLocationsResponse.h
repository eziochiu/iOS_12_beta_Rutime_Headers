/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutinePredictedLocationsResponse : PBCodable <NSCopying> {
    NSMutableArray * _predictedLocationsOfInterests;
}

@property (nonatomic, retain) NSMutableArray *predictedLocationsOfInterests;

+ (Class)predictedLocationsOfInterestType;

- (void).cxx_destruct;
- (void)addPredictedLocationsOfInterest:(id)arg1;
- (void)clearPredictedLocationsOfInterests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)predictedLocationsOfInterestAtIndex:(unsigned long long)arg1;
- (id)predictedLocationsOfInterests;
- (unsigned long long)predictedLocationsOfInterestsCount;
- (bool)readFrom:(id)arg1;
- (void)setPredictedLocationsOfInterests:(id)arg1;
- (void)writeTo:(id)arg1;

@end
