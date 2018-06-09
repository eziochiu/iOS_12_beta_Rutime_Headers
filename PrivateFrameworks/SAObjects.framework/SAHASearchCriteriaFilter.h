/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHASearchCriteriaFilter : SAHAFilter

@property (nonatomic, copy) NSURL *accessoryIdentifier;
@property (nonatomic, copy) NSString *accessoryName;
@property (nonatomic, copy) NSString *attribute;
@property (nonatomic, copy) NSString *entityType;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSURL *homeIdentifier;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic, copy) NSURL *roomIdentifier;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSURL *sceneIdentifier;
@property (nonatomic, copy) NSString *sceneName;
@property (nonatomic, copy) NSString *sceneType;
@property (nonatomic, copy) NSURL *serviceGroupIdentifier;
@property (nonatomic, copy) NSURL *serviceIdentifier;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, copy) NSString *serviceSubType;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSURL *zoneIdentifier;
@property (nonatomic, copy) NSString *zoneName;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)searchCriteriaFilter;
+ (id)searchCriteriaFilterWithDictionary:(id)arg1 context:(id)arg2;

- (id)accessoryIdentifier;
- (id)accessoryName;
- (id)attribute;
- (id)encodedClassName;
- (id)entityType;
- (id)groupIdentifier;
- (id)groupName;
- (id)homeIdentifier;
- (id)homeName;
- (id)roomIdentifier;
- (id)roomName;
- (id)sceneIdentifier;
- (id)sceneName;
- (id)sceneType;
- (id)serviceGroupIdentifier;
- (id)serviceIdentifier;
- (id)serviceName;
- (id)serviceSubType;
- (id)serviceType;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setAttribute:(id)arg1;
- (void)setEntityType:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setHomeName:(id)arg1;
- (void)setRoomIdentifier:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setSceneIdentifier:(id)arg1;
- (void)setSceneName:(id)arg1;
- (void)setSceneType:(id)arg1;
- (void)setServiceGroupIdentifier:(id)arg1;
- (void)setServiceIdentifier:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setServiceSubType:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)zoneIdentifier;
- (id)zoneName;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
