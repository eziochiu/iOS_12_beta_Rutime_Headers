/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMVoicemailTranscriptionTask : NSObject {
    bool  _hasInsomniaAssertion;
    NSObject<OS_dispatch_queue> * _taskQueue;
    bool  _taskRunning;
    VMVoicemailTranscriptionController * _transcriptionController;
}

@property (nonatomic) bool hasInsomniaAssertion;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *taskQueue;
@property (getter=isTaskRunning, nonatomic) bool taskRunning;
@property (nonatomic) VMVoicemailTranscriptionController *transcriptionController;

+ (void)resetRetranscriptionTaskState;

- (void).cxx_destruct;
- (void)_endRetranscribingTask;
- (void)_startRetranscribingVoicemailsIfNecessaryTranscribingAllVoicemails:(bool)arg1;
- (id)allVoicemails;
- (id)allVoicemailsTranscribedWithoutConfidence;
- (id)allVoicemailsWithTranscription;
- (id)allVoicemailsWithoutTranscription;
- (bool)alreadyAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)cancelAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (bool)confidenceModelExistsOnDevice;
- (void)dealloc;
- (bool)deviceHasSpeechAssets;
- (bool)hasInsomniaAssertion;
- (id)init;
- (bool)isTaskRunning;
- (id)lastTaskExecutionDate;
- (void)processTranscriptForVoicemail:(id)arg1;
- (void)retranscribeAllVoicemails;
- (void)setAttemptedVoicemailTranscriptionForVoicemail:(id)arg1;
- (void)setHasInsomniaAssertion:(bool)arg1;
- (void)setLastExecutionDate:(id)arg1;
- (void)setTaskRunning:(bool)arg1;
- (void)setTranscriptionController:(id)arg1;
- (bool)shouldRunTranscriptionTask;
- (bool)speechAssetHasConfidenceModel:(id)arg1;
- (id)speechAssetsOnDevice;
- (id)speechAssetsWithConfidenceModelsOnDevice;
- (id)taskQueue;
- (id)transcriptionController;
- (bool)voicemailWasTranscribedWithoutConfidence:(id)arg1;
- (id)voicemailsMatchingFlags:(unsigned int)arg1 withoutFlags:(unsigned int)arg2;

@end
