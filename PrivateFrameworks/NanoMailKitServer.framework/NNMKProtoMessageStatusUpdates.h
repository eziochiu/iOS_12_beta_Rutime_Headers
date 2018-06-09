/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMessageStatusUpdates : PBCodable <NSCopying> {
    NSData * _dateSynced;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int mailboxSyncVersion : 1; 
    }  _has;
    NSString * _mailboxId;
    unsigned int  _mailboxSyncVersion;
    NSMutableArray * _messageStatusUpdates;
}

@property (nonatomic, retain) NSData *dateSynced;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasDateSynced;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic) bool hasMailboxSyncVersion;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic) unsigned int mailboxSyncVersion;
@property (nonatomic, retain) NSMutableArray *messageStatusUpdates;

+ (Class)messageStatusUpdateType;

- (void).cxx_destruct;
- (void)addMessageStatusUpdate:(id)arg1;
- (void)clearMessageStatusUpdates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateSynced;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasDateSynced;
- (bool)hasFullSyncVersion;
- (bool)hasMailboxId;
- (bool)hasMailboxSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxId;
- (unsigned int)mailboxSyncVersion;
- (void)mergeFrom:(id)arg1;
- (id)messageStatusUpdateAtIndex:(unsigned long long)arg1;
- (id)messageStatusUpdates;
- (unsigned long long)messageStatusUpdatesCount;
- (bool)readFrom:(id)arg1;
- (void)setDateSynced:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasMailboxSyncVersion:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setMailboxSyncVersion:(unsigned int)arg1;
- (void)setMessageStatusUpdates:(id)arg1;
- (void)writeTo:(id)arg1;

@end
