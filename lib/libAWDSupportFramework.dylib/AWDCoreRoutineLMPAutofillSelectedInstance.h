/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLMPAutofillSelectedInstance : PBCodable <NSCopying> {
    NSString * _eventId;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int interaction : 1; 
    }  _has;
    int  _interaction;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *eventId;
@property (nonatomic, readonly) bool hasEventId;
@property (nonatomic) bool hasInteraction;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int interaction;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventId;
- (bool)hasEventId;
- (bool)hasInteraction;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (int)interaction;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventId:(id)arg1;
- (void)setHasInteraction:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInteraction:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
