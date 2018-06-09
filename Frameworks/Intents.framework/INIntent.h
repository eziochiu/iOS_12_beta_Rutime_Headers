/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntent : NSObject <ACSCardRequesting, CRContent, INGenericIntent, INImageProxyInjecting, INIntentExport, INIntentSlotComposing, INKeyImageProducing, INRuntimeObject, NSCopying, NSSecureCoding> {
    NSArray * _airPlayRouteIds;
    PBCodable * _backingStore;
    NSString * _identifier;
    NSMutableDictionary * _intentInstanceDescriptionMapping;
    NSDictionary * _parameterCombinations;
    NSArray * _parameterImages;
}

@property (nonatomic, readonly, copy) NSArray *_associatedImageAttributes;
@property (nonatomic, readonly) NSString *_categoryVerb;
@property (nonatomic, readonly) NSArray *_codableAttributes;
@property (nonatomic, readonly) NSOrderedSet *_displayOrderedAttributes;
@property (setter=_setExecutionContext:, nonatomic) long long _executionContext;
@property (nonatomic, readonly) bool _hasTitle;
@property (nonatomic, readonly) long long _intentCategory;
@property (readonly) long long _intents_toggleState;
@property (readonly) INImage *_keyImage;
@property (nonatomic, readonly, copy) NSString *_localizedVerb;
@property (setter=_setMetadata:, nonatomic, retain) _INPBIntentMetadata *_metadata;
@property (setter=_setNanoLaunchId:, nonatomic, retain) NSString *_nanoLaunchId;
@property (setter=_setParameterCombinations:, nonatomic, retain) NSDictionary *_parameterCombinations;
@property (nonatomic, readonly, copy) NSString *_subtitle;
@property (nonatomic, readonly) bool _supportsBackgroundExecution;
@property (nonatomic, readonly, copy) NSString *_title;
@property (nonatomic, readonly) long long _type;
@property (getter=_isUserConfirmationRequired, setter=_setUserConfirmationRequired:, nonatomic) bool _userConfirmationRequired;
@property (nonatomic, readonly) NSDictionary *_validParameterCombinations;
@property (setter=_setAirPlayRouteIds:, nonatomic, retain) NSArray *airPlayRouteIds;
@property (nonatomic, copy) PBCodable *backingStore;
@property (readonly) long long cd_interactionMechanism;
@property (readonly) NSArray *cd_recipients;
@property (readonly) bool cd_saveToKnowledgeStore;
@property (readonly) bool cd_saveToPeopleStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *domain;
@property (setter=_setExtensionBundleId:, nonatomic, retain) NSString *extensionBundleId;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *intentDescription;
@property (nonatomic, readonly) NSString *intentId;
@property (nonatomic, readonly, copy) NSString *intentSummary;
@property (setter=_setLaunchId:, nonatomic, retain) NSString *launchId;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=_parameterImages, setter=_setParameterImages:, nonatomic, copy) NSArray *parameterImages;
@property (nonatomic, copy) NSDictionary *parametersByName;
@property (nonatomic, copy) NSString *suggestedInvocationPhrase;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long triggerMethod;
@property (nonatomic, readonly) NSString *typeName;
@property (nonatomic, readonly) NSString *utteranceString;
@property (nonatomic, copy) NSString *verb;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;
+ (void)initialize;
+ (id)intentDescription;
+ (bool)resolveInstanceMethod:(SEL)arg1;
+ (bool)supportsSecureCoding;
+ (id)typeName;

