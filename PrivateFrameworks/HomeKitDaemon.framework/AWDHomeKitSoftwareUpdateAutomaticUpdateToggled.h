/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitSoftwareUpdateAutomaticUpdateToggled : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int isEnabled : 1; 
    }  _has;
    bool  _isEnabled;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasIsEnabled;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool isEnabled;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsEnabled;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsEnabled:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
