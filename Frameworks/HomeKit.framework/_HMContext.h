/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMContext : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMDelegateCaller * _delegateCaller;
    HMFMessageDispatcher * _messageDispatcher;
    HMPendingRequests * _pendingRequests;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly) HMDelegateCaller *delegateCaller;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) HMPendingRequests *pendingRequests;

+ (id)context;

- (void).cxx_destruct;
- (id)clientQueue;
- (id)delegateCaller;
- (id)init;
- (id)initWithClientQueue:(id)arg1 pendingRequests:(id)arg2 delegateCaller:(id)arg3 messageDispatcher:(id)arg4;
- (id)messageDispatcher;
- (id)pendingRequests;

@end
