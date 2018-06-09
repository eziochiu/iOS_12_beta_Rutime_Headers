/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPaymentMethodList : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPaymentMethodList> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBCondition * _condition;
    struct { }  _has;
    NSArray * _paymentMethods;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *paymentMethods;
@property (nonatomic, readonly) unsigned long long paymentMethodsCount;
@property (readonly) Class superclass;

+ (Class)paymentMethodsType;

- (void).cxx_destruct;
- (void)addPaymentMethods:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearPaymentMethods;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)paymentMethods;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentMethodsCount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setPaymentMethods:(id)arg1;
- (void)writeTo:(id)arg1;

@end
