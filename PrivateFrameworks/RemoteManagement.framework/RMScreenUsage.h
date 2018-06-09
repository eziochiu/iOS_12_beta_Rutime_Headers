/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMScreenUsage : NSManagedObject <RMUsageProtocol>

@property (nonatomic, retain) RMUserDevicePairRecord *sourceUserDevice;
@property (nonatomic, copy) NSDate *usageEndDate;
@property (nonatomic, copy) NSNumber *usageInSeconds;
@property (nonatomic, copy) NSDate *usageStartDate;

@end
