/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) bool dryRun;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (nonatomic) bool shouldShuffle;
@property (nonatomic, copy) NSNumber *startPlaying;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)loadPredefinedQueue;
+ (id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2;

- (bool)dryRun;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (int)mediaItemType;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setDryRun:(bool)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setMediaItemType:(int)arg1;
- (void)setShouldShuffle:(bool)arg1;
- (void)setStartPlaying:(id)arg1;
- (bool)shouldShuffle;
- (id)startPlaying;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
