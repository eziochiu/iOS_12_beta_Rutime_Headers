/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveResponseUploadToken : PBCodable <NSCopying> {
    CKDPAsset * _asset;
    struct { 
        unsigned int tokenExpiration : 1; 
    }  _has;
    NSString * _token;
    long long  _tokenExpiration;
}

@property (nonatomic, retain) CKDPAsset *asset;
@property (nonatomic, readonly) bool hasAsset;
@property (nonatomic, readonly) bool hasToken;
@property (nonatomic) bool hasTokenExpiration;
@property (nonatomic, retain) NSString *token;
@property (nonatomic) long long tokenExpiration;

- (void).cxx_destruct;
- (id)asset;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAsset;
- (bool)hasToken;
- (bool)hasTokenExpiration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setHasTokenExpiration:(bool)arg1;
- (void)setToken:(id)arg1;
- (void)setTokenExpiration:(long long)arg1;
- (id)token;
- (long long)tokenExpiration;
- (void)writeTo:(id)arg1;

@end
