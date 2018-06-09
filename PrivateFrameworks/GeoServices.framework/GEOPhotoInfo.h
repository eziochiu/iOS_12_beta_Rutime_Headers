/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPhotoInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int size : 1; 
    }  _has;
    int  _size;
    PBUnknownFields * _unknownFields;
    NSString * _url;
}

@property (nonatomic) bool hasSize;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic) int size;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *url;

- (void).cxx_destruct;
- (int)StringAsSize:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSize;
- (bool)hasUrl;
- (unsigned long long)hash;
- (id)initWithPlaceDataPhotoContent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setSize:(int)arg1;
- (void)setUrl:(id)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (id)unknownFields;
- (id)url;
- (void)writeTo:(id)arg1;

@end
