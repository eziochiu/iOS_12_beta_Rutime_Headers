/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemHandle : PBCodable <NSCopying> {
    GEOMapItemClientAttributes * _clientAttributes;
    int  _handleType;
    struct { 
        unsigned int handleType : 1; 
    }  _has;
    GEOPDPlaceRefinementParameters * _placeRefinementParameters;
    GEOMapItemInitialRequestData * _placeRequestData;
}

@property (nonatomic, retain) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic) int handleType;
@property (nonatomic, readonly) bool hasClientAttributes;
@property (nonatomic) bool hasHandleType;
@property (nonatomic, readonly) bool hasPlaceRefinementParameters;
@property (nonatomic, readonly) bool hasPlaceRequestData;
@property (nonatomic, retain) GEOPDPlaceRefinementParameters *placeRefinementParameters;
@property (nonatomic, retain) GEOMapItemInitialRequestData *placeRequestData;

- (void).cxx_destruct;
- (int)StringAsHandleType:(id)arg1;
- (id)clientAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)handleType;
- (id)handleTypeAsString:(int)arg1;
- (bool)hasClientAttributes;
- (bool)hasHandleType;
- (bool)hasPlaceRefinementParameters;
- (bool)hasPlaceRequestData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRefinementParameters;
- (id)placeRequestData;
- (bool)readFrom:(id)arg1;
- (void)setClientAttributes:(id)arg1;
- (void)setHandleType:(int)arg1;
- (void)setHasHandleType:(bool)arg1;
- (void)setPlaceRefinementParameters:(id)arg1;
- (void)setPlaceRequestData:(id)arg1;
- (void)writeTo:(id)arg1;

@end