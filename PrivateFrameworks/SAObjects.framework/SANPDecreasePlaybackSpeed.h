/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPDecreasePlaybackSpeed : SADomainCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)decreasePlaybackSpeed;
+ (id)decreasePlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
