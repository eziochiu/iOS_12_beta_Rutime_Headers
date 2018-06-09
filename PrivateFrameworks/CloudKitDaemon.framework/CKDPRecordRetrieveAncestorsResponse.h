/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveAncestorsResponse : PBCodable <NSCopying> {
    NSMutableArray * _ancestors;
    CKDPRecord * _shareRecord;
}

@property (nonatomic, retain) NSMutableArray *ancestors;
@property (nonatomic, readonly) bool hasShareRecord;
@property (nonatomic, retain) CKDPRecord *shareRecord;

+ (Class)ancestorType;

- (void).cxx_destruct;
- (void)addAncestor:(id)arg1;
- (id)ancestorAtIndex:(unsigned long long)arg1;
- (id)ancestors;
- (unsigned long long)ancestorsCount;
- (void)clearAncestors;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShareRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAncestors:(id)arg1;
- (void)setShareRecord:(id)arg1;
- (id)shareRecord;
- (void)writeTo:(id)arg1;

@end
