/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>

@property (nonatomic, copy) NSArray *buckets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) INMediaItem *mediaContainer;
@property (nonatomic, readonly, copy) NSArray *mediaItems;
@property (nonatomic, readonly, copy) NSNumber *playShuffled;
@property (nonatomic, readonly) long long playbackRepeatMode;
@property (nonatomic, copy) NSString *recoID;
@property (nonatomic, readonly, copy) NSNumber *resumePlayback;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (id)_ignoredParameters;

- (id)_categoryVerb;
- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)_setMetadata:(id)arg1;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (id)buckets;
- (id)domain;
- (id)expirationDate;
- (id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5;
- (id)mediaContainer;
- (id)mediaItems;
- (id)parametersByName;
- (id)playShuffled;
- (long long)playbackRepeatMode;
- (id)recoID;
- (id)resumePlayback;
- (void)setBuckets:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setMediaContainer:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setPlayShuffled:(id)arg1;
- (void)setPlaybackRepeatMode:(long long)arg1;
- (void)setRecoID:(id)arg1;
- (void)setResumePlayback:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

// Image: /System/Library/CardServices/Plugins/AssistantCardService.bundle/AssistantCardService

- (void)requestCard:(id)arg1 reply:(id /* block */)arg2;
- (unsigned long long)servicePriorityForCardRequest:(id)arg1;

// Image: /System/Library/Frameworks/IntentsUI.framework/IntentsUI

- (id)_intentsui_backgroundHandlingAssertionForAppBundleIdentifier:(id)arg1 error:(id*)arg2;

@end
