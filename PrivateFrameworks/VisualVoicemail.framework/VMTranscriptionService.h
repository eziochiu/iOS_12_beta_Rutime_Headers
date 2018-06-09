/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMTranscriptionService : NSObject <VMTranscriptionService> {
    NSObject<OS_dispatch_queue> * _queue;
    VMVoicemailTranscriptionController * _transcriptionController;
    VMVoicemailTranscriptionTask * _transcriptionTask;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, retain) VMVoicemailTranscriptionController *transcriptionController;
@property (nonatomic, retain) VMVoicemailTranscriptionTask *transcriptionTask;

+ (bool)isSupportedTranscriptionLanguageCode:(id)arg1;
+ (bool)isTranscriptionAvailable;
+ (id)transcriptionLanguageCodes;

- (void).cxx_destruct;
- (unsigned long long)failureReasonForError:(id)arg1;
- (void)handleAFLanguageCodeDidChangeNotification:(id)arg1;
- (id)init;
- (void)loadTranscriptionService;
- (void)performSynchronousBlock:(id /* block */)arg1;
- (void)processTranscriptForRecord:(const void*)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (id)queue;
- (void)reportTranscriptionProblemForRecord:(const void*)arg1;
- (void)reportTranscriptionRatedAccurate:(bool)arg1 forRecord:(const void*)arg2;
- (void)setTranscriptionController:(id)arg1;
- (void)setTranscriptionTask:(id)arg1;
- (id)transcriptionController;
- (id)transcriptionTask;
- (void)unloadTranscriptionService;

@end