- (void).cxx_destruct;
- (id)_associatedImageAttributes;
- (id)_baseClassName;
- (id)_categoryVerb;
- (id)_className;
- (id)_codableAttributes;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (id)_dictionaryRepresentation;
- (id)_displayOrderedAttributes;
- (id)_emptyCopy;
- (long long)_executionContext;
- (bool)_hasTitle;
- (id)_imageForParameter:(id)arg1;
- (id)_impl;
- (id)_inCodable;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 error:(id*)arg3;
- (id)_initWithIdentifier:(id)arg1 backingStore:(id)arg2 schema:(id)arg3 error:(id*)arg4;
- (id)_initWithIdentifier:(id)arg1 schema:(id)arg2 name:(id)arg3 data:(id)arg4;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingCustomCodableStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_injectProxiesForImagesUsingIntentSlotDescriptionStrategy:(id /* block */)arg1 completion:(id /* block */)arg2;
- (long long)_intentCategory;
- (id)_intentInstanceDescription;
- (id)_intents_bestBundleIdentifier;
- (id)_intents_bundleIdForDisplay;
- (id)_intents_bundleIdForLaunching;
- (id)_intents_launchIdForCurrentPlatform;
- (long long)_intents_toggleState;
- (bool)_isUserConfirmationRequired;
- (id)_keyImage;
- (id)_keyImageWithCustomCodableStrategy;
- (id)_keyImageWithIntentDescriptionStrategy;
- (id)_localizedCombinationStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundleURL:(id)arg4 language:(id)arg5;
- (id)_localizedVerb;
- (id)_metadata;
- (id)_nanoLaunchId;
- (id)_nonNilParameters;
- (id)_parameterCombinations;
- (id)_parameterImages;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (id)_redactedDictionaryRepresentation;
- (void)_setAirPlayRouteIds:(id)arg1;
- (void)_setCategoryVerb:(id)arg1;
- (void)_setExecutionContext:(long long)arg1;
- (void)_setExtensionBundleId:(id)arg1;
- (void)_setImage:(id)arg1 forParameter:(id)arg2;
- (void)_setIntentCategory:(long long)arg1;
- (void)_setLaunchId:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setNanoLaunchId:(id)arg1;
- (void)_setParameterCombinations:(id)arg1;
- (void)_setParameterImages:(id)arg1;
- (void)_setUserConfirmationRequired:(bool)arg1;
- (id)_subtitle;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (bool)_supportsBackgroundExecution;
- (id)_title;
- (id)_titleForLanguage:(id)arg1;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (long long)_type;
- (id)_typedBackingStore;
- (id)_validParameterCombinations;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)airPlayRouteIds;
- (id)backingStore;
- (bool)configureAttributeSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageForParameterNamed:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;
- (id)intentDescription;
- (id)intentId;
- (id)intentSlotDescriptions;
- (id)intentSummary;
- (id)intentSummaryForLanguage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGenericIntent;
- (id)keyImage;
- (id)launchId;
- (id)localizeValueOfSlotDescription:(id)arg1 forLanguage:(id)arg2;
- (id)name;
- (id)nameForLanguage:(id)arg1;
- (id)parametersByName;
- (id)protoData;
- (void)setBackingStore:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1 forParameterNamed:(id)arg2;
- (void)setParametersByName:(id)arg1;
- (void)setSuggestedInvocationPhrase:(id)arg1;
- (bool)setValue:(id)arg1 forProperty:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)suggestedInvocationPhrase;
- (long long)triggerMethod;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x1[8]; })arg1 bundle:(id)arg2;
- (id)typeName;
- (id)utteranceString;
- (id)valueForKey:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)verb;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

- (id)acs_utteranceForCardService;
- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)_intentsui_backgroundHandlingAssertionForAppBundleIdentifier:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

+ (bool)apui_isSupportedForCardRequests;

- (id)apui_intent;
- (id)apui_keyPeople;
- (bool)apui_requiresAuthentication;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (id)underlyingInteraction;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToKnowledgeStore;
- (bool)cd_saveToPeopleStore;
- (id)contextMetadata;

// Image: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions

+ (void)undonateForDeviceId:(id)arg1 withCompletion:(id /* block */)arg2;

- (void)donateWithCompletion:(id /* block */)arg1;
- (id)groupIdentifierForIdentifiableIntent:(id)arg1;
- (id)identifierForIdentifiableIntent:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

+ (id)mt_intentForAlarmCreate:(id)arg1;
+ (id)mt_intentForAlarmDisable:(id)arg1;
+ (id)mt_intentForAlarmEnable:(id)arg1;
+ (id)mt_intentForAlarmUpdate:(id)arg1;

- (id)mt_initWithAlarm:(id)arg1 verb:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI

- (id)vcui_displayImageData;
- (bool)vcui_isIntentFromSystemApp;
- (id)vcui_keyPeople;

@end
