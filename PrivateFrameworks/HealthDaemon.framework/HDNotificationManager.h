/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNotificationManager : NSObject <HDDiagnosticObject> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSDate * _lastNotificationDate;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _resourceQueue;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

- (void).cxx_destruct;
- (id /* block */)_actionCompletionOnClientQueue:(id /* block */)arg1;
- (id)_aggregateBadge;
- (id)_badgeForDomain:(long long)arg1 error:(out id*)arg2;
- (id /* block */)_objectCompletionOnClientQueue:(id /* block */)arg1;
- (void)_postBadgesDidUpdateNotification;
- (void)_postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 url:(id)arg6 completion:(id /* block */)arg7;
- (id)_resourceQueue_badgeForDomain:(long long)arg1;
- (id)_resourceQueue_badgeForDomain:(long long)arg1 error:(out id*)arg2;
- (id)_resourceQueue_coaleseDomainBadges;
- (void)_resourceQueue_notifyObserversWithBadge:(id)arg1 domain:(long long)arg2;
- (void)_resourceQueue_notifyObserversWithNotification:(id)arg1;
- (bool)_resourceQueue_setBadge:(id)arg1 domain:(long long)arg2 error:(out id*)arg3;
- (void)_resourceQueue_updateApplicationBadge;
- (void)_sendCompanionUserNotificationResponse:(id /* block */)arg1 error:(id)arg2;
- (void)addNotificationObserver:(id)arg1;
- (void)badgeForDomain:(long long)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (bool)incrementBadgeForDomain:(long long)arg1 count:(long long)arg2 error:(out id*)arg3;
- (id)initWithProfile:(id)arg1;
- (void)postCompanionUserNotificationOfType:(long long)arg1 completion:(id /* block */)arg2;
- (void)postNotificationWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 completion:(id /* block */)arg4;
- (void)postNotificationWithTitle:(id)arg1 body:(id)arg2 categoryIdentifier:(id)arg3 subtitle:(id)arg4 domain:(long long)arg5 completion:(id /* block */)arg6;
- (void)receivedCompanionUserNotificationRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)registerWithUserNotificationCenter;
- (void)removeNotificationObserver:(id)arg1;
- (void)setBadge:(id)arg1 forDomain:(long long)arg2 completion:(id /* block */)arg3;
- (void)setUserNotificationCenter:(id)arg1;
- (id)userNotificationCenter;

@end
