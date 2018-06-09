/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPIconPack : PBCodable <NSCopying> {
    NSMutableArray * _atlas;
    NSMutableArray * _icons;
    unsigned int  _identifier;
}

@property (nonatomic, retain) NSMutableArray *atlas;
@property (nonatomic, retain) NSMutableArray *icons;
@property (nonatomic) unsigned int identifier;

- (void)addAtlas:(id)arg1;
- (void)addIcons:(id)arg1;
- (id)atlas;
- (id)atlasAtIndex:(unsigned long long)arg1;
- (unsigned long long)atlasCount;
- (void)clearAtlas;
- (void)clearIcons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)icons;
- (id)iconsAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconsCount;
- (unsigned int)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAtlas:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
