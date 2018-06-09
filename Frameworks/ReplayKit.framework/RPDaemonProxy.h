/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPDaemonProxy : NSObject <NSXPCConnectionDelegate, RPClientProtocol, RPDaemonProtocol> {
    NSURL * _broadcastURL;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSURL *broadcastURL;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)daemonProxy;

- (void).cxx_destruct;
- (id)broadcastURL;
- (oneway void)captureHandlerWithAudioSample:(id)arg1 absdData:(id)arg2 itemCount:(long long)arg3 bufferType:(long long)arg4 timingData:(id)arg5;
- (oneway void)captureHandlerWithSample:(id)arg1 timingData:(id)arg2;
- (oneway void)clientDidBecomeActive;
- (oneway void)clientDidResignActive;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (oneway void)discardRecordingWithHandler:(id /* block */)arg1;
- (oneway void)getCurrentBroadcastImages:(id /* block */)arg1;
- (oneway void)getSystemBroadcastExtensionInfo:(id /* block */)arg1;
- (id)init;
- (oneway void)pauseRecording;
- (oneway void)recordingDidStopWithError:(id)arg1 movieURL:(id)arg2;
- (oneway void)recordingLockInterrupted:(id)arg1;
- (oneway void)recordingTimerDidUpdate:(id)arg1;
- (oneway void)reportCameraUsage:(int)arg1;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)saveVideoToCameraRoll:(id)arg1 handler:(id /* block */)arg2;
- (void)setBroadcastURL:(id)arg1;
- (void)setConnection:(id)arg1;
- (oneway void)setHasUserConsentForCamera:(bool)arg1;
- (oneway void)setHasUserConsentForMicrophone:(bool)arg1;
- (oneway void)setMicrophoneEnabled:(bool)arg1;
- (oneway void)setMicrophoneEnabledPersistent:(bool)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(id)arg1 broadcastExtensionBundleID:(id)arg2 broadcastConfigurationData:(id)arg3 userInfo:(id)arg4 handler:(id /* block */)arg5;
- (oneway void)startRecordingWindowLayerContextIDs:(id)arg1 windowSize:(struct CGSize { double x1; double x2; })arg2 microphoneEnabled:(bool)arg3 cameraEnabled:(bool)arg4 broadcast:(bool)arg5 systemRecording:(bool)arg6 captureEnabled:(bool)arg7 listenerEndpoint:(id)arg8 withHandler:(id /* block */)arg9;
- (oneway void)stopRecordingWithHandler:(id /* block */)arg1;
- (oneway void)stopRecordingWithStartClipDuration:(double)arg1 endClipDuration:(double)arg2 handler:(id /* block */)arg3;
- (oneway void)synchronousGetCurrentState:(id /* block */)arg1;
- (oneway void)synchronousIsBroadcastingWithPreferredExtension:(id)arg1 handler:(id /* block */)arg2;
- (oneway void)updateBroadcastServiceInfo:(id)arg1;
- (oneway void)updateBroadcastURL:(id)arg1;
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;
- (oneway void)updateScreenRecordingState;

@end
