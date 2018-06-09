/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARSpeechRecognitionAudioBuffer : NSObject {
    struct shared_ptr<quasar::RecogAudioBufferBase> { 
        struct RecogAudioBufferBase {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _buffer;
    bool  _cancelled;
    bool  _ended;
    NSObject<OS_dispatch_queue> * _queue;
    _EARSpeechRecognizer * _speechRecognizer;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_detachFromRecognizer;
- (id)_initWithAudioBuffer:(struct shared_ptr<quasar::RecogAudioBufferBase> { struct RecogAudioBufferBase {} *x1; struct __shared_weak_count {} *x2; })arg1 speechRecognizer:(id)arg2;
- (void)addAudioSampleData:(id)arg1;
- (void)addAudioSamples:(const short*)arg1 count:(unsigned long long)arg2;
- (void)cancelRecognition;
- (void)endAudio;
- (void)triggerServerSideEndPointer;

@end
