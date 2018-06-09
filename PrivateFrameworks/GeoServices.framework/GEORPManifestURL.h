/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPManifestURL : PBCodable <NSCopying> {
    NSString * _urlName;
    NSString * _urlValue;
}

@property (nonatomic, readonly) bool hasUrlName;
@property (nonatomic, readonly) bool hasUrlValue;
@property (nonatomic, retain) NSString *urlName;
@property (nonatomic, retain) NSString *urlValue;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUrlName;
- (bool)hasUrlValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUrlName:(id)arg1;
- (void)setUrlValue:(id)arg1;
- (id)urlName;
- (id)urlValue;
- (void)writeTo:(id)arg1;

@end
