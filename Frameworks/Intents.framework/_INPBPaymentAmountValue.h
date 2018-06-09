/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPaymentAmountValue : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPaymentAmountValue> {
    int  _amountType;
    INCodableAttribute * _associatedCodableAttribute;
    struct { 
        unsigned int amountType : 1; 
    }  _has;
    _INPBCurrencyAmountValue * _value;
}

@property (nonatomic) int amountType;
@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAmountType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBCurrencyAmountValue *value;

- (void).cxx_destruct;
- (int)StringAsAmountType:(id)arg1;
- (int)amountType;
- (id)amountTypeAsString:(int)arg1;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasAmountType;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmountType:(int)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setHasAmountType:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
