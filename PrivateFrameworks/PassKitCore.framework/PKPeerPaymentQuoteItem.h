/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentQuoteItem : NSObject <NSSecureCoding> {
    NSString * _countryCode;
    NSString * _dpanIdentifier;
    NSDecimalNumber * _exchangeRate;
    NSDecimalNumber * _fees;
    NSString * _feesCurrency;
    unsigned long long  _merchantCapabilities;
    NSString * _merchantIdentifier;
    NSData * _nonce;
    NSDecimalNumber * _receiveAmount;
    NSString * _receiveAmountCurrency;
    NSDecimalNumber * _sendAmount;
    NSString * _sendAmountCurrency;
    NSArray * _supportedNetworks;
    NSDecimalNumber * _totalAmount;
    NSString * _totalAmountCurrency;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSString *countryCode;
@property (nonatomic, readonly, copy) NSString *dpanIdentifier;
@property (nonatomic, readonly, copy) NSDecimalNumber *exchangeRate;
@property (nonatomic, readonly, copy) NSDecimalNumber *fees;
@property (nonatomic, readonly, copy) NSString *feesCurrency;
@property (nonatomic, readonly) unsigned long long merchantCapabilities;
@property (nonatomic, readonly, copy) NSString *merchantIdentifier;
@property (nonatomic, readonly, copy) NSData *nonce;
@property (nonatomic, readonly, copy) NSDecimalNumber *receiveAmount;
@property (nonatomic, readonly, copy) NSString *receiveAmountCurrency;
@property (nonatomic, readonly, copy) NSDecimalNumber *sendAmount;
@property (nonatomic, readonly, copy) NSString *sendAmountCurrency;
@property (nonatomic, readonly, copy) NSArray *supportedNetworks;
@property (nonatomic, readonly, copy) NSDecimalNumber *totalAmount;
@property (nonatomic, readonly, copy) NSString *totalAmountCurrency;
@property (nonatomic, readonly) unsigned long long type;

+ (id)quoteItemWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)countryCode;
- (id)description;
- (id)dpanIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)exchangeRate;
- (id)fees;
- (id)feesCurrency;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)merchantCapabilities;
- (id)merchantIdentifier;
- (id)nonce;
- (id)receiveAmount;
- (id)receiveAmountCurrency;
- (id)sendAmount;
- (id)sendAmountCurrency;
- (id)supportedNetworks;
- (id)totalAmount;
- (id)totalAmountCurrency;
- (unsigned long long)type;

@end
