/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMEventTrigger : HMTrigger <HFPrettyDescription, HFStateDumpSerializable, HFTriggerProtocol, NSSecureCoding> {
    unsigned long long  _activationState;
    HMThreadSafeMutableArrayCollection * _currentEvents;
    bool  _executeOnce;
    NSPredicate * _internalPredicate;
    NSArray * _recurrences;
}

@property (nonatomic) unsigned long long activationState;
@property (nonatomic, readonly, copy) NSArray *allEvents;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentEvents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *endEvents;
@property (nonatomic, readonly, copy) NSArray *events;
@property (nonatomic, readonly) bool executeOnce;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSPredicate *internalPredicate;
@property (nonatomic, readonly, copy) NSPredicate *predicate;
@property (nonatomic, readonly, copy) NSArray *recurrences;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long triggerActivationState;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)__validateRecurrences:(id)arg1;
+ (id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 value:(id)arg2 valueFormatString:(id)arg3;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)isActionAffectedByEndEvents:(id)arg1;
+ (id)negateOffset:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)arg1 secondDateWithComponents:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)arg1 secondSignificantEvent:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 matchingValue:(id)arg2;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 relatedBy:(unsigned long long)arg2 toValue:(id)arg3;
+ (id)predicateForEvaluatingTriggerWithPresence:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_configure:(id)arg1 uuid:(id)arg2 messageDispatcher:(id)arg3 clientQueue:(id)arg4 delegateCaller:(id)arg5;
- (void)_handleEventTriggerConditionNotification:(id)arg1;
- (void)_handleEventTriggerExecuteOnceNotification:(id)arg1;
- (void)_handleEventTriggerRecurrencesNotification:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_serializeForAdd;
- (bool)_updateCharacterisiticReferenceInNewEvent:(id)arg1;
- (void)_updateCharacteristicReference;
- (void)_updateEvents:(id)arg1 endEvent:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_updateExecuteOnce:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)_updatePredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)activationState;
- (void)addEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)addedEvent:(id)arg1;
- (id)allEvents;
- (bool)compatibleWithApp;
- (bool)containsSharedTriggerActivationBits;
- (id)currentEvents;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endEvents;
- (id)events;
- (bool)executeOnce;
- (void)handleActivationStateNotification:(id)arg1;
- (void)handleEventAddedNotification:(id)arg1;
- (void)handleEventsRemovedNotification:(id)arg1;
- (void)handleEventsUpdatedNotification:(id)arg1;
- (id)initInternalWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (id)initWithName:(id)arg1 events:(id)arg2 predicate:(id)arg3;
- (id)internalPredicate;
- (id)predicate;
- (id)recurrences;
- (void)removeEvent:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setActivationState:(unsigned long long)arg1;
- (void)setCurrentEvents:(id)arg1;
- (void)setExecuteOnce:(bool)arg1;
- (void)setInternalPredicate:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (unsigned long long)triggerActivationState;
- (void)updateEndEvents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateEvents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateExecuteOnce:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updatePredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_localizedStringOrNilIfNotFoundForKey:(id)arg1;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 alarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)_hf_naturalLanguageNameWithHome:(id)arg1 nonAlarmCharacteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_localizationKeyForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;
+ (id)hf_localizedStringForProgrammableSwitchCharacteristic:(id)arg1 value:(id)arg2;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 characteristics:(id)arg2 triggerValue:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 recurrences:(id)arg3 type:(unsigned long long)arg4 forUser:(id)arg5;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 type:(unsigned long long)arg3;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 events:(id)arg2 type:(unsigned long long)arg3 forUser:(id)arg4;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 presenceEvent:(id)arg2 type:(unsigned long long)arg3;
+ (id)hf_naturalLanguageNameWithHome:(id)arg1 region:(id)arg2 type:(unsigned long long)arg3 forUser:(id)arg4;
+ (id)hf_triggerValueNaturalLanguageDescriptionWithCharacteristics:(id)arg1 triggerValue:(id)arg2;

- (id)hf_designateTrigger:(bool)arg1;
- (bool)hf_isHomeAppCreatedTrigger;
- (id)hf_markTriggerAsHomeAppCreated;
- (id)hf_naturalLanguageNameWithHome:(id)arg1 type:(unsigned long long)arg2;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (bool)hf_requiresConfirmationToRun;
- (id)hf_serializedStateDumpRepresentation;
- (unsigned long long)hf_triggerType;
- (id)hf_unmarkTriggerAsHomeAppCreated;

@end
