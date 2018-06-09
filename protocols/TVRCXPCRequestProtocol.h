/* made by EzioChiu.
 */

@protocol TVRCXPCRequestProtocol <NSObject>

@required

- (void)beginDeviceQuery;
- (void)beginWifiMonitoring;
- (void)cancelAuthChallengeForDeviceWithIdentifier:(NSString *)arg1;
- (void)closeConnectionToDeviceWithIdentifier:(NSString *)arg1;
- (void)enableTVRemoteModule;
- (void)endDeviceQuery;
- (void)endWifiMonitoring;
- (void)fulfillAuthChallengeForDeviceWithIdentifier:(NSString *)arg1 withLocallyEnteredCode:(NSString *)arg2;
- (void)isTVRemoteModuleEnabled:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)openConnectionToDeviceWithIdentifier:(NSString *)arg1;
- (void)sendButtonEvent:(TVRCButtonEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendGameControllerEvent:(TVRCGameControllerEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendInputReturnKeyToDeviceWithIdentifier:(NSString *)arg1;
- (void)sendInputText:(NSString *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendInputTextPayload:(RTIDataPayload *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)sendTouchEvent:(TVRCTouchEvent *)arg1 toDeviceWithIdentifier:(NSString *)arg2;
- (void)setVoiceRecorderAutomaticRecording:(bool)arg1 forDeviceWithIdentifier:(NSString *)arg2;
- (void)startVoiceRecordingForDeviceWithIdentifier:(NSString *)arg1;
- (void)stopVoiceRecordingForDeviceWithIdentifier:(NSString *)arg1;

@end
