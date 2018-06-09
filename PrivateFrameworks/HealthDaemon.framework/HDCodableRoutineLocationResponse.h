/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableRoutineLocationResponse : PBCodable <NSCopying> {
    HDCodableRoutineLocation * _locationOfInterest;
}

@property (nonatomic, readonly) bool hasLocationOfInterest;
@property (nonatomic, retain) HDCodableRoutineLocation *locationOfInterest;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocationOfInterest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationOfInterest;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocationOfInterest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
