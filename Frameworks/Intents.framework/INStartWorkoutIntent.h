/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INStartWorkoutIntent : INIntent <INStartWorkoutIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *goalValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *isOpenEnded;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long workoutGoalUnitType;
@property (nonatomic, readonly) long long workoutLocationType;
@property (nonatomic, readonly, copy) INSpeakableString *workoutName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)goalValue;
- (id)initWithWorkoutName:(id)arg1 goalValue:(id)arg2 workoutGoalUnitType:(long long)arg3 workoutLocationType:(long long)arg4 isOpenEnded:(id)arg5;
- (id)isOpenEnded;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setIsOpenEnded:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (void)setWorkoutGoalUnitType:(long long)arg1;
- (void)setWorkoutLocationType:(long long)arg1;
- (void)setWorkoutName:(id)arg1;
- (id)verb;
- (long long)workoutGoalUnitType;
- (long long)workoutLocationType;
- (id)workoutName;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)_intentsui_backgroundHandlingAssertionForAppBundleIdentifier:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

@end
