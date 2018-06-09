/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMTranscriptionTranscribeOperation : VMSpeechURLRecognitionRequestOperation <_VMSpeechRecognitionTaskDelegatePrivate> {
    double  _duration;
    NSObject<OS_dispatch_semaphore> * _semaphore;
    double  _timeout;
    id /* block */  _transcribeOperationCompletion;
    VMVoicemailTranscript * _transcript;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (readonly) unsigned long long hash;
@property bool processOnServer;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property (readonly) Class superclass;
@property double timeout;
@property (copy) id /* block */ transcribeOperationCompletion;
@property (nonatomic, retain) VMVoicemailTranscript *transcript;

- (void).cxx_destruct;
- (void)cancel;
- (double)duration;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;
- (void)main;
- (bool)processOnServer;
- (id)semaphore;
- (void)setDuration:(double)arg1;
- (void)setProcessOnServer:(bool)arg1;
- (void)setSemaphore:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setTranscribeOperationCompletion:(id /* block */)arg1;
- (void)setTranscript:(id)arg1;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (double)timeout;
- (id /* block */)transcribeOperationCompletion;
- (id)transcript;

@end
