/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPassSyncState : PBCodable <NSCopying> {
    NSMutableArray * _passSyncStateItems;
}

@property (nonatomic, retain) NSMutableArray *passSyncStateItems;

+ (Class)passSyncStateItemsType;

- (void).cxx_destruct;
- (void)addPassSyncStateItems:(id)arg1;
- (void)clearPassSyncStateItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passSyncStateItems;
- (id)passSyncStateItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)passSyncStateItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setPassSyncStateItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end
