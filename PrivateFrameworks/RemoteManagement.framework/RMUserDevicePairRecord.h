/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUserDevicePairRecord : RMUniquedManagedObject

@property (nonatomic, retain) NSSet *allUsages;
@property (nonatomic, copy) NSString *altURI;
@property (nonatomic, retain) NSSet *appUsages;
@property (nonatomic, retain) NSSet *categoryUsages;
@property (nonatomic, retain) RMManagementSettings *managementSettings;
@property (nonatomic, retain) NSSet *screenUsages;
@property (nonatomic, retain) RMDevice *sourceDevice;
@property (nonatomic, retain) RMUser *sourceUser;
@property (nonatomic, copy) NSString *uri;
@property (nonatomic, retain) RMUsageSettings *usageSettings;
@property (nonatomic, retain) NSSet *webUsages;

+ (id)fetchRequestForUserDevicePairRecordsFromOrganizationWithIdentifier:(id)arg1;
+ (id)fetchRequestForUserDevicePairRecordsWithURI:(id)arg1;
+ (id)fetchRequestMatchingUserDevicePairsForLocalUserAndDeviceFromOrganizationWithIdentifier:(id)arg1;

- (id)computeUniqueIdentifier;
- (void)setUri:(id)arg1;

@end
