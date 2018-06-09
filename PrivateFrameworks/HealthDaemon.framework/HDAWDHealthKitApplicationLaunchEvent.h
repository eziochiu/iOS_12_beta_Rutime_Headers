/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitApplicationLaunchEvent : PBCodable <NSCopying> {
    int  _application;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int application : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int application;
@property (nonatomic) bool hasApplication;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsApplication:(id)arg1;
- (int)application;
- (id)applicationAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasApplication;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplication:(int)arg1;
- (void)setHasApplication:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
