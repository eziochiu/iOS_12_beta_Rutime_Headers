/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPIcon : PBCodable <NSCopying> {
    unsigned int  _anchorPointX;
    unsigned int  _anchorPointY;
    unsigned int  _atlasIndex;
    struct { 
        unsigned int matchingStyleAttributeLongValue : 1; 
        unsigned int anchorPointX : 1; 
        unsigned int anchorPointY : 1; 
        unsigned int iconRectHeight : 1; 
        unsigned int iconRectWidth : 1; 
        unsigned int iconRectX : 1; 
        unsigned int iconRectY : 1; 
        unsigned int matchingStyleAttributeKey : 1; 
        unsigned int matchingStyleAttributeValue : 1; 
        unsigned int size : 1; 
    }  _has;
    unsigned int  _iconRectHeight;
    unsigned int  _iconRectWidth;
    unsigned int  _iconRectX;
    unsigned int  _iconRectY;
    unsigned int  _matchingStyleAttributeKey;
    unsigned long long  _matchingStyleAttributeLongValue;
    int  _matchingStyleAttributeValue;
    NSString * _name;
    unsigned int  _quadIndex;
    int  _size;
}

@property (nonatomic) unsigned int anchorPointX;
@property (nonatomic) unsigned int anchorPointY;
@property (nonatomic) unsigned int atlasIndex;
@property (nonatomic) bool hasAnchorPointX;
@property (nonatomic) bool hasAnchorPointY;
@property (nonatomic) bool hasIconRectHeight;
@property (nonatomic) bool hasIconRectWidth;
@property (nonatomic) bool hasIconRectX;
@property (nonatomic) bool hasIconRectY;
@property (nonatomic) bool hasMatchingStyleAttributeKey;
@property (nonatomic) bool hasMatchingStyleAttributeLongValue;
@property (nonatomic) bool hasMatchingStyleAttributeValue;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasSize;
@property (nonatomic) unsigned int iconRectHeight;
@property (nonatomic) unsigned int iconRectWidth;
@property (nonatomic) unsigned int iconRectX;
@property (nonatomic) unsigned int iconRectY;
@property (nonatomic) unsigned int matchingStyleAttributeKey;
@property (nonatomic) unsigned long long matchingStyleAttributeLongValue;
@property (nonatomic) int matchingStyleAttributeValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int quadIndex;
@property (nonatomic) int size;

- (unsigned int)anchorPointX;
- (unsigned int)anchorPointY;
- (unsigned int)atlasIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnchorPointX;
- (bool)hasAnchorPointY;
- (bool)hasIconRectHeight;
- (bool)hasIconRectWidth;
- (bool)hasIconRectX;
- (bool)hasIconRectY;
- (bool)hasMatchingStyleAttributeKey;
- (bool)hasMatchingStyleAttributeLongValue;
- (bool)hasMatchingStyleAttributeValue;
- (bool)hasName;
- (bool)hasSize;
- (unsigned long long)hash;
- (unsigned int)iconRectHeight;
- (unsigned int)iconRectWidth;
- (unsigned int)iconRectX;
- (unsigned int)iconRectY;
- (bool)isEqual:(id)arg1;
- (unsigned int)matchingStyleAttributeKey;
- (unsigned long long)matchingStyleAttributeLongValue;
- (int)matchingStyleAttributeValue;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)quadIndex;
- (bool)readFrom:(id)arg1;
- (void)setAnchorPointX:(unsigned int)arg1;
- (void)setAnchorPointY:(unsigned int)arg1;
- (void)setAtlasIndex:(unsigned int)arg1;
- (void)setHasAnchorPointX:(bool)arg1;
- (void)setHasAnchorPointY:(bool)arg1;
- (void)setHasIconRectHeight:(bool)arg1;
- (void)setHasIconRectWidth:(bool)arg1;
- (void)setHasIconRectX:(bool)arg1;
- (void)setHasIconRectY:(bool)arg1;
- (void)setHasMatchingStyleAttributeKey:(bool)arg1;
- (void)setHasMatchingStyleAttributeLongValue:(bool)arg1;
- (void)setHasMatchingStyleAttributeValue:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setIconRectHeight:(unsigned int)arg1;
- (void)setIconRectWidth:(unsigned int)arg1;
- (void)setIconRectX:(unsigned int)arg1;
- (void)setIconRectY:(unsigned int)arg1;
- (void)setMatchingStyleAttributeKey:(unsigned int)arg1;
- (void)setMatchingStyleAttributeLongValue:(unsigned long long)arg1;
- (void)setMatchingStyleAttributeValue:(int)arg1;
- (void)setName:(id)arg1;
- (void)setQuadIndex:(unsigned int)arg1;
- (void)setSize:(int)arg1;
- (int)size;
- (void)writeTo:(id)arg1;

@end
