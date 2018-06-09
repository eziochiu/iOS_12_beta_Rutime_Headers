/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCreateTaskListIntent : INIntent <INCreateTaskListIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) INSpeakableString *groupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *taskTitles;
@property (nonatomic, readonly, copy) INSpeakableString *title;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)domain;
- (id)groupName;
- (id)initWithTitle:(id)arg1 taskTitles:(id)arg2 groupName:(id)arg3;
- (id)parametersByName;
- (void)setDomain:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)taskTitles;
- (id)title;
- (id)verb;

@end
