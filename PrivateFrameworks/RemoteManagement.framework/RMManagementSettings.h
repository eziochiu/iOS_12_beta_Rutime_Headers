/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMManagementSettings : NSManagedObject

@property (nonatomic) bool isContentAndPrivacyCloudSyncEnabled;
@property (nonatomic) bool isContentAndPrivacyEnabled;
@property (nonatomic) bool isPreviouslyEnabled;
@property (nonatomic) bool isScreenTimeCloudSyncEnabled;
@property (nonatomic) bool isScreenTimeEnabled;
@property (nonatomic, copy) NSString *passcode;
@property (nonatomic, retain) RMUser *user;
@property (nonatomic, retain) NSSet *userDevicePairs;

+ (id)fetchManagementSettingsForLocalUserForOrganization:(id)arg1;
+ (id)fetchRequestMatchingManagementSettingsForLocalUserAndDeviceForOrganization:(id)arg1;

- (void)setIsContentAndPrivacyEnabled:(bool)arg1;
- (void)setIsScreenTimeEnabled:(bool)arg1;

@end
