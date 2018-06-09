/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraStreamIDSConnSetupParameters : PBCodable <NSCopying> {
    unsigned int  _connectionComplete;
    unsigned int  _connectionRequested;
    struct { 
        unsigned int connectionComplete : 1; 
        unsigned int connectionRequested : 1; 
    }  _has;
}

@property (nonatomic) unsigned int connectionComplete;
@property (nonatomic) unsigned int connectionRequested;
@property (nonatomic) bool hasConnectionComplete;
@property (nonatomic) bool hasConnectionRequested;

- (unsigned int)connectionComplete;
- (unsigned int)connectionRequested;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConnectionComplete;
- (bool)hasConnectionRequested;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConnectionComplete:(unsigned int)arg1;
- (void)setConnectionRequested:(unsigned int)arg1;
- (void)setHasConnectionComplete:(bool)arg1;
- (void)setHasConnectionRequested:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
