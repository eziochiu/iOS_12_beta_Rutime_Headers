/* made by EzioChiu.
 */

@protocol VMTranscriptionService <NSObject>

@required

+ (bool)isTranscriptionAvailable;
+ (NSArray *)transcriptionLanguageCodes;

- (void)loadTranscriptionService;
- (void)processTranscriptForRecord:(void *)arg1 priority:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: const void*, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)reportTranscriptionProblemForRecord:(const void*)arg1;
- (void)reportTranscriptionRatedAccurate:(bool)arg1 forRecord:(const void*)arg2;
- (void)setTranscriptionController:(VMVoicemailTranscriptionController *)arg1;
- (void)setTranscriptionTask:(VMVoicemailTranscriptionTask *)arg1;
- (VMVoicemailTranscriptionController *)transcriptionController;
- (VMVoicemailTranscriptionTask *)transcriptionTask;
- (void)unloadTranscriptionService;

@end
