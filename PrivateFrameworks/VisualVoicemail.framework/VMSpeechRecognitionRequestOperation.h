/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMSpeechRecognitionRequestOperation : VMSpeechRecognizerOperation {
    bool  _forceOfflineRecognition;
    <VMSpeechRecognitionRequest> * _speechRecognitionRequest;
}

@property bool forceOfflineRecognition;
@property (retain) <VMSpeechRecognitionRequest> *speechRecognitionRequest;

- (void).cxx_destruct;
- (bool)forceOfflineRecognition;
- (id)initWithSpeechRecognizer:(id)arg1;
- (id)initWithSpeechRecognizer:(id)arg1 speechRecognitionRequest:(id)arg2;
- (void)setForceOfflineRecognition:(bool)arg1;
- (void)setSpeechRecognitionRequest:(id)arg1;
- (id)speechRecognitionRequest;

@end
