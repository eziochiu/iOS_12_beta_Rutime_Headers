/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsNearbyWidget : PBCodable <NSCopying> {
    struct { 
        unsigned int tappedItemIndex : 1; 
    }  _has;
    GEOMapsServerMetadata * _serverMetadata;
    int  _tappedItemIndex;
}

@property (nonatomic, readonly) bool hasServerMetadata;
@property (nonatomic) bool hasTappedItemIndex;
@property (nonatomic, retain) GEOMapsServerMetadata *serverMetadata;
@property (nonatomic) int tappedItemIndex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasServerMetadata;
- (bool)hasTappedItemIndex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)serverMetadata;
- (void)setHasTappedItemIndex:(bool)arg1;
- (void)setServerMetadata:(id)arg1;
- (void)setTappedItemIndex:(int)arg1;
- (int)tappedItemIndex;
- (void)writeTo:(id)arg1;

@end
