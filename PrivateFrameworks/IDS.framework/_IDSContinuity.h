/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface _IDSContinuity : NSObject <IDSDaemonListenerProtocol> {
    CUTWeakReference * _delegate;
    id  _delegateContext;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callDelegateWithBlock:(id /* block */)arg1;
- (void)_daemonDied:(id)arg1;
- (void)_handleReconnect;
- (void)continuityDidDiscoverType:(long long)arg1 withData:(id)arg2 fromPeer:(id)arg3;
- (void)continuityDidFailToStartAdvertisingOfType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidFailToStartScanningForType:(long long)arg1 withError:(id)arg2;
- (void)continuityDidLosePeer:(id)arg1;
- (void)continuityDidLosePeer:(id)arg1 forType:(long long)arg2;
- (void)continuityDidStartAdvertisingOfType:(long long)arg1;
- (void)continuityDidStartScanningForType:(long long)arg1;
- (void)continuityDidStartTrackingPeer:(id)arg1 error:(id)arg2;
- (void)continuityDidStartTrackingPeer:(id)arg1 forType:(long long)arg2 error:(id)arg3;
- (void)continuityDidStopAdvertisingOfType:(long long)arg1;
- (void)continuityDidStopScanningForType:(long long)arg1;
- (void)continuityDidStopTrackingPeer:(id)arg1;
- (void)continuityDidStopTrackingPeer:(id)arg1 forType:(long long)arg2;
- (void)continuityDidUpdateState:(long long)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 delegateContext:(id)arg3;
- (void)startAdvertisingOfType:(long long)arg1 withData:(id)arg2 withOptions:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 boostedScan:(bool)arg4 duplicates:(bool)arg5;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4;
- (void)startScanningForType:(long long)arg1 withData:(id)arg2 mask:(id)arg3 peers:(id)arg4 boostedScan:(bool)arg5 duplicates:(bool)arg6;
- (void)startTrackingPeer:(id)arg1 forType:(long long)arg2;
- (long long)state;
- (void)stopAdvertisingOfType:(long long)arg1;
- (void)stopScanningForType:(long long)arg1;
- (void)stopTrackingPeer:(id)arg1 forType:(long long)arg2;

@end
