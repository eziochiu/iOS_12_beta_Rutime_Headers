/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCpuLoad : PBCodable <NSCopying> {
    unsigned int  _duration;
    struct { 
        unsigned int duration : 1; 
    }  _has;
    NSString * _procName;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic, readonly) bool hasProcName;
@property (nonatomic, retain) NSString *procName;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasDuration;
- (bool)hasProcName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)procName;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setProcName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
