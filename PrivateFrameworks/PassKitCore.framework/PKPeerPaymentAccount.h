/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentAccount : NSObject <NSSecureCoding> {
    bool  _accountStateDirty;
    NSString * _associatedPassSerialNumber;
    NSString * _associatedPassTypeIdentifier;
    NSURL * _associatedPassURL;
    NSString * _countryCode;
    PKCurrencyAmount * _currentBalance;
    bool  _identityVerificationRequired;
    NSDate * _lastUpdated;
    NSDecimalNumber * _maximumBalance;
    long long  _pendingPaymentCount;
    double  _proactiveFetchPeriod;
    unsigned long long  _stage;
    unsigned long long  _state;
    NSArray * _supportedFeatureDescriptors;
    bool  _termsAcceptanceRequired;
    NSString * _termsIdentifier;
    NSURL * _termsURL;
}

@property (getter=isAccountStateDirty, nonatomic) bool accountStateDirty;
@property (nonatomic, copy) NSString *associatedPassSerialNumber;
@property (nonatomic, copy) NSString *associatedPassTypeIdentifier;
@property (nonatomic, copy) NSURL *associatedPassURL;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) PKCurrencyAmount *currentBalance;
@property (nonatomic, readonly, copy) NSArray *defaultSuggestions;
@property (nonatomic) bool identityVerificationRequired;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, copy) NSDecimalNumber *maximumBalance;
@property (nonatomic, readonly) NSDictionary *maximumTransferAmounts;
@property (nonatomic, readonly) NSDictionary *minimumTransferAmounts;
@property (nonatomic) long long pendingPaymentCount;
@property (nonatomic) double proactiveFetchPeriod;
@property (nonatomic) unsigned long long stage;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) NSArray *supportedFeatureDescriptors;
@property (nonatomic) bool termsAcceptanceRequired;
@property (nonatomic, copy) NSString *termsIdentifier;
@property (nonatomic, copy) NSURL *termsURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_featureWithIdentifier:(id)arg1;
- (id)associatedPassSerialNumber;
- (id)associatedPassTypeIdentifier;
- (id)associatedPassURL;
- (id)associatedPassUniqueID;
- (id)cardBalancePromotionFeatureDescriptor;
- (id)countryCode;
- (id)currentBalance;
- (id)defaultSuggestions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (bool)identityVerificationRequired;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2;
- (bool)isAccountOutOfDate;
- (bool)isAccountStateDirty;
- (bool)isEqual:(id)arg1;
- (id)lastUpdated;
- (id)loadFromCardFeatureDescriptor;
- (id)maximumBalance;
- (id)maximumTransferAmounts;
- (id)minimumTransferAmounts;
- (long long)pendingPaymentCount;
- (double)proactiveFetchPeriod;
- (id)requestFromUserFeatureDescriptor;
- (id)sendToUserFeatureDescriptor;
- (void)setAccountStateDirty:(bool)arg1;
- (void)setAssociatedPassSerialNumber:(id)arg1;
- (void)setAssociatedPassTypeIdentifier:(id)arg1;
- (void)setAssociatedPassURL:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setCurrentBalance:(id)arg1;
- (void)setIdentityVerificationRequired:(bool)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setMaximumBalance:(id)arg1;
- (void)setPendingPaymentCount:(long long)arg1;
- (void)setProactiveFetchPeriod:(double)arg1;
- (void)setStage:(unsigned long long)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSupportedFeatureDescriptors:(id)arg1;
- (void)setTermsAcceptanceRequired:(bool)arg1;
- (void)setTermsIdentifier:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (unsigned long long)stage;
- (unsigned long long)state;
- (id)supportedFeatureDescriptors;
- (bool)supportsCardBalancePromotion;
- (bool)supportsLoadFromCard;
- (bool)supportsRequestFromUser;
- (bool)supportsSendToUser;
- (bool)supportsTransferToBank;
- (bool)termsAcceptanceRequired;
- (id)termsIdentifier;
- (id)termsURL;
- (id)transferToBankFeatureDescriptor;

@end
