/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneSaveRequest : PBRequest <NSCopying> {
    CKDPZone * _recordZone;
    NSString * _zoneProtectionInfoTag;
}

@property (nonatomic, readonly) bool hasRecordZone;
@property (nonatomic, readonly) bool hasZoneProtectionInfoTag;
@property (nonatomic, retain) CKDPZone *recordZone;
@property (nonatomic, retain) NSString *zoneProtectionInfoTag;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordZone;
- (bool)hasZoneProtectionInfoTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordZone;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRecordZone:(id)arg1;
- (void)setZoneProtectionInfoTag:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneProtectionInfoTag;

@end
