/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPushTokenFetcher : NSObject <APSConnectionDelegate> {
    NSMutableArray * _completionHandlers;
    NSObject<OS_dispatch_queue> * _internalQueue;
    APSConnection * _pushConnection;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)_invokeCompletionWithPushToken:(id)arg1;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)fetchPushTokenWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
