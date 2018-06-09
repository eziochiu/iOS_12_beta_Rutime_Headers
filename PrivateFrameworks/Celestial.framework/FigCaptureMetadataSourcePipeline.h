/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureMetadataSourcePipeline : FigCapturePipeline {
    struct OpaqueCMClock { } * _masterClock;
    NSString * _sourceID;
    BWNode * _sourceNode;
    BWSynchronizerNode * _synchronizerNode;
}

@property (nonatomic) struct OpaqueCMClock { }*masterClock;
@property (nonatomic, readonly) BWNodeOutput *output;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*sourceFormatDescription;
@property (nonatomic, readonly) NSString *sourceID;

+ (void)initialize;

- (int)_buildMetadataSourcePipeline:(id)arg1 graph:(id)arg2;
- (void)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 graph:(id)arg2 errorOut:(int*)arg3;
- (struct OpaqueCMClock { }*)masterClock;
- (id)output;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (struct opaqueCMFormatDescription { }*)sourceFormatDescription;
- (id)sourceID;

@end
