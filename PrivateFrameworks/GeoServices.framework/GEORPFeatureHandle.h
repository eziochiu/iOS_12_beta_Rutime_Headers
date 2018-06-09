/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPFeatureHandle : PBCodable <NSCopying> {
    unsigned int  _featureIndex;
    unsigned int  _featureTileX;
    unsigned int  _featureTileY;
    unsigned int  _featureTileZ;
    struct { 
        unsigned int featureIndex : 1; 
        unsigned int featureTileX : 1; 
        unsigned int featureTileY : 1; 
        unsigned int featureTileZ : 1; 
        unsigned int identifier : 1; 
        unsigned int style : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _identifier;
    int  _style;
    struct GEORPFeatureHandleStyleAttribute { int x1; int x2; } * _styleAttributes;
    unsigned long long  _styleAttributesCount;
    unsigned long long  _styleAttributesSpace;
    int  _type;
}

@property (nonatomic) unsigned int featureIndex;
@property (nonatomic) unsigned int featureTileX;
@property (nonatomic) unsigned int featureTileY;
@property (nonatomic) unsigned int featureTileZ;
@property (nonatomic) bool hasFeatureIndex;
@property (nonatomic) bool hasFeatureTileX;
@property (nonatomic) bool hasFeatureTileY;
@property (nonatomic) bool hasFeatureTileZ;
@property (nonatomic) bool hasIdentifier;
@property (nonatomic) bool hasStyle;
@property (nonatomic) bool hasType;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) int style;
@property (nonatomic, readonly) struct GEORPFeatureHandleStyleAttribute { int x1; int x2; }*styleAttributes;
@property (nonatomic, readonly) unsigned long long styleAttributesCount;
@property (nonatomic) int type;

- (int)StringAsStyle:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addStyleAttribute:(struct GEORPFeatureHandleStyleAttribute { int x1; int x2; })arg1;
- (void)clearStyleAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)featureIndex;
- (unsigned int)featureTileX;
- (unsigned int)featureTileY;
- (unsigned int)featureTileZ;
- (bool)hasFeatureIndex;
- (bool)hasFeatureTileX;
- (bool)hasFeatureTileY;
- (bool)hasFeatureTileZ;
- (bool)hasIdentifier;
- (bool)hasStyle;
- (bool)hasType;
- (unsigned long long)hash;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeatureIndex:(unsigned int)arg1;
- (void)setFeatureTileX:(unsigned int)arg1;
- (void)setFeatureTileY:(unsigned int)arg1;
- (void)setFeatureTileZ:(unsigned int)arg1;
- (void)setHasFeatureIndex:(bool)arg1;
- (void)setHasFeatureTileX:(bool)arg1;
- (void)setHasFeatureTileY:(bool)arg1;
- (void)setHasFeatureTileZ:(bool)arg1;
- (void)setHasIdentifier:(bool)arg1;
- (void)setHasStyle:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)setStyle:(int)arg1;
- (void)setStyleAttributes:(struct GEORPFeatureHandleStyleAttribute { int x1; int x2; }*)arg1 count:(unsigned long long)arg2;
- (void)setType:(int)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (struct GEORPFeatureHandleStyleAttribute { int x1; int x2; })styleAttributeAtIndex:(unsigned long long)arg1;
- (struct GEORPFeatureHandleStyleAttribute { int x1; int x2; }*)styleAttributes;
- (unsigned long long)styleAttributesCount;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
