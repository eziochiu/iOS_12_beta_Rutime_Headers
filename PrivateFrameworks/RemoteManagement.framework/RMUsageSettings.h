/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUsageSettings : NSManagedObject

@property (nonatomic) bool isEnabled;
@property (nonatomic, retain) RMUser *user;
@property (nonatomic, retain) NSSet *userDevicePairs;

+ (id)fetchRequestMatchingUsageSettingsForLocalUserAndDeviceForOrganization:(id)arg1;

@end
