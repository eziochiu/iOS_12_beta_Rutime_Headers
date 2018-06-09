/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCommentedOnId : PBCodable <NSCopying> {
    NSData * _itemId;
    CKDPShareIdentifier * _shareIdentifier;
}

@property (nonatomic, readonly) bool hasItemId;
@property (nonatomic, readonly) bool hasShareIdentifier;
@property (nonatomic, retain) NSData *itemId;
@property (nonatomic, retain) CKDPShareIdentifier *shareIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasItemId;
- (bool)hasShareIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setItemId:(id)arg1;
- (void)setShareIdentifier:(id)arg1;
- (id)shareIdentifier;
- (void)writeTo:(id)arg1;

@end
