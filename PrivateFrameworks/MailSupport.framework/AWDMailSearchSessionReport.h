/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailSearchSessionReport : PBCodable <NSCopying> {
    int  _emailProvider;
    NSMutableArray * _engagements;
    struct { 
        unsigned int messagesLeftToIndex : 1; 
        unsigned int percentOfMessagesIndexed : 1; 
        unsigned int timestamp : 1; 
        unsigned int emailProvider : 1; 
    }  _has;
    unsigned long long  _messagesLeftToIndex;
    unsigned long long  _percentOfMessagesIndexed;
    unsigned long long  _timestamp;
}

@property (nonatomic) int emailProvider;
@property (nonatomic, retain) NSMutableArray *engagements;
@property (nonatomic) bool hasEmailProvider;
@property (nonatomic) bool hasMessagesLeftToIndex;
@property (nonatomic) bool hasPercentOfMessagesIndexed;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long messagesLeftToIndex;
@property (nonatomic) unsigned long long percentOfMessagesIndexed;
@property (nonatomic) unsigned long long timestamp;

+ (Class)engagementsType;

- (void).cxx_destruct;
- (int)StringAsEmailProvider:(id)arg1;
- (void)addEngagements:(id)arg1;
- (void)clearEngagements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)emailProvider;
- (id)emailProviderAsString:(int)arg1;
- (id)engagements;
- (id)engagementsAtIndex:(unsigned long long)arg1;
- (unsigned long long)engagementsCount;
- (bool)hasEmailProvider;
- (bool)hasMessagesLeftToIndex;
- (bool)hasPercentOfMessagesIndexed;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)messagesLeftToIndex;
- (unsigned long long)percentOfMessagesIndexed;
- (bool)readFrom:(id)arg1;
- (void)setEmailProvider:(int)arg1;
- (void)setEngagements:(id)arg1;
- (void)setHasEmailProvider:(bool)arg1;
- (void)setHasMessagesLeftToIndex:(bool)arg1;
- (void)setHasPercentOfMessagesIndexed:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMessagesLeftToIndex:(unsigned long long)arg1;
- (void)setPercentOfMessagesIndexed:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
