/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface AWDVisualVoicemailTranscriptionRated : PBCodable <NSCopying> {
    bool  _accurate;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int accurate : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool accurate;
@property (nonatomic) bool hasAccurate;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (bool)accurate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccurate;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccurate:(bool)arg1;
- (void)setHasAccurate:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
