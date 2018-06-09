/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAccountNotifier : NSObject {
    NSOperationQueue * _accountChangeHandlerQueue;
    int  _accountChangedToken;
    NSMapTable * _notificationHandlers;
}

@property (nonatomic, retain) NSOperationQueue *accountChangeHandlerQueue;
@property (nonatomic) int accountChangedToken;
@property (nonatomic, retain) NSMapTable *notificationHandlers;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (id)accountChangeHandlerQueue;
- (int)accountChangedToken;
- (void)dealloc;
- (id)init;
- (id)notificationHandlers;
- (void)postAccountChangedNotification:(id)arg1;
- (void)postAccountChangedNotificationToClients;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(id /* block */)arg2;
- (void)setAccountChangeHandlerQueue:(id)arg1;
- (void)setAccountChangedToken:(int)arg1;
- (void)setNotificationHandlers:(id)arg1;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;

@end
