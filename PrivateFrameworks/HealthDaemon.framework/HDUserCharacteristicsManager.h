/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDUserCharacteristicsManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    NSDictionary * _lastUserProfile;
    bool  _needsUpdateAfterUnlock;
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSHashTable * _observers;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _shouldUpdateQuantityCharacteristics;
    NSDate * _userProfileLastUpdated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *lastUserProfile;
@property (nonatomic) bool needsUpdateAfterUnlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *observerQueue;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) HDProfile *profile;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) bool shouldUpdateQuantityCharacteristics;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDate *userProfileLastUpdated;

- (void).cxx_destruct;
- (id)_mostRecentSampleOfType:(id)arg1 error:(id*)arg2;
- (void)_queue_alertObserversDidUpdateUserProfile;
- (void)_queue_updateQuantityCharacteristics;
- (void)_queue_updateQuantityCharacteristicsAndUserProfileIfNeeded;
- (void)_queue_updateUserProfile;
- (bool)_setUserCharacteristic:(id)arg1 forType:(id)arg2 shouldInsertSample:(bool)arg3 updateProfileAndSync:(bool)arg4 error:(id*)arg5;
- (void)_updateQuantityCharacteristicsAndUserProfile;
- (id)_userCharacteristicForType:(id)arg1 entity:(id*)arg2 error:(id*)arg3;
- (void)_userCharacteristicsDidChangeShouldUpdateUserProfile:(bool)arg1 shouldSync:(bool)arg2;
- (void)addProfileObserver:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (id)lastUserProfile;
- (bool)needsUpdateAfterUnlock;
- (id)observerQueue;
- (id)observers;
- (id)profile;
- (id)queue;
- (void)removeProfileObserver:(id)arg1;
- (double)restingCaloriesFromTotalCalories:(double)arg1 timeInterval:(double)arg2 authorizedToRead:(bool)arg3;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)setLastUserProfile:(id)arg1;
- (void)setNeedsUpdateAfterUnlock:(bool)arg1;
- (void)setObserverQueue:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 error:(id*)arg3;
- (void)setUserProfileLastUpdated:(id)arg1;
- (bool)shouldUpdateQuantityCharacteristics;
- (id)userCharacteristicForType:(id)arg1 error:(id*)arg2;
- (id)userProfileLastUpdated;

@end
