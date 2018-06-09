/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableSourceAuthorization : PBCodable <NSCopying> {
    NSMutableArray * _authorizations;
    NSData * _backupUUID;
    NSData * _sourceUUID;
}

@property (nonatomic, retain) NSMutableArray *authorizations;
@property (nonatomic, retain) NSData *backupUUID;
@property (nonatomic, readonly) bool hasBackupUUID;
@property (nonatomic, readonly) bool hasSourceUUID;
@property (nonatomic, retain) NSData *sourceUUID;

+ (Class)authorizationsType;

- (void).cxx_destruct;
- (void)addAuthorizations:(id)arg1;
- (id)authorizations;
- (id)authorizationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorizationsCount;
- (id)backupUUID;
- (void)clearAuthorizations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedBackupUUID;
- (id)decodedSourceUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBackupUUID;
- (bool)hasSourceUUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAuthorizations:(id)arg1;
- (void)setBackupUUID:(id)arg1;
- (void)setSourceUUID:(id)arg1;
- (id)sourceUUID;
- (void)writeTo:(id)arg1;

@end
