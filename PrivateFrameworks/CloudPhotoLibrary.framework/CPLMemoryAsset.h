/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMemoryAsset : PBCodable <NSCopying> {
    CPLMemoryAssetFlag * _assetFlag;
    NSString * _assetIdentifier;
    NSData * _assetMovieData;
    NSString * _masterFingerprint;
}

@property (nonatomic, retain) CPLMemoryAssetFlag *assetFlag;
@property (nonatomic, retain) NSString *assetIdentifier;
@property (nonatomic, retain) NSData *assetMovieData;
@property (nonatomic, readonly) bool hasAssetFlag;
@property (nonatomic, readonly) bool hasAssetIdentifier;
@property (nonatomic, readonly) bool hasAssetMovieData;
@property (nonatomic, readonly) bool hasMasterFingerprint;
@property (nonatomic, retain) NSString *masterFingerprint;

- (void).cxx_destruct;
- (id)assetFlag;
- (id)assetIdentifier;
- (id)assetMovieData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAssetFlag;
- (bool)hasAssetIdentifier;
- (bool)hasAssetMovieData;
- (bool)hasMasterFingerprint;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)masterFingerprint;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssetFlag:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (void)setAssetMovieData:(id)arg1;
- (void)setMasterFingerprint:(id)arg1;
- (void)writeTo:(id)arg1;

@end
