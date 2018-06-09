/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying> {
    struct { 
        unsigned int reconfigurationTimestamp : 1; 
        unsigned int resolution : 1; 
    }  _has;
    unsigned int  _reconfigurationTimestamp;
    int  _resolution;
}

@property (nonatomic) bool hasReconfigurationTimestamp;
@property (nonatomic) bool hasResolution;
@property (nonatomic) unsigned int reconfigurationTimestamp;
@property (nonatomic) int resolution;

- (int)StringAsResolution:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReconfigurationTimestamp;
- (bool)hasResolution;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)reconfigurationTimestamp;
- (int)resolution;
- (id)resolutionAsString:(int)arg1;
- (void)setHasReconfigurationTimestamp:(bool)arg1;
- (void)setHasResolution:(bool)arg1;
- (void)setReconfigurationTimestamp:(unsigned int)arg1;
- (void)setResolution:(int)arg1;
- (void)writeTo:(id)arg1;

@end
