/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
 */

@interface AWDTinCanInCallEvent : PBCodable <NSCopying> {
    unsigned int  _eventType;
    struct { 
        unsigned int offsetTimeMs : 1; 
        unsigned int eventType : 1; 
    }  _has;
    long long  _offsetTimeMs;
}

@property (nonatomic) unsigned int eventType;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasOffsetTimeMs;
@property (nonatomic) long long offsetTimeMs;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (bool)hasEventType;
- (bool)hasOffsetTimeMs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)offsetTimeMs;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(unsigned int)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasOffsetTimeMs:(bool)arg1;
- (void)setOffsetTimeMs:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
