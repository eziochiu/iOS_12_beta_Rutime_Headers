/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStorageCameraView : PBCodable <NSCopying> {
    GEOURLCamera * _camera;
    struct { 
        unsigned int mapType : 1; 
    }  _has;
    int  _mapType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOURLCamera *camera;
@property (nonatomic, readonly) bool hasCamera;
@property (nonatomic) bool hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsMapType:(id)arg1;
- (id)camera;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCamera;
- (bool)hasMapType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)mapType;
- (id)mapTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setHasMapType:(bool)arg1;
- (void)setMapType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
