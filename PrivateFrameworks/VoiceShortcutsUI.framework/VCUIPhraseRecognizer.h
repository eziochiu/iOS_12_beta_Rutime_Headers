/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
 */

@interface VCUIPhraseRecognizer : NSObject <AFDictationDelegate> {
    NSObject<OS_dispatch_queue> * _audioQueue;
    bool  _currentlyRecording;
    <VCUIPhraseRecognizerDelegate> * _delegate;
    AFDictationConnection * _dictationConnection;
    NSString * _languageCode;
    bool  _recordingUsingAudioFile;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *audioQueue;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (nonatomic, readonly) float averagePowerLevel;
@property (nonatomic) bool currentlyRecording;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VCUIPhraseRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AFDictationConnection *dictationConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *languageCode;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic) bool recordingUsingAudioFile;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_startRecordingWithContextualStrings:(id)arg1 fileAtPath:(id)arg2;
- (id)audioQueue;
- (float)averagePowerLevel;
- (bool)currentlyRecording;
- (id)delegate;
- (id)dictationConnection;
- (void)dictationConnection:(id)arg1 didRecognizePackage:(id)arg2;
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;
- (id)init;
- (bool)isAvailable;
- (bool)isNetworkAvailable;
- (bool)isRecording;
- (bool)isSiriEnabled;
- (id)languageCode;
- (bool)recordingUsingAudioFile;
- (void)setCurrentlyRecording:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDictationConnection:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setRecordingUsingAudioFile:(bool)arg1;
- (void)startRecordingWithContextualStrings:(id)arg1;
- (void)startRecordingWithFileAtPath:(id)arg1 contextualStrings:(id)arg2;
- (void)stopRecording;

@end
