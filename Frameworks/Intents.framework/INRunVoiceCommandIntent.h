/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRunVoiceCommandIntent : INIntent <INRunVoiceCommandIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INVoiceCommandDeviceInformation *originDevice;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) INSpeakableString *voiceCommand;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)initWithVoiceCommand:(id)arg1 originDevice:(id)arg2;
- (id)originDevice;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setOriginDevice:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (void)setVoiceCommand:(id)arg1;
- (id)verb;
- (id)voiceCommand;

@end
