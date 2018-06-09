/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitSoftwareUpdateFetched : PBCodable <NSCopying> {
    unsigned int  _duration;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int resultErrorCode : 1; 
        unsigned int source : 1; 
        unsigned int wasNewUpdateFetched : 1; 
    }  _has;
    unsigned int  _resultErrorCode;
    int  _source;
    unsigned long long  _timestamp;
    bool  _wasNewUpdateFetched;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasResultErrorCode;
@property (nonatomic) bool hasSource;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWasNewUpdateFetched;
@property (nonatomic) unsigned int resultErrorCode;
@property (nonatomic) int source;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool wasNewUpdateFetched;

- (int)StringAsSource:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasResultErrorCode;
- (bool)hasSource;
- (bool)hasTimestamp;
- (bool)hasWasNewUpdateFetched;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)resultErrorCode;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasResultErrorCode:(bool)arg1;
- (void)setHasSource:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWasNewUpdateFetched:(bool)arg1;
- (void)setResultErrorCode:(unsigned int)arg1;
- (void)setSource:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWasNewUpdateFetched:(bool)arg1;
- (int)source;
- (id)sourceAsString:(int)arg1;
- (unsigned long long)timestamp;
- (bool)wasNewUpdateFetched;
- (void)writeTo:(id)arg1;

@end
