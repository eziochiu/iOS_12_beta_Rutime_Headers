/* made by EzioChiu.
 */

@protocol AFUISpeechSynthesisLocalDelegate <NSObject>

@required

- (bool)speechSynthesisConnectionIsRecording:(AFUISpeechSynthesis *)arg1;
- (void)speechSynthesisWillStartSpeaking:(AFUISpeechSynthesis *)arg1;
- (void)stopCurrentRecordingForSpeechSynthesis:(AFUISpeechSynthesis *)arg1;

@end
