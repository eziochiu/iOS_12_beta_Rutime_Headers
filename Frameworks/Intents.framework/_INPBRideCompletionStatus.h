/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBRideCompletionStatus : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBRideCompletionStatus> {
    INCodableAttribute * _associatedCodableAttribute;
    bool  _canceled;
    bool  _canceledByService;
    bool  _completed;
    _INPBUserActivity * _completionUserActivity;
    NSArray * _defaultTippingOptions;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _feedbackTypes;
    struct { 
        unsigned int canceled : 1; 
        unsigned int canceledByService : 1; 
        unsigned int completed : 1; 
        unsigned int missedPickup : 1; 
        unsigned int outstanding : 1; 
    }  _has;
    bool  _missedPickup;
    bool  _outstanding;
    _INPBCurrencyAmountValue * _paymentAmount;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic) bool canceled;
@property (nonatomic) bool canceledByService;
@property (nonatomic) bool completed;
@property (nonatomic, retain) _INPBUserActivity *completionUserActivity;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *defaultTippingOptions;
@property (nonatomic, readonly) unsigned long long defaultTippingOptionsCount;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int*feedbackTypes;
@property (nonatomic, readonly) unsigned long long feedbackTypesCount;
@property (nonatomic) bool hasCanceled;
@property (nonatomic) bool hasCanceledByService;
@property (nonatomic) bool hasCompleted;
@property (nonatomic, readonly) bool hasCompletionUserActivity;
@property (nonatomic) bool hasMissedPickup;
@property (nonatomic) bool hasOutstanding;
@property (nonatomic, readonly) bool hasPaymentAmount;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool missedPickup;
@property (nonatomic) bool outstanding;
@property (nonatomic, retain) _INPBCurrencyAmountValue *paymentAmount;
@property (readonly) Class superclass;

+ (Class)defaultTippingOptionsType;

- (void).cxx_destruct;
- (int)StringAsFeedbackTypes:(id)arg1;
- (void)addDefaultTippingOptions:(id)arg1;
- (void)addFeedbackType:(int)arg1;
- (id)associatedCodableAttribute;
- (bool)canceled;
- (bool)canceledByService;
- (void)clearDefaultTippingOptions;
- (void)clearFeedbackTypes;
- (bool)completed;
- (id)completionUserActivity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultTippingOptions;
- (id)defaultTippingOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)defaultTippingOptionsCount;
- (id)dictionaryRepresentation;
- (int)feedbackTypeAtIndex:(unsigned long long)arg1;
- (int*)feedbackTypes;
- (id)feedbackTypesAsString:(int)arg1;
- (unsigned long long)feedbackTypesCount;
- (bool)hasCanceled;
- (bool)hasCanceledByService;
- (bool)hasCompleted;
- (bool)hasCompletionUserActivity;
- (bool)hasMissedPickup;
- (bool)hasOutstanding;
- (bool)hasPaymentAmount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)missedPickup;
- (bool)outstanding;
- (id)paymentAmount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setCanceled:(bool)arg1;
- (void)setCanceledByService:(bool)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setCompletionUserActivity:(id)arg1;
- (void)setDefaultTippingOptions:(id)arg1;
- (void)setFeedbackTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasCanceled:(bool)arg1;
- (void)setHasCanceledByService:(bool)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setHasMissedPickup:(bool)arg1;
- (void)setHasOutstanding:(bool)arg1;
- (void)setMissedPickup:(bool)arg1;
- (void)setOutstanding:(bool)arg1;
- (void)setPaymentAmount:(id)arg1;
- (void)writeTo:(id)arg1;

@end