/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMAggregateWebUsage : NSManagedObject <RMUsageProtocol>

@property (nonatomic, copy) NSDate *usageEndDate;
@property (nonatomic, copy) NSNumber *usageInSeconds;
@property (nonatomic, copy) NSDate *usageStartDate;
@property (nonatomic, retain) RMUser *user;
@property (nonatomic, retain) RMWebDomain *webDomain;

@end
