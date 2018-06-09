/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureSynchronizedSampleBufferData : AVCaptureSynchronizedData {
    AVCaptureSynchronizedSampleBufferDataInternal * _internal;
}

@property (readonly) long long droppedReason;
@property (readonly) struct opaqueCMSampleBuffer { }*sampleBuffer;
@property (readonly) bool sampleBufferWasDropped;

- (id)_initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 sampleBufferWasDropped:(bool)arg2;
- (void)dealloc;
- (long long)droppedReason;
- (bool)hasCorrespondingDepthData;
- (struct opaqueCMSampleBuffer { }*)sampleBuffer;
- (bool)sampleBufferWasDropped;

@end
