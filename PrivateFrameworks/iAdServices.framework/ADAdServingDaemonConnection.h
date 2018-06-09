/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADAdServingDaemonConnection : NSObject {
    NSXPCConnection * _adServingDaemonConnection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <ADAdServingDaemonConnectionDelegate> * _delegate;
    NSMutableArray * _performWhenConnectedBlocks;
}

@property (nonatomic, retain) NSXPCConnection *adServingDaemonConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (nonatomic) <ADAdServingDaemonConnectionDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *performWhenConnectedBlocks;

- (void)_considerConnectingToAdServingDaemon;
- (id)adServingDaemonConnection;
- (id)connectionQueue;
- (void)considerConnectingToAdServingDaemon;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (void)performWhenConnected:(id /* block */)arg1;
- (id)performWhenConnectedBlocks;
- (id)rpcProxy;
- (id)rpcProxyWithErrorHandler:(id /* block */)arg1;
- (void)setAdServingDaemonConnection:(id)arg1;
- (void)setConnectionQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPerformWhenConnectedBlocks:(id)arg1;

@end
