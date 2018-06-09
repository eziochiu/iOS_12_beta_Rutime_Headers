/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying> {
    PKProtobufPayment * _payment;
    NSString * _remotePaymentRequestIdentifier;
}

@property (nonatomic, readonly) bool hasPayment;
@property (nonatomic, readonly) bool hasRemotePaymentRequestIdentifier;
@property (nonatomic, retain) PKProtobufPayment *payment;
@property (nonatomic, retain) NSString *remotePaymentRequestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayment;
- (bool)hasRemotePaymentRequestIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payment;
- (bool)readFrom:(id)arg1;
- (id)remotePaymentRequestIdentifier;
- (void)setPayment:(id)arg1;
- (void)setRemotePaymentRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
