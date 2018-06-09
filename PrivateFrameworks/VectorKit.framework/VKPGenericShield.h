/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPGenericShield : PBCodable <NSCopying> {
    int  _style;
    NSMutableArray * _variants;
}

@property (nonatomic) int style;
@property (nonatomic, retain) NSMutableArray *variants;

- (void)addVariant:(id)arg1;
- (void)clearVariants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setVariants:(id)arg1;
- (int)style;
- (id)variantAtIndex:(unsigned long long)arg1;
- (id)variants;
- (unsigned long long)variantsCount;
- (void)writeTo:(id)arg1;

@end
