/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCurrencyAmountValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBCurrencyAmountValue> {
    _INPBDecimalNumberValue * _amount;
    INCodableAttribute * _associatedCodableAttribute;
    NSString * _currencyCode;
    struct { }  _has;
    _INPBValueMetadata * _valueMetadata;
}

@property (nonatomic, retain) _INPBDecimalNumberValue *amount;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAmount;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic, readonly) bool hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBValueMetadata *valueMetadata;

- (void).cxx_destruct;
- (id)amount;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (bool)hasCurrencyCode;
- (bool)hasValueMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setValueMetadata:(id)arg1;
- (id)valueMetadata;
- (void)writeTo:(id)arg1;

@end
