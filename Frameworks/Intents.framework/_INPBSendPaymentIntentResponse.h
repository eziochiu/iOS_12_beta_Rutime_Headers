/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSendPaymentIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSendPaymentIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBPaymentRecord * _paymentRecord;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPaymentRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBPaymentRecord *paymentRecord;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)associatedCodableAttribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasPaymentRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)paymentRecord;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setPaymentRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end
