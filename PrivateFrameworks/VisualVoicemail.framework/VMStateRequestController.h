/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMStateRequestController : NSObject {
    CTXPCServiceSubscriptionContext * _context;
    NSMapTable * _delegateToQueue;
    <VMCTMessageCenter> * _messageCenter;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
    NSMutableArray * _stateRequests;
}

@property (nonatomic, readonly) CTXPCServiceSubscriptionContext *context;
@property (nonatomic, readonly) NSMapTable *delegateToQueue;
@property (nonatomic, readonly) <VMCTMessageCenter> *messageCenter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (nonatomic, readonly) NSMutableArray *stateRequests;

- (void).cxx_destruct;
- (void)acknowledgeOutgoingRequestWithMessageIdentifier:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addStateRequest:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)delegateToQueue;
- (void)handleCTMessageCenterNotification:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithMessageCenter:(id)arg1 context:(id)arg2;
- (id)messageCenter;
- (void)performSynchronousBlock:(id /* block */)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeStateRequest:(id)arg1;
- (void)sendStateRequest:(id)arg1;
- (id)serialDispatchQueue;
- (id)stateRequestForIdentifier:(long long)arg1;
- (id)stateRequests;

@end
