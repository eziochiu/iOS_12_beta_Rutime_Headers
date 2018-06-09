/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanInstance : HMFObject <HMFTimerDelegate> {
    unsigned long long  _ageOut;
    id /* block */  _completion;
    unsigned long long  _filterMethod;
    NSObject<OS_dispatch_queue> * _queue;
    HAPWACScanFilter * _scanFilter;
    double  _scanInterval;
    HMFTimer * _scanRepeatTimer;
    NSObject<OS_dispatch_semaphore> * _scanStopSemaphore;
    bool  _shouldContinueScan;
    bool  _waitingForScanResults;
}

@property (nonatomic) unsigned long long ageOut;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long filterMethod;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HAPWACScanFilter *scanFilter;
@property (nonatomic) double scanInterval;
@property (nonatomic, retain) HMFTimer *scanRepeatTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *scanStopSemaphore;
@property (nonatomic) bool shouldContinueScan;
@property (readonly) Class superclass;
@property (nonatomic) bool waitingForScanResults;

- (void).cxx_destruct;
- (void)_addScanRequest;
- (void)_handleAgeOutChange;
- (unsigned long long)ageOut;
- (id /* block */)completion;
- (void)dealloc;
- (unsigned long long)filterMethod;
- (id)initWithFilter:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)queue;
- (id)scanFilter;
- (double)scanInterval;
- (id)scanRepeatTimer;
- (id)scanStopSemaphore;
- (void)setAgeOut:(unsigned long long)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFilterMethod:(unsigned long long)arg1;
- (void)setQueue:(id)arg1;
- (void)setScanFilter:(id)arg1;
- (void)setScanInterval:(double)arg1;
- (void)setScanRepeatTimer:(id)arg1;
- (void)setScanStopSemaphore:(id)arg1;
- (void)setShouldContinueScan:(bool)arg1;
- (void)setWaitingForScanResults:(bool)arg1;
- (bool)shouldContinueScan;
- (void)startWACScan;
- (void)stopWACScan;
- (void)timerDidFire:(id)arg1;
- (bool)waitingForScanResults;

@end
