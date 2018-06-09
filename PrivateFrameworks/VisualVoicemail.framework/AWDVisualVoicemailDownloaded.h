/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface AWDVisualVoicemailDownloaded : PBCodable <NSCopying> {
    struct { 
        unsigned int lengthInSeconds : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _lengthInSeconds;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasLengthInSeconds;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long lengthInSeconds;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLengthInSeconds;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)lengthInSeconds;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLengthInSeconds:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLengthInSeconds:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
