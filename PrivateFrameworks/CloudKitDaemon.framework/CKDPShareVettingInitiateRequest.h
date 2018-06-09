/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareVettingInitiateRequest : PBRequest <NSCopying> {
    NSString * _baseToken;
    NSData * _encryptedKey;
    NSString * _participantId;
    CKDPShareIdentifier * _shareId;
}

@property (nonatomic, retain) NSString *baseToken;
@property (nonatomic, retain) NSData *encryptedKey;
@property (nonatomic, readonly) bool hasBaseToken;
@property (nonatomic, readonly) bool hasEncryptedKey;
@property (nonatomic, readonly) bool hasParticipantId;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, retain) NSString *participantId;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

+ (id)options;

- (void).cxx_destruct;
- (id)baseToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedKey;
- (bool)hasBaseToken;
- (bool)hasEncryptedKey;
- (bool)hasParticipantId;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantId;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setBaseToken:(id)arg1;
- (void)setEncryptedKey:(id)arg1;
- (void)setParticipantId:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
