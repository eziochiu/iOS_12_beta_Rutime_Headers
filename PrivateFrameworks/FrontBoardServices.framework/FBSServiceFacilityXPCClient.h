/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSServiceFacilityXPCClient : BSBaseXPCClient <FBSServiceFacilityClientMessaging> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    bool  _connectionDenied;
    <FBSServiceFacilityXPCClientDelegate> * _delegate;
    bool  _invalidated;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <FBSServiceFacilityXPCClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)calloutQueue;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithCalloutQueue:(id)arg1;
- (id)initWithCalloutQueue:(id)arg1 endpoint:(id)arg2;
- (id)initWithServiceName:(id)arg1 endpoint:(id)arg2;
- (void)queue_clientWasInvalidated;
- (void)queue_connectionWasCreated;
- (void)queue_handleError:(id)arg1;
- (void)queue_handleMessage:(id)arg1;
- (void)sendMessage:(id)arg1 withType:(long long)arg2;
- (void)sendMessage:(id)arg1 withType:(long long)arg2 replyHandler:(id /* block */)arg3 waitForReply:(bool)arg4 timeout:(double)arg5;
- (void)setDelegate:(id)arg1;

@end
