/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDataOutputSynchronizer : NSObject <AVCaptureAudioDataOutputSampleBufferDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCaptureDataOutputSynchronizerInternal * _internal;
}

@property (readonly, retain) NSArray *dataOutputs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <AVCaptureDataOutputSynchronizerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)_adjustSynchronizedDataTimestamps;
- (bool)_allSlaveSynchronizedDataOutputsContainTimestampEqualToOrGreaterThanMasterTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_appendSynchronizedData:(id)arg1 forCaptureOutput:(id)arg2;
- (void)_assignTimestampAdjustmentQueueToDataOutputStorageWithCommonProvenance;
- (int)_computedMasterSynchronizedDataQueueMaxDepthForDataOutputs:(id)arg1;
- (void)_createTimestampHistoryQueuesForMetadataOutputStoragesWithNoTimestampAdjustmentQueues;
- (void)_dispatchRipenedSynchronizedData;
- (void)_dispatchSynchronizedDataWithTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_earliestSlaveSynchronizedDataQueueTimestamp;
- (void)_overrideDataOutputDelegatesForDelegateCallbackQueue:(id)arg1;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)dataOutputs;
- (void)dealloc;
- (id)delegate;
- (id)delegateCallbackQueue;
- (void)depthDataOutput:(id)arg1 didDropDepthData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4 reason:(long long)arg5;
- (void)depthDataOutput:(id)arg1 didOutputDepthData:(id)arg2 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 connection:(id)arg4;
- (id)initWithDataOutputs:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;

@end