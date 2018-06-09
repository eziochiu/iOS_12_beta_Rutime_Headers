/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>

@property (nonatomic, readonly, copy) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (bool)_hasTitle;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_subtitleForLanguage:(id)arg1;
- (id)_titleForLanguage:(id)arg1;
- (id)_typedBackingStore;
- (id)contents;
- (id)domain;
- (id)initWithContents:(id)arg1;
- (id)parametersByName;
- (void)setContents:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)shortDescriptionWithOutcome:(id)arg1;

@end
