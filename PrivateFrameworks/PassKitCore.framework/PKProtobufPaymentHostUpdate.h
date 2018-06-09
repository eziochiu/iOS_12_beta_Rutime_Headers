/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentHostUpdate : PBCodable <NSCopying> {
    PKProtobufPaymentMethod * _paymentMethod;
    NSString * _remotePaymentRequestIdentifier;
    NSData * _shippingContact;
    PKProtobufShippingMethod * _shippingMethod;
}

@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic, readonly) bool hasRemotePaymentRequestIdentifier;
@property (nonatomic, readonly) bool hasShippingContact;
@property (nonatomic, readonly) bool hasShippingMethod;
@property (nonatomic, retain) PKProtobufPaymentMethod *paymentMethod;
@property (nonatomic, retain) NSString *remotePaymentRequestIdentifier;
@property (nonatomic, retain) NSData *shippingContact;
@property (nonatomic, retain) PKProtobufShippingMethod *shippingMethod;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPaymentMethod;
- (bool)hasRemotePaymentRequestIdentifier;
- (bool)hasShippingContact;
- (bool)hasShippingMethod;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentMethod;
- (bool)readFrom:(id)arg1;
- (id)remotePaymentRequestIdentifier;
- (void)setPaymentMethod:(id)arg1;
- (void)setRemotePaymentRequestIdentifier:(id)arg1;
- (void)setShippingContact:(id)arg1;
- (void)setShippingMethod:(id)arg1;
- (id)shippingContact;
- (id)shippingMethod;
- (void)writeTo:(id)arg1;

@end
