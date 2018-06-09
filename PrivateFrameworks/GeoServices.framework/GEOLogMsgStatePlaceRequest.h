/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStatePlaceRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int placeRequestType : 1; 
    }  _has;
    GEOPDPlaceRequest * _placeDataRequest;
    int  _placeRequestType;
}

@property (nonatomic, readonly) bool hasPlaceDataRequest;
@property (nonatomic) bool hasPlaceRequestType;
@property (nonatomic, retain) GEOPDPlaceRequest *placeDataRequest;
@property (nonatomic) int placeRequestType;

- (void).cxx_destruct;
- (int)StringAsPlaceRequestType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPlaceDataRequest;
- (bool)hasPlaceRequestType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeDataRequest;
- (int)placeRequestType;
- (id)placeRequestTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPlaceRequestType:(bool)arg1;
- (void)setPlaceDataRequest:(id)arg1;
- (void)setPlaceRequestType:(int)arg1;
- (void)writeTo:(id)arg1;

@end