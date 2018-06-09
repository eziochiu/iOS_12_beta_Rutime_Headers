/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSAlertManager : NSObject {
    NSMutableDictionary * _personIDToNotification;
}

+ (id)sharedAlertManager;

- (void).cxx_destruct;
- (void)_dismissNotificationForPersonID:(id)arg1;
- (void)_showNotificationInfo:(id)arg1;
- (void)_userDidRespondToNotification:(struct __CFUserNotification { }*)arg1 info:(id)arg2 responseFlags:(unsigned long long)arg3;
- (void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)init;

@end
