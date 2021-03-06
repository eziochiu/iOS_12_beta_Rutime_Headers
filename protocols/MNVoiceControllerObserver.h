/* made by EzioChiu.
 */

@protocol MNVoiceControllerObserver <NSObject>

@required

- (void)voiceController:(MNVoiceController *)arg1 didActivateAudioSession:(bool)arg2;
- (void)voiceController:(MNVoiceController *)arg1 didStartSpeakingPrompt:(NSString *)arg2;

@end
