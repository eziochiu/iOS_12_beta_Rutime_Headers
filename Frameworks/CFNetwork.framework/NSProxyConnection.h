/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSProxyConnection : NSObject {
    NSObject<OS_tcp_connection> * _connection;
    <NSProxyConnectionDelegate> * _delegate;
    bool  _doCleanupWhenWritesCompleted;
    long long  _pendingWrites;
}

@property (retain) NSObject<OS_tcp_connection> *connection;
@property <NSProxyConnectionDelegate> *delegate;
@property bool doCleanupWhenWritesCompleted;
@property long long pendingWrites;

- (void).cxx_destruct;
- (void)cancel;
- (id)connection;
- (void)dealloc;
- (id)delegate;
- (bool)doCleanupWhenWritesCompleted;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (id)initWithTCPConnection:(id)arg1;
- (long long)pendingWrites;
- (void)read:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoCleanupWhenWritesCompleted:(bool)arg1;
- (void)setPendingWrites:(long long)arg1;
- (void)write:(id)arg1 handler:(id /* block */)arg2;

@end
