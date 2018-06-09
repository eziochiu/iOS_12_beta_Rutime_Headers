/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPriceRangeValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPriceRangeValue> {
    INCodableAttribute * _associatedCodableAttribute;
    NSString * _currencyCode;
    struct { }  _has;
    _INPBDecimalNumberValue * _maximumPrice;
    _INPBDecimalNumberValue * _minimumPrice;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic, readonly) bool hasMaximumPrice;
@property (nonatomic, readonly) bool hasMinimumPrice;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDecimalNumberValue *maximumPrice;
@property (nonatomic, retain) _INPBDecimalNumberValue *minimumPrice;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)dictionaryRepresentation;
- (bool)hasCurrencyCode;
- (bool)hasMaximumPrice;
- (bool)hasMinimumPrice;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)maximumPrice;
- (id)minimumPrice;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setMaximumPrice:(id)arg1;
- (void)setMinimumPrice:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
