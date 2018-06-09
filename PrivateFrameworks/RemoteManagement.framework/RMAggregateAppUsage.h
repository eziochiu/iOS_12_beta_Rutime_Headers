/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAggregateAppUsage : NSManagedObject <RMUsageProtocol>

@property (nonatomic, retain) RMApp *app;
@property (nonatomic, copy) NSDate *usageEndDate;
@property (nonatomic, copy) NSNumber *usageInSeconds;
@property (nonatomic, copy) NSDate *usageStartDate;
@property (nonatomic, retain) RMUser *user;

@end
