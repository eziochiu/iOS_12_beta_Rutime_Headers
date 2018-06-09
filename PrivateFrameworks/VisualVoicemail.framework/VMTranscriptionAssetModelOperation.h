/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMTranscriptionAssetModelOperation : VMSpeechRecognizerOperation {
    id /* block */  _operationCompletion;
}

@property (copy) id /* block */ operationCompletion;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSpeechRecognizer:(id)arg1;
- (void)main;
- (id /* block */)operationCompletion;
- (void)setOperationCompletion:(id /* block */)arg1;

@end
