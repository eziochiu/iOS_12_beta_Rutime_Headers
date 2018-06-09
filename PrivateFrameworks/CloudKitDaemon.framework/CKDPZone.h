/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZone : PBCodable <NSCopying> {
    NSData * _encryptedLastZoneishPCSRollDate;
    CKDPProtectionInfo * _protectionInfo;
    CKDPProtectionInfo * _recordProtectionInfo;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) NSData *encryptedLastZoneishPCSRollDate;
@property (nonatomic, readonly) bool hasEncryptedLastZoneishPCSRollDate;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasRecordProtectionInfo;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPProtectionInfo *recordProtectionInfo;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedLastZoneishPCSRollDate;
- (bool)hasEncryptedLastZoneishPCSRollDate;
- (bool)hasProtectionInfo;
- (bool)hasRecordProtectionInfo;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (id)recordProtectionInfo;
- (void)setEncryptedLastZoneishPCSRollDate:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRecordProtectionInfo:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end