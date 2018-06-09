/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying> {
    CKDPZoneCapabilities * _capabilities;
    int  _changeType;
    int  _deleteType;
    struct { 
        unsigned int changeType : 1; 
        unsigned int deleteType : 1; 
    }  _has;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, retain) CKDPZoneCapabilities *capabilities;
@property (nonatomic) int changeType;
@property (nonatomic) int deleteType;
@property (nonatomic, readonly) bool hasCapabilities;
@property (nonatomic) bool hasChangeType;
@property (nonatomic) bool hasDeleteType;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)StringAsDeleteType:(id)arg1;
- (id)capabilities;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deleteType;
- (id)deleteTypeAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCapabilities;
- (bool)hasChangeType;
- (bool)hasDeleteType;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setDeleteType:(int)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)setHasDeleteType:(bool)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
