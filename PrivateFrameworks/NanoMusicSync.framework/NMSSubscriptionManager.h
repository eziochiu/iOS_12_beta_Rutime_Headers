/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSSubscriptionManager : NSObject <ICEnvironmentMonitorObserver> {
    ACAccount * _activeAccount;
    unsigned long long  _failedGetSubscriptionStatusAttempts;
    long long  _icStatusType;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _subscriptionStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long subscriptionStatus;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;
- (void)_handleICSubscriptionStatusDidChangeNotification:(id)arg1;
- (unsigned long long)_statusWithActiveAccount:(id)arg1 icStatusType:(long long)arg2;
- (void)_updateActiveAccount;
- (void)_updateICSubscriptionStatusType;
- (void)_updateSubscriptionStatus;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (id)init;
- (unsigned long long)subscriptionStatus;

@end
