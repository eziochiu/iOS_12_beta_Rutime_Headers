/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSeekToPlaybackPosition : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSNumber *positionInMilliseconds;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)seekToPlaybackPosition;
+ (id)seekToPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (id)positionInMilliseconds;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setPositionInMilliseconds:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
