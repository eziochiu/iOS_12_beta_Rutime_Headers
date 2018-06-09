/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAppleAccountSettings : HMFObject <HMFLogging> {
    int  _circleChangedNotificationToken;
    NSObject<OS_dispatch_queue> * _clientQueue;
    bool  _homeEnabled;
    bool  _keychainSyncEnabled;
    bool  _migrated;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    int  _viewMembershipChangedNotificationToken;
}

@property (nonatomic) int circleChangedNotificationToken;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHomeEnabled, readonly) bool homeEnabled;
@property (getter=isKeychainSyncEnabled) bool keychainSyncEnabled;
@property (nonatomic) bool migrated;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic) int viewMembershipChangedNotificationToken;

+ (id)logCategory;
+ (id)sharedSettings;
+ (bool)supportsCloudSettings;

- (void).cxx_destruct;
- (void)__migrateHomePreferences;
- (void)__registerForKeychainChangeNotifications;
- (void)__synchronize;
- (void)__updateHomeEnabled:(bool)arg1 userInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_notifyClientsOfUpdatedHomeState:(bool)arg1 userInitiated:(bool)arg2;
- (void)_notifyClientsOfUpdatedKeychainSyncState:(bool)arg1;
- (id)attributeDescriptions;
- (int)circleChangedNotificationToken;
- (id)clientQueue;
- (void)dealloc;
- (void)enableHome:(bool)arg1 userInitiated:(bool)arg2;
- (id)init;
- (bool)isHomeEnabled;
- (bool)isKeychainSyncEnabled;
- (bool)migrated;
- (id)propertyQueue;
- (void)setCircleChangedNotificationToken:(int)arg1;
- (void)setKeychainSyncEnabled:(bool)arg1;
- (void)setMigrated:(bool)arg1;
- (void)setViewMembershipChangedNotificationToken:(int)arg1;
- (void)synchronize;
- (void)updateHomeEnabled:(bool)arg1 userInitiated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (int)viewMembershipChangedNotificationToken;

@end
