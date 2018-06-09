/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

@interface CRInsights : NSObject {
    <CRInsightsDelegate> * _delegate;
    NSMutableDictionary * _threadsToContexts;
}

@property <CRInsightsDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *threadsToContexts;

+ (void)dispatchAsyncOnQueue:(id)arg1 block:(id /* block */)arg2;
+ (id)sharedInsights;

- (void).cxx_destruct;
- (id)allowOverrideWithKey:(id)arg1 forResultFromBlock:(id /* block */)arg2;
- (id)allowOverrideWithKey:(id)arg1 forValue:(id)arg2;
- (void)attachContextCopyToCurrentThread:(id)arg1;
- (void)attachContextToCurrentThread:(id)arg1;
- (void)attachNewContextToCurrentThreadWithCameraReader:(id)arg1;
- (id)cameraReaderForCurrentThread;
- (id)currentContext;
- (id)delegate;
- (id)enterSection:(id)arg1 withDescription:(id)arg2;
- (id)init;
- (void)leaveSection:(id)arg1;
- (void)notifySampleBufferProcessingEnd:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)notifySampleBufferProcessingStart:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)provideInsightValue:(id)arg1 forKey:(id)arg2;
- (void)resetContextForCurrentThread;
- (void)setContextValue:(id)arg1 forKey:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setThreadsToContexts:(id)arg1;
- (id)takeContextSnapshot;
- (id)threadsToContexts;

@end
