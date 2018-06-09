/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVTUITrainingSessionWithPayload : CSVTUITrainingSession <CSVTUIAudioSessionDelegate, CSVTUIEndPointDelegate, SFSpeechRecognitionTaskDelegate> {
    bool  _ASRResultReceived;
    bool  _detectBOS;
    bool  _reportedStopListening;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_firedEndPointTimeout;
- (void)_firedVoiceTriggerTimeout;
- (void)_registerEndPointTimeout;
- (void)_registerVoiceTriggerTimeout;
- (void)_reportStopListening;
- (void)audioSessionDidStartRecording:(bool)arg1 error:(id)arg2;
- (void)audioSessionDidStopRecording:(long long)arg1;
- (void)audioSessionErrorDidOccur:(id)arg1;
- (void)audioSessionRecordBufferAvailable:(id)arg1;
- (void)audioSessionUnsupportedAudioRoute;
- (void)didDetectBeginOfSpeech;
- (void)didDetectEndOfSpeech:(long long)arg1;
- (void)handleAudioInput:(id)arg1;
- (void)matchRecognitionResult:(id)arg1 withMatchedBlock:(id /* block */)arg2 withNonMatchedBlock:(id /* block */)arg3;
- (bool)shouldHandleSession;
- (bool)shouldMatchPayload;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)startTraining;

@end
