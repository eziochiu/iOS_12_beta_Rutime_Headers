/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>

@property (nonatomic) long long audioRoute;
@property (nonatomic, readonly, copy) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (long long)audioRoute;
- (bool)configureAttributeSet:(id)arg1;
- (id)contacts;
- (id)domain;
- (id)initWithContacts:(id)arg1;
- (id)parametersByName;
- (void)setAudioRoute:(long long)arg1;
- (void)setContacts:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (void)apr_getArgsInto:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI

- (id)apui_keyPeople;

// Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet

- (long long)cd_interactionMechanism;
- (id)cd_recipients;
- (bool)cd_saveToPeopleStore;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI

- (id)vcui_keyPeople;

@end
