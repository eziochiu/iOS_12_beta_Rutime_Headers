/* made by EzioChiu
   Image: /System/Library/Frameworks/Speech.framework/Speech
 */

@interface _SFSpeechRecognitionBlockTask : SFSpeechRecognitionTask {
    bool  _hasFiredFinalResult;
    id /* block */  _resultHandler;
}

- (void).cxx_destruct;
- (void)_finalizeResultHandler;
- (void)_fireResultHandlerWithResult:(id)arg1 error:(id)arg2;
- (id)_initWithRequest:(id)arg1 queue:(id)arg2 languageCode:(id)arg3 taskHint:(long long)arg4 resultHandler:(id /* block */)arg5;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;

@end
