/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardDoNotDisturbChange : PBCodable <NSCopying> {
    struct { 
        unsigned int state : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    long long  _state;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (long long)state;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
