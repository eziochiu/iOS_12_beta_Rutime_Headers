/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSString *insertLocation;
@property (nonatomic, retain) SAMPCollection *mediaCollection;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)addMediaItemsToUpNextQueue;
+ (id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (id)insertLocation;
- (id)mediaCollection;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setInsertLocation:(id)arg1;
- (void)setMediaCollection:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
