/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMoreMessagesForConversationRequest : PBRequest <NSCopying> {
    NSData * _beforeDateReceived;
    NSString * _conversationId;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSString * _mailboxId;
}

@property (nonatomic, retain) NSData *beforeDateReceived;
@property (nonatomic, retain) NSString *conversationId;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasBeforeDateReceived;
@property (nonatomic, readonly) bool hasConversationId;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic, retain) NSString *mailboxId;

- (void).cxx_destruct;
- (id)beforeDateReceived;
- (id)conversationId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasBeforeDateReceived;
- (bool)hasConversationId;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBeforeDateReceived:(id)arg1;
- (void)setConversationId:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
