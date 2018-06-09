/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTPhraseSpotterControlConnection : NSObject <VTPeerRemoteConnectionDelegate> {
    VTPeerRemoteConnection * _peerConnection;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _remotePhraseSpotterEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (void)notifyRemoteOfDismissal;
- (void)notifyRemoteOfEarlyDetect;
- (void)notifyRemoteOfTriggerEvent;
- (void)remoteConnection:(id)arg1 handleMessageType:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)updateRemotePhraseSpotterEnabled:(bool)arg1;

@end
