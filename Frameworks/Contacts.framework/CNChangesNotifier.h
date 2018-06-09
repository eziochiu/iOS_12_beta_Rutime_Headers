/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNChangesNotifier : NSObject {
    CNChangesNotifierProxy * _notifierProxy;
}

@property (nonatomic, retain) CNChangesNotifierProxy *notifierProxy;

+ (void)flushSharedNotifier;
+ (id)sharedNotifier;
+ (id)sharedNotifierWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)didChangeMeContactSuccessfully:(bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (void)didSaveChangesSuccessfully:(bool)arg1 fromContactStore:(id)arg2 requestIdentifier:(id)arg3;
- (bool)forwardsSelfGeneratedDistributedSaveNotifications;
- (id)init;
- (id)initWithNotificationWrapper:(id)arg1 schedulerProvider:(id)arg2;
- (id)notifierProxy;
- (void)setExternalNotificationCoalescingDelay:(double)arg1;
- (void)setForwardsSelfGeneratedDistributedSaveNotifications:(bool)arg1;
- (void)setNotifierProxy:(id)arg1;
- (void)waitForCurrentTasksToFinish;
- (void)willSaveChanges;

@end
