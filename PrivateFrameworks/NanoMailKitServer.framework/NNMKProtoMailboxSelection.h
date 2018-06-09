/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoMailboxSelection : PBCodable <NSCopying> {
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
    }  _has;
    NSMutableArray * _mailboxes;
}

@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, retain) NSMutableArray *mailboxes;

+ (Class)mailboxesType;
+ (id)protoMailboxSelectionFromMailboxSelection:(id)arg1 fullSyncVersion:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)addMailboxes:(id)arg1;
- (void)clearMailboxes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailboxSelection;
- (id)mailboxes;
- (id)mailboxesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mailboxesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setMailboxes:(id)arg1;
- (void)writeTo:(id)arg1;

@end
