/* made by EzioChiu.
 */

@protocol RPDaemonProtocol <NSObject>

@required

- (oneway void)clientDidBecomeActive;
- (oneway void)clientDidResignActive;
- (oneway void)discardRecordingWithHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)getCurrentBroadcastImages:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, UIImage *, void*
- (oneway void)getSystemBroadcastExtensionInfo:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (oneway void)pauseRecording;
- (oneway void)reportCameraUsage:(int)arg1;
- (oneway void)resumeRecordingWithWindowLayerContextID:(unsigned int)arg1;
- (oneway void)saveVideoToCameraRoll:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)setBroadcastURL:(NSString *)arg1;
- (oneway void)setHasUserConsentForCamera:(bool)arg1;
- (oneway void)setHasUserConsentForMicrophone:(bool)arg1;
- (oneway void)setMicrophoneEnabled:(bool)arg1;
- (oneway void)setMicrophoneEnabledPersistent:(bool)arg1;
- (oneway void)setupBroadcastWithHostBundleID:(void *)arg1 broadcastExtensionBundleID:(void *)arg2 broadcastConfigurationData:(void *)arg3 userInfo:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSData *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)startRecordingWindowLayerContextIDs:(void *)arg1 windowSize:(void *)arg2 microphoneEnabled:(void *)arg3 cameraEnabled:(void *)arg4 broadcast:(void *)arg5 systemRecording:(void *)arg6 captureEnabled:(void *)arg7 listenerEndpoint:(void *)arg8 withHandler:(void *)arg9; // needs 9 arg types, found 16: NSArray *, struct CGSize { double x1; double x2; }, bool, bool, bool, bool, bool, NSXPCListenerEndpoint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, bool, bool, void*
- (oneway void)stopRecordingWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (oneway void)stopRecordingWithStartClipDuration:(void *)arg1 endClipDuration:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 9: double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (oneway void)synchronousGetCurrentState:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (oneway void)synchronousIsBroadcastingWithPreferredExtension:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (oneway void)updateProcessIDForAudioCaptureWithPID:(int)arg1;

@end
