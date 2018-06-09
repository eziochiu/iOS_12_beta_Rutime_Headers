/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface HapticServerInstance : NSObject <ServerInterface> {
    /* Warning: unhandled struct encoding: '{WatchdogTimer=*iI@}' */ struct WatchdogTimer { char *x1; int x2; unsigned int x3; id x4; } * _PrewarmWatchDogTimer;
    /* Warning: unhandled struct encoding: '{WatchdogTimer=*iI@}' */ struct WatchdogTimer { char *x1; int x2; unsigned int x3; id x4; } * _RunWatchDogTimer;
    unsigned long long  _clientID;
    bool  _clientInterrupted;
    struct shared_ptr<opaqueCMSession> { 
        struct opaqueCMSession {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _clientSession;
    bool  _clientSuspended;
    ServerWrapper * _listenerWrapper;
    HapticServer * _master;
    bool  _wasPrewarmedAndSuspended;
}

@property (readonly) unsigned long long clientID;
@property (readonly) HapticServer *master;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allocateClientResources:(id /* block */)arg1;
- (unsigned long long)clientID;
- (void)dealloc;
- (void)getClientID:(id /* block */)arg1;
- (void)getHapticLatency:(id /* block */)arg1;
- (void)handleClientApplicationStateChange:(id)arg1;
- (void)handleConnectionError;
- (id)initWithMasterAndID:(id)arg1 id:(unsigned long long)arg2 outError:(id*)arg3;
- (void)loadHapticEvent:(id)arg1 reply:(id /* block */)arg2;
- (void)loadHapticPattern:(id)arg1 reply:(id /* block */)arg2;
- (void)loadHapticSequence:(id)arg1 reply:(id /* block */)arg2;
- (id)master;
- (void)prepareHapticSequence:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)prewarm:(id /* block */)arg1;
- (void)releaseClientResources;
- (void)requestChannels:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)resetPrewarmWatchdogTimer;
- (void)resetRunWatchdogTimer;
- (void)setChannelEventBehavior:(unsigned long long)arg1 behavior:(unsigned long long)arg2 reply:(id /* block */)arg3;
- (void)setDoneReply:(id /* block */)arg1;
- (void)setPlayerBehavior:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)setupPrewarmWatchdogTimer;
- (void)setupRunWatchdogTimer;
- (void)startRunning:(id /* block */)arg1;
- (void)stopPrewarm;
- (void)stopRunning;

@end
