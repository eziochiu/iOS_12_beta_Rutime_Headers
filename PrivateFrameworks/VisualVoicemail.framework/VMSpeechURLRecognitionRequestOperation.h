/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMSpeechURLRecognitionRequestOperation : VMSpeechRecognitionRequestOperation

- (id)URL;
- (bool)forceOfflineRecognition;
- (id)initWithLocale:(id)arg1;
- (id)initWithLocale:(id)arg1 URL:(id)arg2;
- (id)initWithSpeechRecognizer:(id)arg1;
- (id)initWithSpeechRecognizer:(id)arg1 speechRecognitionRequest:(id)arg2;
- (id)initWithSpeechRecognizer:(id)arg1 speechURLRecognitionRequest:(id)arg2;
- (void)setForceOfflineRecognition:(bool)arg1;
- (id)speechURLRecognitionRequest;

@end
