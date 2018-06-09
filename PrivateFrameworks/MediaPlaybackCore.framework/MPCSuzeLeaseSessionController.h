/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCSuzeLeaseSessionController : NSObject <ICSuzeLeaseSessionDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSMapTable * _leaseIDToLeaseSessionInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)_init;
- (void)startLeaseSessionWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)stopLeaseSession:(id)arg1 completion:(id /* block */)arg2;
- (void)suzeLeaseSession:(id)arg1 leaseRenewalDidFailWithError:(id)arg2;

@end
