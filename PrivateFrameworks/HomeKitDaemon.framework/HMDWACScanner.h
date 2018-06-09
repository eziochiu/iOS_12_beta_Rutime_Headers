/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDWACScanner : NSObject <HMDWACScanner, HMFLogging> {
    <HMDWACScannerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUWiFiScanner * _wifiScanner;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMDWACScannerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)backoff;
- (id)delegate;
- (id)delegateQueue;
- (id)init;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)stop;

@end
