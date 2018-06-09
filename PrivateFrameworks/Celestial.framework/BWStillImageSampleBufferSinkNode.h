/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWStillImageSampleBufferSinkNode : BWSinkNode {
    bool  _aggdClientIsCameraOrMessages;
    bool  _aggdIsPhotoFormat;
    bool  _aggdIsTimeLapse;
    id /* block */  _sampleBufferAvailableHandler;
}

@property (nonatomic, copy) id /* block */ sampleBufferAvailableHandler;

+ (void)initialize;

- (void)_reportAggdDataWithRequestedStillImageSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 sbuf:(struct opaqueCMSampleBuffer { }*)arg3;
- (bool)aggdClientIsCameraOrMessages;
- (bool)aggdIsPhotoFormat;
- (bool)aggdIsTimeLapse;
- (void)dealloc;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)initWithInputMediaType:(unsigned int)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id /* block */)sampleBufferAvailableHandler;
- (void)setAggdClientIsCameraOrMessages:(bool)arg1;
- (void)setAggdIsPhotoFormat:(bool)arg1;
- (void)setAggdIsTimeLapse:(bool)arg1;
- (void)setSampleBufferAvailableHandler:(id /* block */)arg1;

@end
