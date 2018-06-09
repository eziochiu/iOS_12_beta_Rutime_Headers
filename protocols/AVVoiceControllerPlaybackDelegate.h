/* made by EzioChiu.
 */

@protocol AVVoiceControllerPlaybackDelegate <NSObject>

@required

- (void)voiceControllerPlaybackBufferAvailable:(AVVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional

- (void)voiceControllerBeginPlaybackInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerDecoderErrorDidOccur:(AVVoiceController *)arg1 error:(NSError *)arg2;
- (void)voiceControllerDidStartPlaying:(AVVoiceController *)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStopPlaying:(AVVoiceController *)arg1 forReason:(long long)arg2;
- (void)voiceControllerEndPlaybackInterruption:(AVVoiceController *)arg1;
- (void)voiceControllerPlaybackHardwareConfigurationDidChange:(AVVoiceController *)arg1 toConfiguration:(int)arg2;

@end
