/* made by EzioChiu.
 */

@protocol CKVoiceControllerDelegate <NSObject>

@required

- (void)voiceController:(CKVoiceController *)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceControllerDidDetectStartpoint:(CKVoiceController *)arg1;
- (void)voiceControllerDidFinishRecording:(CKVoiceController *)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStartRecording:(CKVoiceController *)arg1;
- (void)voiceControllerRecordBufferAvailable:(CKVoiceController *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@end
