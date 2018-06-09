/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMNotificationUsage : NSManagedObject

@property (nonatomic, retain) RMApp *app;
@property (nonatomic) unsigned long long notificationsCount;
@property (nonatomic, retain) RMUsageTime *usage;

@end
