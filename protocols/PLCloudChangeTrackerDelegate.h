/* made by EzioChiu.
 */

@protocol PLCloudChangeTrackerDelegate <NSObject>

@required

- (void)changeTrackerDidReceiveChanges;
- (id)readTokenObjectWithKey:(NSString *)arg1;
- (void)saveTokenObject:(id)arg1 forKey:(NSString *)arg2;

@end
