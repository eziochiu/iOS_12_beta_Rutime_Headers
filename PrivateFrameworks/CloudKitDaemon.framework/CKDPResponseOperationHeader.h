/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPResponseOperationHeader : PBCodable <NSCopying> {
    NSMutableArray * _assetAuthorizationResponses;
}

@property (nonatomic, retain) NSMutableArray *assetAuthorizationResponses;

+ (Class)assetAuthorizationResponsesType;

- (void).cxx_destruct;
- (void)addAssetAuthorizationResponses:(id)arg1;
- (id)assetAuthorizationResponses;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)clearAssetAuthorizationResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssetAuthorizationResponses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
