/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKPShield : PBCodable <NSCopying> {
    VKPGenericShieldStyleInfo * _genericShieldStyleInfo;
    NSString * _identifier;
    NSMutableArray * _variants;
}

@property (nonatomic, retain) VKPGenericShieldStyleInfo *genericShieldStyleInfo;
@property (nonatomic, readonly) bool hasGenericShieldStyleInfo;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSMutableArray *variants;

- (void)addVariants:(id)arg1;
- (void)clearVariants;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)genericShieldStyleInfo;
- (bool)hasGenericShieldStyleInfo;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGenericShieldStyleInfo:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setVariants:(id)arg1;
- (id)variants;
- (id)variantsAtIndex:(unsigned long long)arg1;
- (unsigned long long)variantsCount;
- (void)writeTo:(id)arg1;

@end