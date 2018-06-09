/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPurchaseLookUpEntry : NSObject {
    NSDate * _dateOfExpiration;
    bool  _hasShownRenewalNotice;
    NSString * _identifier;
    bool  _isNewsAppPurchase;
    NSDate * _lastVerificationFailureTime;
    NSDate * _lastVerificationTime;
    NSString * _purchaseID;
    unsigned long long  _purchaseType;
    unsigned long long  _purchaseValidationState;
    NSString * _tagID;
}

@property (nonatomic, copy) NSDate *dateOfExpiration;
@property (nonatomic) bool hasShownRenewalNotice;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isNewsAppPurchase;
@property (nonatomic, copy) NSDate *lastVerificationFailureTime;
@property (nonatomic, copy) NSDate *lastVerificationTime;
@property (nonatomic, copy) NSString *purchaseID;
@property (nonatomic) unsigned long long purchaseType;
@property (nonatomic) unsigned long long purchaseValidationState;
@property (nonatomic, copy) NSString *tagID;

- (void).cxx_destruct;
- (id)dateOfExpiration;
- (id)dictionaryRepresentation;
- (bool)hasShownRenewalNotice;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithEntryID:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 lastVerificationTime:(id)arg4 lastVerificationFailureTime:(id)arg5 purchaseType:(unsigned long long)arg6 purchaseValidationState:(unsigned long long)arg7 isNewsAppPurchase:(bool)arg8 dateOfExpiration:(id)arg9 hasShownRenewalNotice:(bool)arg10;
- (bool)isNewsAppPurchase;
- (id)lastVerificationFailureTime;
- (id)lastVerificationTime;
- (id)purchaseID;
- (unsigned long long)purchaseType;
- (unsigned long long)purchaseValidationState;
- (void)setDateOfExpiration:(id)arg1;
- (void)setHasShownRenewalNotice:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsNewsAppPurchase:(bool)arg1;
- (void)setLastVerificationFailureTime:(id)arg1;
- (void)setLastVerificationTime:(id)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setPurchaseType:(unsigned long long)arg1;
- (void)setPurchaseValidationState:(unsigned long long)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;

@end
