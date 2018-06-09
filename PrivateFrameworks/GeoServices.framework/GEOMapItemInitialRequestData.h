/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemInitialRequestData : PBCodable <NSCopying> {
    struct { 
        unsigned int requestType : 1; 
    }  _has;
    GEOPDPlaceRequestParameters * _placeRequestParameters;
    int  _requestType;
}

@property (nonatomic, readonly) bool hasPlaceRequestParameters;
@property (nonatomic) bool hasRequestType;
@property (nonatomic, retain) GEOPDPlaceRequestParameters *placeRequestParameters;
@property (nonatomic) int requestType;

- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceRequestParameters;
- (bool)hasRequestType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeRequestParameters;
- (bool)readFrom:(id)arg1;
- (int)requestType;
- (id)requestTypeAsString:(int)arg1;
- (void)setHasRequestType:(bool)arg1;
- (void)setPlaceRequestParameters:(id)arg1;
- (void)setRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
