/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPictureItemContainer : PBCodable <NSCopying> {
    bool  _allowFullScreenPhoto;
    struct { 
        unsigned int allowFullScreenPhoto : 1; 
    }  _has;
    NSMutableArray * _pictureItems;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool allowFullScreenPhoto;
@property (nonatomic) bool hasAllowFullScreenPhoto;
@property (nonatomic, retain) NSMutableArray *pictureItems;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)pictureItemType;

- (void).cxx_destruct;
- (void)addPictureItem:(id)arg1;
- (bool)allowFullScreenPhoto;
- (void)clearPictureItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAllowFullScreenPhoto;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pictureItemAtIndex:(unsigned long long)arg1;
- (id)pictureItems;
- (unsigned long long)pictureItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setAllowFullScreenPhoto:(bool)arg1;
- (void)setHasAllowFullScreenPhoto:(bool)arg1;
- (void)setPictureItems:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
