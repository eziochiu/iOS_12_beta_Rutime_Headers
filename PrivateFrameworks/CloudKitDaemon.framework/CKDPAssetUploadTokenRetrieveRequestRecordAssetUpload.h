/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveRequestRecordAssetUpload : PBCodable <NSCopying> {
    NSMutableArray * _assetFields;
    CKDPRecordIdentifier * _recordId;
    CKDPRecordType * _type;
}

@property (nonatomic, retain) NSMutableArray *assetFields;
@property (nonatomic, readonly) bool hasRecordId;
@property (nonatomic, readonly) bool hasType;
@property (nonatomic, retain) CKDPRecordIdentifier *recordId;
@property (nonatomic, retain) CKDPRecordType *type;

+ (Class)assetFieldsType;

- (void).cxx_destruct;
- (void)addAssetFields:(id)arg1;
- (id)assetFields;
- (id)assetFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetFieldsCount;
- (void)clearAssetFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordId;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordId;
- (void)setAssetFields:(id)arg1;
- (void)setRecordId:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end