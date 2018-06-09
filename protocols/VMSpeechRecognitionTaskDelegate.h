/* made by EzioChiu.
 */

@protocol VMSpeechRecognitionTaskDelegate <NSObject>

@optional

- (void)speechRecognitionDidDetectSpeech:(id <VMSpeechRecognitionTask>)arg1;
- (void)speechRecognitionTask:(id <VMSpeechRecognitionTask>)arg1 didFinishRecognition:(id <VMSpeechRecognitionResult>)arg2;
- (void)speechRecognitionTask:(id <VMSpeechRecognitionTask>)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(id <VMSpeechRecognitionTask>)arg1 didHypothesizeTranscription:(SFTranscription *)arg2;
- (void)speechRecognitionTaskFinishedReadingAudio:(id <VMSpeechRecognitionTask>)arg1;
- (void)speechRecognitionTaskWasCancelled:(id <VMSpeechRecognitionTask>)arg1;

@end
