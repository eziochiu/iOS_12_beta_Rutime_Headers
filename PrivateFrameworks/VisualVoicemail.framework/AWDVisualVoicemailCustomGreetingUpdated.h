/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface AWDVisualVoicemailCustomGreetingUpdated : PBCodable <NSCopying> {
    unsigned long long  _failureReason;
    struct { 
        unsigned int failureReason : 1; 
        unsigned int result : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _result;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long failureReason;
@property (nonatomic) bool hasFailureReason;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long result;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)failureReason;
- (bool)hasFailureReason;
- (bool)hasResult;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)result;
- (void)setFailureReason:(unsigned long long)arg1;
- (void)setHasFailureReason:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResult:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
