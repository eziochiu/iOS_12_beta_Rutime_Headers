/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRXVoiceRecorder : NSObject <AVVoiceControllerRecordDelegate> {
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _audioFormat;
    AVAudioFormat * _avAudioFormat;
    <_TVRXVoiceRecorderDelegate> * _delegate;
    bool  _recordsAutomatically;
    long long  _state;
    AVVoiceController * _voiceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_TVRXVoiceRecorderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recordsAutomatically;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_init;
- (void)_processAudioBufferOnMainQueue:(id)arg1;
- (id)audioFormatSettings;
- (void)dealloc;
- (id)delegate;
- (bool)recordsAutomatically;
- (void)setDelegate:(id)arg1;
- (void)setRecordsAutomatically:(bool)arg1;
- (void)start;
- (void)stop;
- (void)voiceControllerDidStopRecording:(id)arg1 forReason:(long long)arg2;
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end
