/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitNotificationResponseFlags : PBCodable <NSCopying> {
    bool  _alreadyDoing;
    struct { 
        unsigned int alreadyDoing : 1; 
        unsigned int poorTiming : 1; 
    }  _has;
    bool  _poorTiming;
}

@property (nonatomic) bool alreadyDoing;
@property (nonatomic) bool hasAlreadyDoing;
@property (nonatomic) bool hasPoorTiming;
@property (nonatomic) bool poorTiming;

- (bool)alreadyDoing;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlreadyDoing;
- (bool)hasPoorTiming;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)poorTiming;
- (bool)readFrom:(id)arg1;
- (void)setAlreadyDoing:(bool)arg1;
- (void)setHasAlreadyDoing:(bool)arg1;
- (void)setHasPoorTiming:(bool)arg1;
- (void)setPoorTiming:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
