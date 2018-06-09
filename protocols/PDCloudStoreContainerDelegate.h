/* made by EzioChiu.
 */

@protocol PDCloudStoreContainerDelegate <NSObject>

@required

- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 createdZoneWithName:(NSString *)arg2;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(PDCloudStoreContainer *)arg1;

@end
