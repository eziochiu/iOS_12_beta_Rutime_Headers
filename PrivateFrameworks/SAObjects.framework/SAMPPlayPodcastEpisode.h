/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPlayPodcastEpisode : SADomainCommand

@property (nonatomic, copy) NSString *assetInfo;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SAMPPodcast *podcastEpisode;
@property (nonatomic) bool startPlaying;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)playPodcastEpisode;
+ (id)playPodcastEpisodeWithDictionary:(id)arg1 context:(id)arg2;

- (id)assetInfo;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (id)podcastEpisode;
- (bool)requiresResponse;
- (void)setAssetInfo:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setPodcastEpisode:(id)arg1;
- (void)setStartPlaying:(bool)arg1;
- (bool)startPlaying;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
