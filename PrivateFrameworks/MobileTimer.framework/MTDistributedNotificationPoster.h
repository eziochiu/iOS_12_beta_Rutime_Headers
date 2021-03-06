/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTDistributedNotificationPoster : NSObject <MTNotificationCenter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dismissNotificationsForAlarm:(id)arg1;
- (void)dismissNotificationsForTimer:(id)arg1;
- (void)postNotificationForScheduledAlarm:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)postNotificationForScheduledTimer:(id)arg1 completionBlock:(id /* block */)arg2;

@end
