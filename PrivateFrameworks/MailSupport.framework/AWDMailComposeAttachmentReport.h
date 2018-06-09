/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailComposeAttachmentReport : PBCodable <NSCopying> {
    long long  _drawingInsertCount;
    long long  _drawingSentCount;
    struct { 
        unsigned int drawingInsertCount : 1; 
        unsigned int drawingSentCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int messageSent : 1; 
    }  _has;
    bool  _messageSent;
    unsigned long long  _timestamp;
}

@property (nonatomic) long long drawingInsertCount;
@property (nonatomic) long long drawingSentCount;
@property (nonatomic) bool hasDrawingInsertCount;
@property (nonatomic) bool hasDrawingSentCount;
@property (nonatomic) bool hasMessageSent;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool messageSent;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)drawingInsertCount;
- (long long)drawingSentCount;
- (bool)hasDrawingInsertCount;
- (bool)hasDrawingSentCount;
- (bool)hasMessageSent;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)messageSent;
- (bool)readFrom:(id)arg1;
- (void)setDrawingInsertCount:(long long)arg1;
- (void)setDrawingSentCount:(long long)arg1;
- (void)setHasDrawingInsertCount:(bool)arg1;
- (void)setHasDrawingSentCount:(bool)arg1;
- (void)setHasMessageSent:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMessageSent:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
