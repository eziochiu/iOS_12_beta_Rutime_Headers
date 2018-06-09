/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRServerInfoRecordInfo : PBCodable <NSCopying> {
    unsigned long long  _bounceNo;
    NSData * _encryptedBasename;
    NSString * _etag;
    NSString * _extension;
    struct { 
        unsigned int bounceNo : 1; 
    }  _has;
    NSString * _recordID;
    NSData * _recordProtectionInfo;
    NSString * _zoneName;
    NSData * _zoneProtectionInfo;
}

@property (nonatomic) unsigned long long bounceNo;
@property (nonatomic, retain) NSData *encryptedBasename;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *extension;
@property (nonatomic) bool hasBounceNo;
@property (nonatomic, readonly) bool hasEncryptedBasename;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasExtension;
@property (nonatomic, readonly) bool hasRecordID;
@property (nonatomic, readonly) bool hasRecordProtectionInfo;
@property (nonatomic, readonly) bool hasZoneName;
@property (nonatomic, readonly) bool hasZoneProtectionInfo;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic, retain) NSData *recordProtectionInfo;
@property (nonatomic, retain) NSString *zoneName;
@property (nonatomic, retain) NSData *zoneProtectionInfo;

- (void).cxx_destruct;
- (unsigned long long)bounceNo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)encryptedBasename;
- (id)etag;
- (id)extension;
- (bool)hasBounceNo;
- (bool)hasEncryptedBasename;
- (bool)hasEtag;
- (bool)hasExtension;
- (bool)hasRecordID;
- (bool)hasRecordProtectionInfo;
- (bool)hasZoneName;
- (bool)hasZoneProtectionInfo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordID;
- (id)recordProtectionInfo;
- (void)setBounceNo:(unsigned long long)arg1;
- (void)setEncryptedBasename:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setHasBounceNo:(bool)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordProtectionInfo:(id)arg1;
- (void)setZoneName:(id)arg1;
- (void)setZoneProtectionInfo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneName;
- (id)zoneProtectionInfo;

@end
