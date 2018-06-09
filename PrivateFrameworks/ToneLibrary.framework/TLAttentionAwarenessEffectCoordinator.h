/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLAttentionAwarenessEffectCoordinator : NSObject {
    struct { 
        bool shouldBypassLowPassFilter; 
        float volumeForLowPassFilterGlobalGain; 
        float effectMix; 
    }  _effectParameters;
    TLAttentionAwarenessEffectProcessor * _effectProcessor;
}

@property (nonatomic) struct { bool x1; float x2; float x3; } effectParameters;

- (void).cxx_destruct;
- (void)_finalizeAudioProcessing;
- (void)_prepareAudioProcessingWithMaximumNumberOfFrames:(unsigned int)arg1 processingFormat:(const struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)arg2;
- (void)_processAudioWithBufferList:(struct AudioBufferList { unsigned int x1; struct AudioBuffer { unsigned int x_2_1_1; unsigned int x_2_1_2; void *x_2_1_3; } x2[1]; }*)arg1 numberOfFramesRequested:(unsigned int)arg2 numberOfFramesToProcess:(unsigned int)arg3;
- (void)_unprepareAudioProcessing;
- (id)audioMixForAsset:(id)arg1;
- (struct { bool x1; float x2; float x3; })effectParameters;
- (id)initWithEffectParameters:(struct { bool x1; float x2; float x3; })arg1;
- (void)setEffectParameters:(struct { bool x1; float x2; float x3; })arg1;
- (void)setEffectParameters:(struct { bool x1; float x2; float x3; })arg1 effectMixFadeDuration:(double)arg2;

@end
