/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface AWDVisualVoicemailTranscriptionStatusChanged : PBCodable <NSCopying> {
    unsigned long long  _failureReason;
    struct { 
        unsigned int failureReason : 1; 
        unsigned int status : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _status;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long failureReason;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)failureReason;
- (bool)hasFailureReason;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFailureReason:(unsigned long long)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)status;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
