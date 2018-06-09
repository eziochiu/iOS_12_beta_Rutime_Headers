/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARBuiltInLatency : ARTechnique {
    double  _latency;
    NSObject<OS_dispatch_queue> * _requestsQueue;
    NSMutableArray * _results;
    NSObject<OS_dispatch_semaphore> * _resultsSemaphore;
}

@property (nonatomic, readonly) double latency;

- (void).cxx_destruct;
- (id)initWithLatency:(double)arg1;
- (double)latency;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end
