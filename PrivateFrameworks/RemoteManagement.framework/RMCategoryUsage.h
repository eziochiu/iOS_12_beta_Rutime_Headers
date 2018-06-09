/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMCategoryUsage : NSManagedObject <RMUsageProtocol>

@property (nonatomic, retain) RMCategory *category;
@property (nonatomic, retain) RMUserDevicePairRecord *sourceUserDevice;
@property (nonatomic, copy) NSDate *usageEndDate;
@property (nonatomic, copy) NSNumber *usageInSeconds;
@property (nonatomic, copy) NSDate *usageStartDate;

@end
