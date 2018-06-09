/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPassSyncStateChange : PBCodable <NSCopying> {
    int  _changeType;
    NSData * _changeUUID;
    NSData * _lastKnownReconciledPassSyncStateHash;
    NSData * _passData;
    NPKProtoPassSyncStateItem * _syncStateItem;
    NSString * _uniqueID;
}

@property (nonatomic) int changeType;
@property (nonatomic, retain) NSData *changeUUID;
@property (nonatomic, readonly) bool hasLastKnownReconciledPassSyncStateHash;
@property (nonatomic, readonly) bool hasPassData;
@property (nonatomic, readonly) bool hasSyncStateItem;
@property (nonatomic, retain) NSData *lastKnownReconciledPassSyncStateHash;
@property (nonatomic, retain) NSData *passData;
@property (nonatomic, retain) NPKProtoPassSyncStateItem *syncStateItem;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (id)changeUUID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastKnownReconciledPassSyncStateHash;
- (bool)hasPassData;
- (bool)hasSyncStateItem;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastKnownReconciledPassSyncStateHash;
- (void)mergeFrom:(id)arg1;
- (id)npkDescription;
- (id)passData;
- (bool)readFrom:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setChangeUUID:(id)arg1;
- (void)setLastKnownReconciledPassSyncStateHash:(id)arg1;
- (void)setPassData:(id)arg1;
- (void)setSyncStateItem:(id)arg1;
- (void)setUniqueID:(id)arg1;
- (id)syncStateItem;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
