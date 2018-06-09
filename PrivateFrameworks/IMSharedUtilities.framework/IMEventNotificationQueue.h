/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMEventNotificationQueue : NSObject {
    bool  _busy;
    <IMEventNotificationQueueDelegate> * _delegate;
    IMDoubleLinkedList * _eventNotificationList;
    bool  _paused;
    bool  _scheduled;
}

@property (getter=isBusy, readonly) bool busy;
@property (readonly) long long count;
@property <IMEventNotificationQueueDelegate> *delegate;
@property (nonatomic, readonly) IMDoubleLinkedList *eventNotificationList;
@property (getter=isPaused) bool paused;
@property (getter=isScheduled, readonly) bool scheduled;

- (void).cxx_destruct;
- (void)_didAddNotification:(id)arg1;
- (void)_didCancelNotifications;
- (void)_didChangeBusyState:(bool)arg1;
- (void)_didChangePausedState:(bool)arg1;
- (void)_didProcessQueue;
- (void)_dispatchProcessQueue;
- (void)_invokeEvent:(id)arg1;
- (void)_invokeNotifications;
- (void)_processQueue;
- (void)_scheduleIfNeeded:(bool)arg1;
- (void)_setBusy:(bool)arg1;
- (void)_willProcessQueue;
- (void)appendEventNotification:(id)arg1;
- (void)appendEventTarget:(id)arg1 eventNotificationBlock:(id /* block */)arg2;
- (void)appendEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(id /* block */)arg3;
- (void)cancelAllEventNotifications;
- (void)cancelEventNotificationsForNotificationTarget:(id)arg1;
- (bool)containsNotificationTarget:(id)arg1;
- (long long)count;
- (id)delegate;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (id)eventNotificationList;
- (id)init;
- (bool)isBusy;
- (bool)isPaused;
- (bool)isScheduled;
- (void)pushEventNotification:(id)arg1;
- (void)pushEventTarget:(id)arg1 eventNotificationBlock:(id /* block */)arg2;
- (void)pushEventTarget:(id)arg1 sender:(id)arg2 eventNotificationBlock:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(bool)arg1;

@end
