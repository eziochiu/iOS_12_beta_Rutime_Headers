/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUsageDeviceIdentifier : RMUniquedManagedObject

@property (nonatomic, retain) RMDevice *device;
@property (nonatomic, copy) NSString *identifier;

- (id)computeUniqueIdentifier;
- (void)didChangeValueForKey:(id)arg1;

@end
