/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataServiceVersionedLayer : PBCodable <NSCopying> {
    GEOMapLayerDataServiceLayer * _layer;
    GEOMapLayerDataServiceVersion * _version;
}

@property (nonatomic, readonly) bool hasLayer;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) GEOMapLayerDataServiceLayer *layer;
@property (nonatomic, retain) GEOMapLayerDataServiceVersion *version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLayer;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)layer;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
