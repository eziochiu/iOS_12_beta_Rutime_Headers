/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (nonatomic) bool acknowledgedExceedingVolumeLimit;
@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, copy) NSNumber *volumeValue;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)setVolumeLevel;
+ (id)setVolumeLevelWithDictionary:(id)arg1 context:(id)arg2;

- (bool)acknowledgedExceedingVolumeLimit;
- (id)actionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setAcknowledgedExceedingVolumeLimit:(bool)arg1;
- (void)setActionType:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setVolumeValue:(id)arg1;
- (id)volumeValue;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
