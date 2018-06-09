/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOfflineVideoStabilizer : NSObject {
    NSMutableDictionary * _cachedInputBufferAttributes;
    struct opaqueCMFormatDescription { } * _cachedVideoFormatDescription;
    bool  _clientMarkedEndOfMetadata;
    bool  _clientMarkedEndOfVideoData;
    AVWeakReference * _dataProviderWeakReference;
    NSMutableArray * _futureFrameMetadataDicts;
    struct OpaqueFigSampleBufferProcessor { } * _gvsProcessor;
    long long  _metadataOutputFrameNumber;
    int  _metadataPrimingCount;
    NSSet * _optionalMetadataKeys;
    NSMutableArray * _outputSampleBuffers;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    NSSet * _requiredMetadataKeys;
    bool  _stabilizationEnabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetFrameDuration;
    long long  _videoOutputFrameNumber;
}

@property (nonatomic, readonly) NSMutableArray *outputSampleBuffers;
@property (nonatomic, readonly) int preferredSourcePixelBufferPrimingFrameCount;
@property (nonatomic, readonly) int preferredSourceStabilizationMetadataPrimingCount;

+ (void)initialize;
+ (id)offlineVideoStabilizerWithTargetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool { }*)arg3 stabilizationEnabled:(bool)arg4;

- (struct opaqueCMSampleBuffer { }*)_copyStabilizedSampleBuffer:(id*)arg1;
- (struct opaqueCMSampleBuffer { }*)_createSampleBufferWithPixelBuffer:(struct __CVBuffer { }*)arg1 sampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 futureMetadata:(id)arg3 status:(int*)arg4;
- (int)_setupGVSProcessorWithMetadataArray:(id)arg1;
- (void)_teardownVISProcessor;
- (int)_validateSourcePixelBuffer:(struct __CVBuffer { }*)arg1 withSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(id)arg3 isEndOfData:(bool*)arg4;
- (int)_validateStabilizationMetadata:(id)arg1 withSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 isEndOfData:(bool*)arg3;
- (struct opaqueCMSampleBuffer { }*)copyStabilizedSampleBuffer:(id*)arg1;
- (void)dealloc;
- (id)initWithTargetFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 dataProvider:(id)arg2 destinationBufferPool:(struct __CVPixelBufferPool { }*)arg3 stabilizationEnabled:(bool)arg4;
- (id)outputSampleBuffers;
- (int)preferredSourcePixelBufferPrimingFrameCount;
- (int)preferredSourceStabilizationMetadataPrimingCount;

@end
