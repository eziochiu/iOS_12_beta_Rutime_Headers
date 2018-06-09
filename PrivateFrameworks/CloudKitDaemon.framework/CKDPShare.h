/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShare : PBCodable <NSCopying> {
    bool  _anonymousPublicAccess;
    NSString * _displayedHostname;
    NSString * _etag;
    struct { 
        unsigned int publicAccess : 1; 
        unsigned int anonymousPublicAccess : 1; 
        unsigned int publisherModel : 1; 
    }  _has;
    NSMutableArray * _invitedKeyToRemoves;
    CKDPProtectionInfo * _invitedPcs;
    NSString * _origin;
    NSMutableArray * _participants;
    NSMutableArray * _potentialMatchs;
    int  _publicAccess;
    bool  _publisherModel;
    CKDPProtectionInfo * _selfAddedPcs;
    CKDPShareIdentifier * _shareId;
    NSData * _shortTokenHash;
    NSString * _shortTokenRoutingKey;
}

@property (nonatomic) bool anonymousPublicAccess;
@property (nonatomic, retain) NSString *displayedHostname;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic) bool hasAnonymousPublicAccess;
@property (nonatomic, readonly) bool hasDisplayedHostname;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasInvitedPcs;
@property (nonatomic, readonly) bool hasOrigin;
@property (nonatomic) bool hasPublicAccess;
@property (nonatomic) bool hasPublisherModel;
@property (nonatomic, readonly) bool hasSelfAddedPcs;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, readonly) bool hasShortTokenHash;
@property (nonatomic, readonly) bool hasShortTokenRoutingKey;
@property (nonatomic, retain) NSMutableArray *invitedKeyToRemoves;
@property (nonatomic, retain) CKDPProtectionInfo *invitedPcs;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, retain) NSMutableArray *participants;
@property (nonatomic, retain) NSMutableArray *potentialMatchs;
@property (nonatomic) int publicAccess;
@property (nonatomic) bool publisherModel;
@property (nonatomic, retain) CKDPProtectionInfo *selfAddedPcs;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;
@property (nonatomic, retain) NSData *shortTokenHash;
@property (nonatomic, retain) NSString *shortTokenRoutingKey;

+ (Class)invitedKeyToRemoveType;
+ (Class)participantType;
+ (Class)potentialMatchType;

- (void).cxx_destruct;
- (int)StringAsPublicAccess:(id)arg1;
- (id)_publicAccessCKLogValue;
- (void)addInvitedKeyToRemove:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addPotentialMatch:(id)arg1;
- (bool)anonymousPublicAccess;
- (void)clearInvitedKeyToRemoves;
- (void)clearParticipants;
- (void)clearPotentialMatchs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayedHostname;
- (id)etag;
- (bool)hasAnonymousPublicAccess;
- (bool)hasDisplayedHostname;
- (bool)hasEtag;
- (bool)hasInvitedPcs;
- (bool)hasOrigin;
- (bool)hasPublicAccess;
- (bool)hasPublisherModel;
- (bool)hasSelfAddedPcs;
- (bool)hasShareId;
- (bool)hasShortTokenHash;
- (bool)hasShortTokenRoutingKey;
- (unsigned long long)hash;
- (id)invitedKeyToRemoveAtIndex:(unsigned long long)arg1;
- (id)invitedKeyToRemoves;
- (unsigned long long)invitedKeyToRemovesCount;
- (id)invitedPcs;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (id)participantAtIndex:(unsigned long long)arg1;
- (id)participants;
- (unsigned long long)participantsCount;
- (id)potentialMatchAtIndex:(unsigned long long)arg1;
- (id)potentialMatchs;
- (unsigned long long)potentialMatchsCount;
- (int)publicAccess;
- (id)publicAccessAsString:(int)arg1;
- (bool)publisherModel;
- (bool)readFrom:(id)arg1;
- (id)selfAddedPcs;
- (void)setAnonymousPublicAccess:(bool)arg1;
- (void)setDisplayedHostname:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setHasAnonymousPublicAccess:(bool)arg1;
- (void)setHasPublicAccess:(bool)arg1;
- (void)setHasPublisherModel:(bool)arg1;
- (void)setInvitedKeyToRemoves:(id)arg1;
- (void)setInvitedPcs:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPotentialMatchs:(id)arg1;
- (void)setPublicAccess:(int)arg1;
- (void)setPublisherModel:(bool)arg1;
- (void)setSelfAddedPcs:(id)arg1;
- (void)setShareId:(id)arg1;
- (void)setShortTokenHash:(id)arg1;
- (void)setShortTokenRoutingKey:(id)arg1;
- (id)shareId;
- (id)shortTokenHash;
- (id)shortTokenRoutingKey;
- (void)writeTo:(id)arg1;

@end
