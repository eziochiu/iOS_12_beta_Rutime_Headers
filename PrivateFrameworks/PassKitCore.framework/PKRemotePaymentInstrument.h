/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemotePaymentInstrument : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _associatedWebDomains;
    NSString * _displayName;
    bool  _hasAssociatedPeerPaymentAccount;
    NSDate * _ingestedDate;
    NSString * _issuerCountryCode;
    NSData * _manifestHash;
    NSString * _passIdentifier;
    NSArray * _paymentApplications;
    PKCurrencyAmount * _peerPaymentAccountBalance;
    unsigned long long  _peerPaymentAccountState;
    NSString * _primaryAccountIdentifier;
    NSString * _primaryAccountNumberSuffix;
    PKPaymentApplication * _primaryPaymentApplication;
    bool  _supportsAutomaticSelection;
}

@property (nonatomic, retain) NSArray *associatedWebDomains;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) bool hasAssociatedPeerPaymentAccount;
@property (nonatomic, retain) NSDate *ingestedDate;
@property (nonatomic, copy) NSString *issuerCountryCode;
@property (nonatomic, copy) NSData *manifestHash;
@property (nonatomic, copy) NSString *passIdentifier;
@property (nonatomic, retain) NSArray *paymentApplications;
@property (nonatomic, retain) PKCurrencyAmount *peerPaymentAccountBalance;
@property (nonatomic) unsigned long long peerPaymentAccountState;
@property (nonatomic, copy) NSString *primaryAccountIdentifier;
@property (nonatomic, copy) NSString *primaryAccountNumberSuffix;
@property (nonatomic, retain) PKPaymentApplication *primaryPaymentApplication;
@property (nonatomic) bool supportsAutomaticSelection;

+ (id)remotePaymentInstrumentWithProtobuf:(id)arg1;
+ (id)sortDescriptorForDefaultPaymentInstrument:(id)arg1 supportedNetworks:(id)arg2 merchantCapabilities:(unsigned long long)arg3 webService:(id)arg4;
+ (bool)supportsSecureCoding;
+ (id)thumbnailCachePathForManifestHash:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (id)associatedWebDomains;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAssociatedPeerPaymentAccount;
- (unsigned long long)hash;
- (id)ingestedDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemotePaymentInstrument:(id)arg1;
- (id)issuerCountryCode;
- (id)manifestHash;
- (id)passIdentifier;
- (id)paymentApplications;
- (id)peerPaymentAccountBalance;
- (unsigned long long)peerPaymentAccountState;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;
- (id)primaryPaymentApplication;
- (id)protobuf;
- (void)setAssociatedWebDomains:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHasAssociatedPeerPaymentAccount:(bool)arg1;
- (void)setIngestedDate:(id)arg1;
- (void)setIssuerCountryCode:(id)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassIdentifier:(id)arg1;
- (void)setPaymentApplications:(id)arg1;
- (void)setPeerPaymentAccountBalance:(id)arg1;
- (void)setPeerPaymentAccountState:(unsigned long long)arg1;
- (void)setPrimaryAccountIdentifier:(id)arg1;
- (void)setPrimaryAccountNumberSuffix:(id)arg1;
- (void)setPrimaryPaymentApplication:(id)arg1;
- (void)setSupportsAutomaticSelection:(bool)arg1;
- (bool)supportsAutomaticSelection;

@end
