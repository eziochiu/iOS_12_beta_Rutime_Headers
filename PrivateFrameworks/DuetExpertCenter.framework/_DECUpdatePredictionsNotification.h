/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECUpdatePredictionsNotification : NSObject {
    id  _notificationToken;
}

+ (void)postNotificationForPredictionCategory:(unsigned long long)arg1 consumerType:(unsigned long long)arg2 andRefreshTimeInterval:(double)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNotificationsForPredictionCategory:(unsigned long long)arg1 andConsumerType:(unsigned long long)arg2 withCachedDateGetter:(id /* block */)arg3 andUpdateBlock:(id /* block */)arg4 finallyBlock:(id /* block */)arg5;
- (void)runNotificationBlockForListenerCategory:(unsigned long long)arg1 notificationCategory:(unsigned long long)arg2 listenConsumerType:(unsigned long long)arg3 notificationConsumerType:(unsigned long long)arg4 updateTimeInterval:(double)arg5 currentDate:(id)arg6 withCachedDateGetter:(id /* block */)arg7 andUpdateBlock:(id /* block */)arg8 finallyBlock:(id /* block */)arg9;

@end
