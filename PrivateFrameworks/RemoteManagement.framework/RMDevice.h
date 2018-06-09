/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMDevice : RMUniquedManagedObject

@property (nonatomic, retain) NSSet *apps;
@property (nonatomic, retain) NSData *capabilitiesPlist;
@property (nonatomic, retain) NSData *deviceInfoPlist;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isLocalDevice;
@property (nonatomic, retain) NSDate *lastUsageEventDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *usageIdentifiers;
@property (nonatomic, retain) NSSet *userDevicePairs;

+ (id)createOrReturnDeviceWithIdentifier:(id)arg1 inContext:(id)arg2 error:(id*)arg3;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
