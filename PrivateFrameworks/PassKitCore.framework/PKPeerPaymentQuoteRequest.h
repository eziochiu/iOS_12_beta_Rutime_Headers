/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentQuoteRequest : PKPeerPaymentWebServiceRequest <NSSecureCoding> {
    NSString * _accountNumber;
    NSDecimalNumber * _amount;
    NSString * _bankName;
    unsigned long long  _context;
    NSString * _currency;
    unsigned long long  _destination;
    NSString * _dpanIdentifier;
    unsigned long long  _externalFundingSource;
    NSString * _orderIdentifier;
    unsigned long long  _paymentMethodType;
    long long  _paymentNetwork;
    PKPeerPaymentQuoteCertificatesResponse * _quoteCertificatesResponse;
    NSString * _recipientIdentifier;
    PKPeerPaymentRequestToken * _requestToken;
    NSString * _routingNumber;
    NSString * _senderAddress;
}

@property (nonatomic, copy) NSString *accountNumber;
@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *bankName;
@property (nonatomic) unsigned long long context;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic) unsigned long long destination;
@property (setter=setDPANIdentifier:, nonatomic, copy) NSString *dpanIdentifier;
@property (nonatomic) unsigned long long externalFundingSource;
@property (nonatomic, readonly, copy) NSString *orderIdentifier;
@property (nonatomic) unsigned long long paymentMethodType;
@property (nonatomic) long long paymentNetwork;
@property (nonatomic, retain) PKPeerPaymentQuoteCertificatesResponse *quoteCertificatesResponse;
@property (nonatomic, copy) NSString *recipientIdentifier;
@property (nonatomic, retain) PKPeerPaymentRequestToken *requestToken;
@property (nonatomic, copy) NSString *routingNumber;
@property (nonatomic, copy) NSString *senderAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3;
- (id)accountNumber;
- (id)amount;
- (id)bankName;
- (unsigned long long)context;
- (id)currency;
- (id)description;
- (unsigned long long)destination;
- (id)dpanIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)externalFundingSource;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPeerPaymentQuoteRequest:(id)arg1;
- (id)orderIdentifier;
- (unsigned long long)paymentMethodType;
- (long long)paymentNetwork;
- (id)quoteCertificatesResponse;
- (id)recipientIdentifier;
- (id)requestToken;
- (id)routingNumber;
- (id)senderAddress;
- (void)setAccountNumber:(id)arg1;
- (void)setAmount:(id)arg1;
- (void)setBankName:(id)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setCurrency:(id)arg1;
- (void)setDPANIdentifier:(id)arg1;
- (void)setDestination:(unsigned long long)arg1;
- (void)setExternalFundingSource:(unsigned long long)arg1;
- (void)setPaymentMethodType:(unsigned long long)arg1;
- (void)setPaymentNetwork:(long long)arg1;
- (void)setQuoteCertificatesResponse:(id)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setRoutingNumber:(id)arg1;
- (void)setSenderAddress:(id)arg1;
- (void)updateWithPaymentPass:(id)arg1;

@end
