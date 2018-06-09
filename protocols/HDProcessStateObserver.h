/* made by EzioChiu.
 */

@protocol HDProcessStateObserver <NSObject>

@optional

- (void)processDidEnterBackground:(NSString *)arg1;
- (void)processDidEnterForeground:(NSString *)arg1;
- (void)processResumed:(NSString *)arg1;
- (void)processSuspended:(NSString *)arg1;
- (void)processTerminated:(NSString *)arg1;

@end
