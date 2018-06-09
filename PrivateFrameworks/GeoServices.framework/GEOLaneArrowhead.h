/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLaneArrowhead : PBCodable <NSCopying> {
    int  _angle;
    int  _category;
    struct { 
        unsigned int angle : 1; 
        unsigned int category : 1; 
    }  _has;
}

@property (nonatomic) int angle;
@property (nonatomic) int category;
@property (nonatomic) bool hasAngle;
@property (nonatomic) bool hasCategory;

- (int)StringAsCategory:(id)arg1;
- (int)angle;
- (int)category;
- (id)categoryAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAngle;
- (bool)hasCategory;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAngle:(int)arg1;
- (void)setCategory:(int)arg1;
- (void)setHasAngle:(bool)arg1;
- (void)setHasCategory:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
