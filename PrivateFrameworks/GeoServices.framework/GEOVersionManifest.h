/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOVersionManifest : PBCodable <NSCopying> {
    NSMutableArray * _serviceVersions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *serviceVersions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)serviceVersionType;

- (void).cxx_destruct;
- (void)addServiceVersion:(id)arg1;
- (void)clearServiceVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serviceVersionAtIndex:(unsigned long long)arg1;
- (id)serviceVersions;
- (unsigned long long)serviceVersionsCount;
- (void)setServiceVersions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
