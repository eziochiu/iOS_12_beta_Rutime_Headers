/* made by EzioChiu.
 */

@protocol CoreDAVGetAccountPropertiesTaskGroupDelegate <CoreDAVTaskGroupDelegate>

@required

- (void)getAccountPropertiesTask:(CoreDAVGetAccountPropertiesTaskGroup *)arg1 completedWithError:(NSError *)arg2;

@end
