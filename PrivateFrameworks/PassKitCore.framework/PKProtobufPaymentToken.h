/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentToken : PBCodable <NSCopying> {
    NSString * _instrumentName;
    NSString * _network;
    NSData * _paymentData;
    PKProtobufPaymentMethod * _paymentMethod;
    NSString * _redeemURL;
    NSString * _retryNonce;
    NSString * _transactionIdentifier;
}

@property (nonatomic, readonly) bool hasInstrumentName;
@property (nonatomic, readonly) bool hasNetwork;
@property (nonatomic, readonly) bool hasPaymentData;
@property (nonatomic, readonly) bool hasPaymentMethod;
@property (nonatomic, readonly) bool hasRedeemURL;
@property (nonatomic, readonly) bool hasRetryNonce;
@property (nonatomic, readonly) bool hasTransactionIdentifier;
@property (nonatomic, retain) NSString *instrumentName;
@property (nonatomic, retain) NSString *network;
@property (nonatomic, retain) NSData *paymentData;
@property (nonatomic, retain) PKProtobufPaymentMethod *paymentMethod;
@property (nonatomic, retain) NSString *redeemURL;
@property (nonatomic, retain) NSString *retryNonce;
@property (nonatomic, retain) NSString *transactionIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInstrumentName;
- (bool)hasNetwork;
- (bool)hasPaymentData;
- (bool)hasPaymentMethod;
- (bool)hasRedeemURL;
- (bool)hasRetryNonce;
- (bool)hasTransactionIdentifier;
- (unsigned long long)hash;
- (id)instrumentName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)network;
- (id)paymentData;
- (id)paymentMethod;
- (bool)readFrom:(id)arg1;
- (id)redeemURL;
- (id)retryNonce;
- (void)setInstrumentName:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPaymentData:(id)arg1;
- (void)setPaymentMethod:(id)arg1;
- (void)setRedeemURL:(id)arg1;
- (void)setRetryNonce:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (id)transactionIdentifier;
- (void)writeTo:(id)arg1;

@end
