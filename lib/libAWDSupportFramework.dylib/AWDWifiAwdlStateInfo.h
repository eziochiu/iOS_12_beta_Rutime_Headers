/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiAwdlStateInfo : PBCodable <NSCopying> {
    unsigned int  _count;
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int count : 1; 
    }  _has;
}

@property (nonatomic) unsigned int count;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasDuration;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasCount;
- (bool)hasDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(unsigned int)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
