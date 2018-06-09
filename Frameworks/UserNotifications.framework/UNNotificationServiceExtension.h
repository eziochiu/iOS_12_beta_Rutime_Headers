/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationServiceExtension : NSObject <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)didReceiveNotificationRequest:(id)arg1 withContentHandler:(id /* block */)arg2;
- (id)init;
- (void)serviceExtensionTimeWillExpire;

@end
