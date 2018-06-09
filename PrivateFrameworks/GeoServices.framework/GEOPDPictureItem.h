/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDPictureItem : PBCodable <NSCopying> {
    struct { 
        unsigned int photoItemType : 1; 
    }  _has;
    GEOPDPhoto * _photo;
    int  _photoItemType;
    NSString * _primaryText;
    NSString * _secondaryText;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPhoto;
@property (nonatomic) bool hasPhotoItemType;
@property (nonatomic, readonly) bool hasPrimaryText;
@property (nonatomic, readonly) bool hasSecondaryText;
@property (nonatomic, retain) GEOPDPhoto *photo;
@property (nonatomic) int photoItemType;
@property (nonatomic, retain) NSString *primaryText;
@property (nonatomic, retain) NSString *secondaryText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (int)StringAsPhotoItemType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhoto;
- (bool)hasPhotoItemType;
- (bool)hasPrimaryText;
- (bool)hasSecondaryText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (int)photoItemType;
- (id)photoItemTypeAsString:(int)arg1;
- (id)primaryText;
- (bool)readFrom:(id)arg1;
- (id)secondaryText;
- (void)setHasPhotoItemType:(bool)arg1;
- (void)setPhoto:(id)arg1;
- (void)setPhotoItemType:(int)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
