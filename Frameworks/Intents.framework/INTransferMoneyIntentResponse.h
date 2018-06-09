/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTransferMoneyIntentResponse : INIntentResponse <INTransferMoneyIntentResponseExport> {
    _INPBTransferMoneyIntentResponse * _responseMessagePBRepresentation;
}

@property (nonatomic, readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) INPaymentAccount *fromAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) INPaymentAccount *toAccount;
@property (nonatomic, copy) INPaymentAmount *transactionAmount;
@property (nonatomic, copy) NSString *transactionNote;
@property (nonatomic, copy) INDateComponentsRange *transactionScheduledDate;
@property (nonatomic, copy) INCurrencyAmount *transferFee;

+ (bool)_appLaunchRequestedFromCode:(long long)arg1;
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(bool)arg3;
+ (int)_errorCodeFromCode:(long long)arg1;
+ (int)_typeFromCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;
- (long long)_intentResponseCode;
- (id)_responseMessagePBRepresentation;
- (long long)code;
- (void)encodeWithCoder:(id)arg1;
- (id)fromAccount;
- (id)init;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)propertiesByName;
- (void)setFromAccount:(id)arg1;
- (void)setPropertiesByName:(id)arg1;
- (void)setToAccount:(id)arg1;
- (void)setTransactionAmount:(id)arg1;
- (void)setTransactionNote:(id)arg1;
- (void)setTransactionScheduledDate:(id)arg1;
- (void)setTransferFee:(id)arg1;
- (id)toAccount;
- (id)transactionAmount;
- (id)transactionNote;
- (id)transactionScheduledDate;
- (id)transferFee;

@end
