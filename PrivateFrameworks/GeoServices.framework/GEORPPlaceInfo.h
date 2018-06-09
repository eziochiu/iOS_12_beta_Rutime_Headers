/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPPlaceInfo : PBCodable <NSCopying> {
    GEOPDPlaceRequest * _placeRequest;
    GEOPDPlaceResponse * _placeResponse;
    NSString * _sourceApplication;
    NSString * _sourceUrl;
}

@property (nonatomic, readonly) bool hasPlaceRequest;
@property (nonatomic, readonly) bool hasPlaceResponse;
@property (nonatomic, readonly) bool hasSourceApplication;
@property (nonatomic, readonly) bool hasSourceUrl;
@property (nonatomic, retain) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, retain) GEOPDPlaceResponse *placeResponse;
@property (nonatomic, retain) NSString *sourceApplication;
@property (nonatomic, retain) NSString *sourceUrl;

- (void).cxx_destruct;
- (void)_clearLocationsFromPlaceRequest;
- (void)_clearLocationsFromPlaceResponse;
- (void)clearLocations;
- (void)clearSessionId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceRequest;
- (bool)hasPlaceResponse;
- (bool)hasSourceApplication;
- (bool)hasSourceUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRequest;
- (id)placeResponse;
- (bool)readFrom:(id)arg1;
- (void)setPlaceRequest:(id)arg1;
- (void)setPlaceResponse:(id)arg1;
- (void)setSourceApplication:(id)arg1;
- (void)setSourceUrl:(id)arg1;
- (id)sourceApplication;
- (id)sourceUrl;
- (void)writeTo:(id)arg1;

@end
