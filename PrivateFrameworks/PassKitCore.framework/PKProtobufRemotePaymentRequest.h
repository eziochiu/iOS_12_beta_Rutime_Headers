/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufRemotePaymentRequest : PBRequest <NSCopying> {
    NSString * _identifier;
    NSString * _paymentApplicationIdentifier;
    PKProtobufPaymentRequest * _paymentRequest;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasPaymentApplicationIdentifier;
@property (nonatomic, readonly) bool hasPaymentRequest;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *paymentApplicationIdentifier;
@property (nonatomic, retain) PKProtobufPaymentRequest *paymentRequest;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasPaymentApplicationIdentifier;
- (bool)hasPaymentRequest;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentApplicationIdentifier;
- (id)paymentRequest;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setIdentifier:(id)arg1;
- (void)setPaymentApplicationIdentifier:(id)arg1;
- (void)setPaymentRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
