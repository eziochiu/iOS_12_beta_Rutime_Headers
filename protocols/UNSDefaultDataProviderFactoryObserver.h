/* made by EzioChiu.
 */

@protocol UNSDefaultDataProviderFactoryObserver <NSObject>

@required

- (void)applicationsDidAuthorizeNotificationSettings:(NSSet *)arg1;
- (void)applicationsDidDenyNotificationSettings:(NSSet *)arg1;

@end
