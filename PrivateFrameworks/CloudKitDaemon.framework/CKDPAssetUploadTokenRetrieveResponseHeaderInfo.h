/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAssetUploadTokenRetrieveResponseHeaderInfo : PBCodable <NSCopying> {
    NSString * _headerKey;
    NSString * _headerValue;
}

@property (nonatomic, retain) NSString *headerKey;
@property (nonatomic, retain) NSString *headerValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)headerKey;
- (id)headerValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHeaderKey:(id)arg1;
- (void)setHeaderValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
