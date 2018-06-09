/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSActivationEventNotifier : NSObject {
    NSMapTable * _delegates;
    int  _notifyToken;
    CSActivationEvent * _pendingActivationEvent;
    id /* block */  _pendingCompletion;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSMapTable *delegates;
@property (nonatomic) int notifyToken;
@property (nonatomic, retain) CSActivationEvent *pendingActivationEvent;
@property (nonatomic, copy) id /* block */ pendingCompletion;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedNotifier;

- (void).cxx_destruct;
- (void)_didReceiveAOPFirstPassTrigger:(id)arg1 completion:(id /* block */)arg2;
- (bool)_hasPendingActivationForType:(unsigned long long)arg1;
- (bool)_isVoiceTriggerEvent:(id)arg1;
- (void)_setupTestNotification;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (void)dealloc;
- (id)delegates;
- (id)init;
- (void)notifyActivationEvent:(id)arg1 completion:(id /* block */)arg2;
- (void)notifyActivationEvent:(unsigned long long)arg1 deviceId:(id)arg2 activationInfo:(id)arg3 completion:(id /* block */)arg4;
- (int)notifyToken;
- (id)pendingActivationEvent;
- (id /* block */)pendingCompletion;
- (id)queue;
- (void)receiveTestNotificationAOPMode;
- (void)receiveTestNotificationAPMode;
- (void)setDelegate:(id)arg1 for:(unsigned long long)arg2;
- (void)setDelegates:(id)arg1;
- (void)setNotifyToken:(int)arg1;
- (void)setPendingActivationEvent:(id)arg1;
- (void)setPendingCompletion:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
