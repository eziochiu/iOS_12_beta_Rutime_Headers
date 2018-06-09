/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKAsyncSocketInternal : GKAsyncSocket {
    id /* block */  _connectedHandler;
    int  _connectionSocket;
    NSMutableData * _dataToSend;
    bool  _invalidated;
    id /* block */  _receiveDataHandler;
    NSObject<OS_dispatch_source> * _receiveSource;
    NSObject<OS_dispatch_source> * _sendSource;
    bool  _sendSourceSuspended;
    NSString * _socketName;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_dispatch_queue> * _targetQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *targetQueue;

- (void)closeConnectionNow;
- (id /* block */)connectedHandler;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)receiveData;
- (id /* block */)receiveDataHandler;
- (void)sendData;
- (void)sendData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setConnectedHandler:(id /* block */)arg1;
- (void)setReceiveDataHandler:(id /* block */)arg1;
- (void)setSocketName:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (bool)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(id /* block */)arg2 sendEventHandler:(id /* block */)arg3;
- (id)socketName;
- (id)targetQueue;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (void)tcpConnectSockAddr:(const struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 port:(unsigned short)arg2;

@end
