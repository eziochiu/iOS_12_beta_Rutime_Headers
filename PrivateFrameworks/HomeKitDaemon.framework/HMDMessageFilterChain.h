/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDMessageFilterChain : HMFObject {
    NSMutableArray * _messageFilters;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSArray *filters;
@property (nonatomic, retain) NSMutableArray *messageFilters;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)addMessageFilter:(id)arg1;
- (void)executeChainForMessage:(id)arg1 queue:(id)arg2 target:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)filters;
- (id)init;
- (id)messageFilters;
- (void)removeMessageFilter:(id)arg1;
- (void)resetConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setMessageFilters:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (bool)shouldCloudSyncData;
- (id)workQueue;

@end
