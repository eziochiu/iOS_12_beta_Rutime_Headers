/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWMotionAttachmentsNode : BWNode {
    BWNodeOutput * _offlineVISMotionDataOutput;
    NSDictionary * _optionsDict;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    BWNodeOutput * _sourceVideoWithMotionAttachmentsOutput;
}

@property (nonatomic, readonly) BWNodeOutput *offlineVISMotionDataOutput;
@property (nonatomic, readonly) BWNodeOutput *sourceVideoWithMotionAttachmentsOutput;

+ (void)initialize;

- (int)_setupSampleBufferProcessor;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithSensorIDDictionaryByPortType:(id)arg1 cameraModuleInfoByPortType:(id)arg2 activePortTypes:(id)arg3 requiredFormat:(id)arg4 motionAttachmentsMode:(int)arg5 motionAttachmentsSource:(int)arg6 motionCallbackThreadPriority:(unsigned int)arg7 provideSourceVideoWithMotionAttachmentsOutput:(bool)arg8 provideOfflineVISMotionDataOutput:(bool)arg9;
- (id)nodeSubType;
- (id)nodeType;
- (id)offlineVISMotionDataOutput;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)sourceVideoWithMotionAttachmentsOutput;

@end
