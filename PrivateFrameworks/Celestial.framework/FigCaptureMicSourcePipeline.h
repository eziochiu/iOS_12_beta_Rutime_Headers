/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureMicSourcePipeline : FigCapturePipeline {
    NSString * _sourceID;
    BWAudioSourceNode * _sourceNode;
    BWFanOutNode * _splitterNode;
}

@property (nonatomic, readonly) struct OpaqueCMClock { }*clock;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) BWAudioSourceNode *sourceNode;

+ (void)initialize;

- (int)_buildMicSourcePipelineWithConfiguration:(id)arg1 graph:(id)arg2 cmSession:(struct opaqueCMSession { }*)arg3 renderDelegate:(id)arg4;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 cmSession:(struct opaqueCMSession { }*)arg3 renderDelegate:(id)arg4;
- (id)outputs;
- (id)sourceID;
- (id)sourceNode;

@end
