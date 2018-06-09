/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface PCCProxiedDevice : NSObject {
    PCCEndpoint * _endpoint;
    NSObject<OS_dispatch_source> * _expiryTimer;
    PCCGroupJob * _groupXferJob;
    NSMutableDictionary * _jobByTracker;
    double  _jobTimeout;
    NSObject<OS_dispatch_queue> * _job_queue;
    NSObject<OS_os_transaction> * _txn;
    int  expire_count;
    int  file_count;
    int  job_count;
    int  msg_count;
    int  up_count;
}

@property double jobTimeout;

- (void).cxx_destruct;
- (void)acceptTaskingPayload:(id)arg1 forRouting:(id)arg2 withId:(id)arg3;
- (void)ack:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (bool)doWork:(id)arg1;
- (void)explore;
- (void)finish:(id)arg1 target:(id)arg2 result:(id)arg3;
- (void)handleConnection:(bool)arg1;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)initiate:(id)arg1 transferGroupWithOptions:(id)arg2 job:(id)arg3;
- (void)initiate:(id)arg1 transferLog:(id)arg2 job:(id)arg3;
- (double)jobTimeout;
- (void)runCrashMoverService:(id)arg1;
- (void)sendDeviceMetadata:(id)arg1;
- (void)setJobTimeout:(double)arg1;
- (void)startTimer;
- (void)sweepLogs;

@end
