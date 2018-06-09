/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate> {
    bool  _cancelled;
    id /* block */  _completion;
    <CKAudioRecorderDelegate> * _delegate;
    struct OpaqueAudioFileID { } * _fileID;
    NSURL * _fileURL;
    bool  _recording;
    bool  _recordingEmpty;
    bool  _shouldPlayStartSound;
    bool  _shouldPlayStopSound;
    NSDate * _startDate;
    long long  _totalPacketsCount;
    CKVoiceController * _voiceController;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAudioRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic) struct OpaqueAudioFileID { }*fileID;
@property (nonatomic, retain) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (getter=isRecording, nonatomic) bool recording;
@property (getter=isRecordingEmpty, nonatomic) bool recordingEmpty;
@property (nonatomic) bool shouldPlayStartSound;
@property (nonatomic) bool shouldPlayStopSound;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic) long long totalPacketsCount;
@property (nonatomic, retain) CKVoiceController *voiceController;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)cancelRecording;
- (id /* block */)completion;
- (void)dealloc;
- (id)delegate;
- (double)duration;
- (struct OpaqueAudioFileID { }*)fileID;
- (id)fileURL;
- (id)init;
- (bool)isCancelled;
- (bool)isRecording;
- (bool)isRecordingEmpty;
- (void)resetState;
- (void)setCancelled:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileID:(struct OpaqueAudioFileID { }*)arg1;
- (void)setFileURL:(id)arg1;
- (void)setRecording:(bool)arg1;
- (void)setRecordingEmpty:(bool)arg1;
- (void)setShouldPlayStartSound:(bool)arg1;
- (void)setShouldPlayStopSound:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTotalPacketsCount:(long long)arg1;
- (void)setVoiceController:(id)arg1;
- (bool)shouldPlayStartSound;
- (bool)shouldPlayStopSound;
- (id)startDate;
- (void)startRecordingAndPlaySound:(bool)arg1;
- (void)startRecordingForRaiseGesture;
- (void)startRecordingForRaiseGesture:(bool)arg1 shouldPlaySound:(bool)arg2;
- (void)stopRecording:(id /* block */)arg1;
- (void)stopRecordingAndPlaySound:(bool)arg1 completion:(id /* block */)arg2;
- (long long)totalPacketsCount;
- (id)voiceController;
- (void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceControllerDidDetectStartpoint:(id)arg1;
- (void)voiceControllerDidFinishRecording:(id)arg1 successfully:(bool)arg2;
- (void)voiceControllerDidStartRecording:(id)arg1;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end
