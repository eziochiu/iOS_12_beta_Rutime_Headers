/* made by EzioChiu.
 */

@protocol _INPBPayloadUnsupported <NSObject>

@required

+ (Class)conflictingParametersType;

- (int)StringAsCreateTimerIntentLabelUnsupportedReason:(NSString *)arg1;
- (int)StringAsReason:(NSString *)arg1;
- (int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(NSString *)arg1;
- (int)StringAsRequestPaymentIntentPayerUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendMessageIntentRecipientUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(NSString *)arg1;
- (int)StringAsSendPaymentIntentPayeeUnsupportedReason:(NSString *)arg1;
- (int)StringAsSetTimerAttributeIntentTargetTimerUnsupportedReason:(NSString *)arg1;
- (void)addConflictingParameters:(_INPBConflictingParameter *)arg1;
- (void)clearConflictingParameters;
- (NSArray *)conflictingParameters;
- (_INPBConflictingParameter *)conflictingParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingParametersCount;
- (int)createTimerIntentLabelUnsupportedReason;
- (NSString *)createTimerIntentLabelUnsupportedReasonAsString:(int)arg1;
- (bool)hasCreateTimerIntentLabelUnsupportedReason;
- (bool)hasReason;
- (bool)hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
- (bool)hasRequestPaymentIntentPayerUnsupportedReason;
- (bool)hasSendMessageIntentRecipientUnsupportedReason;
- (bool)hasSendPaymentIntentCurrencyAmountUnsupportedReason;
- (bool)hasSendPaymentIntentPayeeUnsupportedReason;
- (bool)hasSetTimerAttributeIntentTargetTimerUnsupportedReason;
- (int)reason;
- (NSString *)reasonAsString:(int)arg1;
- (int)requestPaymentIntentCurrencyAmountUnsupportedReason;
- (NSString *)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (int)requestPaymentIntentPayerUnsupportedReason;
- (NSString *)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg1;
- (int)sendMessageIntentRecipientUnsupportedReason;
- (NSString *)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg1;
- (int)sendPaymentIntentCurrencyAmountUnsupportedReason;
- (NSString *)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (int)sendPaymentIntentPayeeUnsupportedReason;
- (NSString *)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg1;
- (void)setConflictingParameters:(NSArray *)arg1;
- (void)setCreateTimerIntentLabelUnsupportedReason:(int)arg1;
- (void)setHasCreateTimerIntentLabelUnsupportedReason:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRequestPaymentIntentCurrencyAmountUnsupportedReason:(bool)arg1;
- (void)setHasRequestPaymentIntentPayerUnsupportedReason:(bool)arg1;
- (void)setHasSendMessageIntentRecipientUnsupportedReason:(bool)arg1;
- (void)setHasSendPaymentIntentCurrencyAmountUnsupportedReason:(bool)arg1;
- (void)setHasSendPaymentIntentPayeeUnsupportedReason:(bool)arg1;
- (void)setHasSetTimerAttributeIntentTargetTimerUnsupportedReason:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setRequestPaymentIntentCurrencyAmountUnsupportedReason:(int)arg1;
- (void)setRequestPaymentIntentPayerUnsupportedReason:(int)arg1;
- (void)setSendMessageIntentRecipientUnsupportedReason:(int)arg1;
- (void)setSendPaymentIntentCurrencyAmountUnsupportedReason:(int)arg1;
- (void)setSendPaymentIntentPayeeUnsupportedReason:(int)arg1;
- (void)setSetTimerAttributeIntentTargetTimerUnsupportedReason:(int)arg1;
- (int)setTimerAttributeIntentTargetTimerUnsupportedReason;
- (NSString *)setTimerAttributeIntentTargetTimerUnsupportedReasonAsString:(int)arg1;

@end
