/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRidePartySizeOption : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRidePartySizeOption> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBRangeValue * _partySizeRange;
    _INPBPriceRangeValue * _priceRange;
    NSString * _sizeDescription;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPartySizeRange;
@property (nonatomic, readonly) bool hasPriceRange;
@property (nonatomic, readonly) bool hasSizeDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBRangeValue *partySizeRange;
@property (nonatomic, retain) _INPBPriceRangeValue *priceRange;
@property (nonatomic, copy) NSString *sizeDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasPartySizeRange;
- (bool)hasPriceRange;
- (bool)hasSizeDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)partySizeRange;
- (id)priceRange;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setPartySizeRange:(id)arg1;
- (void)setPriceRange:(id)arg1;
- (void)setSizeDescription:(id)arg1;
- (id)sizeDescription;
- (void)writeTo:(id)arg1;

@end
