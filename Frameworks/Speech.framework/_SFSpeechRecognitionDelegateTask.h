/* made by EzioChiu
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface _SFSpeechRecognitionDelegateTask : SFSpeechRecognitionTask {
    <_SFSpeechRecognitionTaskDelegatePrivate> * _delegate;
    bool  _hasSentRealSearchResults;
    SFSpeechRecognitionResult * _recognitionResultToReportAfterFinalSearchResults;
    _SFSpeechRecognitionDelegateTask * _selfReference;
    bool  _waitForVoiceSearchResult;
}

- (void).cxx_destruct;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 delegate:(id)arg5;
- (void)_tellDelegateDidFinishSuccessfully:(bool)arg1;
- (void)dictationConnection:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(bool)arg4 final:(bool)arg5;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;

@end
