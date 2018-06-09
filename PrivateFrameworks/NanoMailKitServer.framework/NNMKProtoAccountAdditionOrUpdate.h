/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying> {
    NSString * _accountId;
    NSString * _defaultEmail;
    NSString * _displayName;
    NSMutableArray * _emails;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int shouldArchive : 1; 
    }  _has;
    NSString * _localId;
    NSMutableArray * _mailboxes;
    NSString * _parentId;
    bool  _shouldArchive;
    NSString * _username;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *defaultEmail;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSMutableArray *emails;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic, readonly) bool hasAccountId;
@property (nonatomic, readonly) bool hasDefaultEmail;
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic, readonly) bool hasLocalId;
@property (nonatomic, readonly) bool hasParentId;
@property (nonatomic) bool hasShouldArchive;
@property (nonatomic, readonly) bool hasUsername;
@property (nonatomic, retain) NSString *localId;
@property (nonatomic, retain) NSMutableArray *mailboxes;
@property (nonatomic, retain) NSString *parentId;
@property (nonatomic) bool shouldArchive;
@property (nonatomic, retain) NSString *username;

+ (Class)emailType;
+ (Class)mailboxesType;

- (void).cxx_destruct;
- (id)accountId;
- (void)addEmail:(id)arg1;
- (void)addMailboxes:(id)arg1;
- (void)clearEmails;
- (void)clearMailboxes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultEmail;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayName;
- (id)emailAtIndex:(unsigned long long)arg1;
- (id)emails;
- (unsigned long long)emailsCount;
- (unsigned int)fullSyncVersion;
- (bool)hasAccountId;
- (bool)hasDefaultEmail;
- (bool)hasDisplayName;
- (bool)hasFullSyncVersion;
- (bool)hasLocalId;
- (bool)hasParentId;
- (bool)hasShouldArchive;
- (bool)hasUsername;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localId;
- (id)mailboxes;
- (id)mailboxesAtIndex:(unsigned long long)arg1;
- (unsigned long long)mailboxesCount;
- (void)mergeFrom:(id)arg1;
- (id)parentId;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setDefaultEmail:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasShouldArchive:(bool)arg1;
- (void)setLocalId:(id)arg1;
- (void)setMailboxes:(id)arg1;
- (void)setParentId:(id)arg1;
- (void)setShouldArchive:(bool)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldArchive;
- (id)username;
- (void)writeTo:(id)arg1;

@end
