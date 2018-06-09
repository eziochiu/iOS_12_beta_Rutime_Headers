/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSafariSafeBrowsingUserActionAfterSeeingWarningEvent : PBCodable <NSCopying> {
    int  _action;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int action : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) int action;
@property (nonatomic) bool hasAction;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsAction:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAction:(int)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
