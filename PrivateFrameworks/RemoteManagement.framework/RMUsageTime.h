/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUsageTime : NSManagedObject

@property (nonatomic) unsigned long long deviceUnlocks;
@property (nonatomic, retain) NSSet *notificationUsages;
@property (nonatomic) unsigned long long screenWakes;
@property (nonatomic, retain) RMUser *sourceUser;
@property (nonatomic, retain) RMUserDevicePairRecord *sourceUserDevice;
@property (nonatomic, copy) NSDate *usageStartDate;

@end
