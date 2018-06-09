/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUser : PBCodable <NSCopying> {
    GEOPhoto * _image;
    NSString * _name;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, retain) GEOPhoto *image;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImage;
- (bool)hasName;
- (unsigned long long)hash;
- (id)image;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
