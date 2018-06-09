/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDFMFHandler : HMFObject <FMFSessionDelegate, HMFLogging, HMFTimerDelegate> {
    HMDFMFRequest * _currentFMFRequest;
    HMDFMF * _fmfStatus;
    NSMutableArray * _queries;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) HMDFMFRequest *currentFMFRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HMDFMF *fmfStatus;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *queries;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedHandler;

- (void).cxx_destruct;
- (unsigned long long)_computeFMFStatus:(id)arg1;
- (void)_initiateFMFRequest;
- (void)_processDevices:(id)arg1 error:(id)arg2;
- (void)_respondToPendingRequests:(id)arg1;
- (id)currentFMFRequest;
- (void)fmfDevicesChanged;
- (id)fmfStatus;
- (void)homeDataLoaded:(id)arg1;
- (id)init;
- (void)meDeviceChanged;
- (void)processDevices:(id)arg1 error:(id)arg2;
- (id)queries;
- (void)queryFMFStatusWithQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)sendNotification;
- (void)setCurrentFMFRequest:(id)arg1;
- (void)setFmfStatus:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)timerDidFire:(id)arg1;
- (id)workQueue;

@end
