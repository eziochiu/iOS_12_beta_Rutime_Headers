/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTimeInformationMonitor : HMFObject <HMFTimerDelegate> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSHashTable * _delegates;
    HMFTimer * _expirationTimer;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HMFTimer *expirationTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleExpiration;
- (void)_updateWithTimerInterval;
- (void)addDelegate:(id)arg1;
- (id)clientQueue;
- (void)dealloc;
- (id)delegates;
- (id)expirationTimer;
- (id)init;
- (void)removeDelegate:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)systemTimeChanged:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
