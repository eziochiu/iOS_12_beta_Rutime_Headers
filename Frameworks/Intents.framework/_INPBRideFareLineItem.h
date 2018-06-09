/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideFareLineItem : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRideFareLineItem> {
    INCodableAttribute * _associatedCodableAttribute;
    NSString * _currencyCode;
    struct { }  _has;
    _INPBDecimalNumberValue * _price;
    NSString * _title;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic, readonly) bool hasPrice;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDecimalNumberValue *price;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)dictionaryRepresentation;
- (bool)hasCurrencyCode;
- (bool)hasPrice;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)price;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
