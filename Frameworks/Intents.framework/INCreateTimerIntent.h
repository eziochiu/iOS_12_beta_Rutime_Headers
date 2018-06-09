/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCreateTimerIntent : INIntent <INCreateTimerIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INSpeakableString *label;
@property (readonly) Class superclass;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (double)duration;
- (id)initWithLabel:(id)arg1 duration:(double)arg2;
- (id)label;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
