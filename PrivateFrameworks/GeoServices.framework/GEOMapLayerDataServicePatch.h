/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapLayerDataServicePatch : PBCodable <NSCopying> {
    GEOMapLayerDataServiceLayerIndex * _index;
    GEOMapLayerDataServiceLayer * _layer;
    GEOMapLayerDataServiceVersion * _sourceVersion;
    GEOMapLayerDataServiceVersion * _targetVersion;
}

@property (nonatomic, readonly) bool hasIndex;
@property (nonatomic, readonly) bool hasLayer;
@property (nonatomic, readonly) bool hasSourceVersion;
@property (nonatomic, readonly) bool hasTargetVersion;
@property (nonatomic, retain) GEOMapLayerDataServiceLayerIndex *index;
@property (nonatomic, retain) GEOMapLayerDataServiceLayer *layer;
@property (nonatomic, retain) GEOMapLayerDataServiceVersion *sourceVersion;
@property (nonatomic, retain) GEOMapLayerDataServiceVersion *targetVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIndex;
- (bool)hasLayer;
- (bool)hasSourceVersion;
- (bool)hasTargetVersion;
- (unsigned long long)hash;
- (id)index;
- (bool)isEqual:(id)arg1;
- (id)layer;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setLayer:(id)arg1;
- (void)setSourceVersion:(id)arg1;
- (void)setTargetVersion:(id)arg1;
- (id)sourceVersion;
- (id)targetVersion;
- (void)writeTo:(id)arg1;

@end
