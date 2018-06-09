/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMethod : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _network;
    PKPaymentPass * _paymentPass;
    NSString * _peerPaymentQuoteIdentifier;
    PKRemotePaymentInstrument * _remoteInstrument;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *network;
@property (nonatomic, copy) PKPaymentPass *paymentPass;
@property (nonatomic, copy) NSString *peerPaymentQuoteIdentifier;
@property (nonatomic, retain) PKRemotePaymentInstrument *remoteInstrument;
@property (nonatomic) unsigned long long type;

+ (id)paymentMethodWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;
+ (long long)version;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1 obfuscateNetworks:(bool)arg2;
- (id)initWithPaymentPass:(id)arg1 paymentApplication:(id)arg2 obfuscateNetworks:(bool)arg3;
- (id)initWithPeerPaymentQuote:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1;
- (id)initWithRemotePaymentInstrument:(id)arg1 paymentApplication:(id)arg2;
- (id)network;
- (id)paymentPass;
- (id)peerPaymentQuoteIdentifier;
- (id)protobuf;
- (id)remoteInstrument;
- (void)setDisplayName:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setPeerPaymentQuoteIdentifier:(id)arg1;
- (void)setRemoteInstrument:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
