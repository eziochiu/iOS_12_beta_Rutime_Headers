/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface AWDMailUserEngagement : PBCodable <NSCopying> {
    struct { 
        unsigned int messageAgeInWeeks : 1; 
        unsigned int topHitIndexInSpotlightList : 1; 
        unsigned int topHitIndexInTopHitsList : 1; 
        unsigned int mailboxType : 1; 
        unsigned int type : 1; 
        unsigned int isTopHitMessage : 1; 
    }  _has;
    bool  _isTopHitMessage;
    int  _mailboxType;
    long long  _messageAgeInWeeks;
    long long  _topHitIndexInSpotlightList;
    long long  _topHitIndexInTopHitsList;
    int  _type;
}

@property (nonatomic) bool hasIsTopHitMessage;
@property (nonatomic) bool hasMailboxType;
@property (nonatomic) bool hasMessageAgeInWeeks;
@property (nonatomic) bool hasTopHitIndexInSpotlightList;
@property (nonatomic) bool hasTopHitIndexInTopHitsList;
@property (nonatomic) bool hasType;
@property (nonatomic) bool isTopHitMessage;
@property (nonatomic) int mailboxType;
@property (nonatomic) long long messageAgeInWeeks;
@property (nonatomic) long long topHitIndexInSpotlightList;
@property (nonatomic) long long topHitIndexInTopHitsList;
@property (nonatomic) int type;

- (int)StringAsMailboxType:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsTopHitMessage;
- (bool)hasMailboxType;
- (bool)hasMessageAgeInWeeks;
- (bool)hasTopHitIndexInSpotlightList;
- (bool)hasTopHitIndexInTopHitsList;
- (bool)hasType;
- (unsigned long long)hash;
- (id)initWithEngagmentType:(int)arg1;
- (id)initWithEngagmentType:(int)arg1 isTopHit:(bool)arg2;
- (id)initWithEngagmentType:(int)arg1 message:(id)arg2 isTopHit:(bool)arg3 messageListIndex:(long long)arg4 spotlightListIndex:(long long)arg5;
- (id)initWithEngagmentType:(int)arg1 receivedDate:(id)arg2 mailboxType:(int)arg3 isTopHit:(bool)arg4 messageListIndex:(long long)arg5 spotlightListIndex:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isTopHitMessage;
- (int)mailboxType;
- (id)mailboxTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)messageAgeInWeeks;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTopHitMessage:(bool)arg1;
- (void)setHasMailboxType:(bool)arg1;
- (void)setHasMessageAgeInWeeks:(bool)arg1;
- (void)setHasTopHitIndexInSpotlightList:(bool)arg1;
- (void)setHasTopHitIndexInTopHitsList:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIsTopHitMessage:(bool)arg1;
- (void)setMailboxType:(int)arg1;
- (void)setMessageAgeInWeeks:(long long)arg1;
- (void)setTopHitIndexInSpotlightList:(long long)arg1;
- (void)setTopHitIndexInTopHitsList:(long long)arg1;
- (void)setType:(int)arg1;
- (long long)topHitIndexInSpotlightList;
- (long long)topHitIndexInTopHitsList;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
