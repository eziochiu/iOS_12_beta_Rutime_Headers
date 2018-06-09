/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGDaemonConnection : NSObject {
    NSMutableArray * _abortBlocks;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _abortLock;
    NSObject<OS_dispatch_queue> * _connectLock;
    NSString * _machServiceName;
    NSXPCConnection * _xpcConnection;
    NSXPCInterface * _xpcInterface;
}

- (void).cxx_destruct;
- (void)_callAbortBlocks;
- (void)_connectToServer;
- (void)addConnectionInterruptedHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)disconnect;
- (id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2;
- (id)waitUntilReturn:(id /* block */)arg1 error:(id*)arg2;
- (id)xpcConnection;

@end
