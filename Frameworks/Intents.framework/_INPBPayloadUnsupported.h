/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadUnsupported : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPayloadUnsupported> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _conflictingParameters;
    int  _createTimerIntentLabelUnsupportedReason;
    struct { 
        unsigned int requestPaymentIntentCurrencyAmountUnsupportedReason : 1; 
        unsigned int sendPaymentIntentCurrencyAmountUnsupportedReason : 1; 
        unsigned int createTimerIntentLabelUnsupportedReason : 1; 
        unsigned int sendPaymentIntentPayeeUnsupportedReason : 1; 
        unsigned int requestPaymentIntentPayerUnsupportedReason : 1; 
        unsigned int reason : 1; 
        unsigned int sendMessageIntentRecipientUnsupportedReason : 1; 
        unsigned int setTimerAttributeIntentTargetTimerUnsupportedReason : 1; 
    }  _has;
    int  _reason;
    int  _requestPaymentIntentCurrencyAmountUnsupportedReason;
    int  _requestPaymentIntentPayerUnsupportedReason;
    int  _sendMessageIntentRecipientUnsupportedReason;
    int  _sendPaymentIntentCurrencyAmountUnsupportedReason;
    int  _sendPaymentIntentPayeeUnsupportedReason;
    int  _setTimerAttributeIntentTargetTimerUnsupportedReason;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSArray *conflictingParameters;
@property (nonatomic, readonly) unsigned long long conflictingParametersCount;
@property (nonatomic) int createTimerIntentLabelUnsupportedReason;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCreateTimerIntentLabelUnsupportedReason;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) bool hasRequestPaymentIntentPayerUnsupportedReason;
@property (nonatomic) bool hasSendMessageIntentRecipientUnsupportedReason;
@property (nonatomic) bool hasSendPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) bool hasSendPaymentIntentPayeeUnsupportedReason;
@property (nonatomic) bool hasSetTimerAttributeIntentTargetTimerUnsupportedReason;
@property (readonly) unsigned long long hash;
@property (nonatomic) int reason;
@property (nonatomic) int requestPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) int requestPaymentIntentPayerUnsupportedReason;
@property (nonatomic) int sendMessageIntentRecipientUnsupportedReason;
@property (nonatomic) int sendPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) int sendPaymentIntentPayeeUnsupportedReason;
@property (nonatomic) int setTimerAttributeIntentTargetTimerUnsupportedReason;
@property (readonly) Class superclass;

+ (Class)conflictingParametersType;

- (void).cxx_destruct;
- (int)StringAsCreateTimerIntentLabelUnsupportedReason:(id)arg1;
- (int)StringAsReason:(id)arg1;
- (int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (int)StringAsRequestPaymentIntentPayerUnsupportedReason:(id)arg1;
- (int)StringAsSendMessageIntentRecipientUnsupportedReason:(id)arg1;
- (int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (int)StringAsSendPaymentIntentPayeeUnsupportedReason:(id)arg1;
- (int)StringAsSetTimerAttributeIntentTargetTimerUnsupportedReason:(id)arg1;
- (void)addConflictingParameters:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearConflictingParameters;
- (id)conflictingParameters;
- (id)conflictingParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingParametersCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)createTimerIntentLabelUnsupportedReason;
- (id)createTimerIntentLabelUnsupportedReasonAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (bool)hasCreateTimerIntentLabelUnsupportedReason;
- (bool)hasReason;
- (bool)hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
- (bool)hasRequestPaymentIntentPayerUnsupportedReason;
- (bool)hasSendMessageIntentRecipientUnsupportedReason;
- (bool)hasSendPaymentIntentCurrencyAmountUnsupportedReason;
- (bool)hasSendPaymentIntentPayeeUnsupportedReason;
- (bool)hasSetTimerAttributeIntentTargetTimerUnsupportedReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (id)reasonAsString:(int)arg1;
- (int)requestPaymentIntentCurrencyAmountUnsupportedReason;
- (id)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (int)requestPaymentIntentPayerUnsupportedReason;
- (id)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg1;
- (int)sendMessageIntentRecipientUnsupportedReason;
- (id)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg1;
- (int)sendPaymentIntentCurrencyAmountUnsupportedReason;
- (id)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (int)sendPaymentIntentPayeeUnsupportedReason;
- (id)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setConflictingParameters:(id)arg1;
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
- (id)setTimerAttributeIntentTargetTimerUnsupportedReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
