/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteUpdater : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _updateBlock;
    unsigned long long  _updateState;
}

- (void).cxx_destruct;
- (void)executeUpdateBlock;
- (id)initWithQueue:(id)arg1 updateBlock:(id /* block */)arg2;

@end
