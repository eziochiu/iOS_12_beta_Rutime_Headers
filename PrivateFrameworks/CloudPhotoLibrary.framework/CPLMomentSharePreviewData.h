/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMomentSharePreviewData : PBCodable <NSCopying> {
    NSString * _cropRectString;
    NSString * _keyAssetIdentifier;
    NSMutableArray * _previewImageDatas;
}

@property (nonatomic, retain) NSString *cropRectString;
@property (nonatomic, readonly) bool hasCropRectString;
@property (nonatomic, readonly) bool hasKeyAssetIdentifier;
@property (nonatomic, retain) NSString *keyAssetIdentifier;
@property (nonatomic, retain) NSMutableArray *previewImageDatas;

+ (Class)previewImageDataType;

- (void).cxx_destruct;
- (void)addPreviewImageData:(id)arg1;
- (void)clearPreviewImageDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropRectString;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCropRectString;
- (bool)hasKeyAssetIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyAssetIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)previewImageDataAtIndex:(unsigned long long)arg1;
- (id)previewImageDatas;
- (unsigned long long)previewImageDatasCount;
- (bool)readFrom:(id)arg1;
- (void)setCropRectString:(id)arg1;
- (void)setKeyAssetIdentifier:(id)arg1;
- (void)setPreviewImageDatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end
