/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUTCPServer : NSObject {
    id /* block */  _connectionEndedHandler;
    id /* block */  _connectionPrepareHandler;
    id /* block */  _connectionStartedHandler;
    struct NSMutableSet { Class x1; } * _connections;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    unsigned int  _flags;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSObject<OS_dispatch_source> * _listenerSourceV4;
    NSObject<OS_dispatch_source> * _listenerSourceV6;
    unsigned int  _maxConnectionCount;
    CUNetLinkManager * _netLinkManager;
    int  _tcpListenPort;
    int  _tcpListeningPort;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
}

@property (nonatomic, copy) id /* block */ connectionEndedHandler;
@property (nonatomic, copy) id /* block */ connectionPrepareHandler;
@property (nonatomic, copy) id /* block */ connectionStartedHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) unsigned int maxConnectionCount;
@property (nonatomic, retain) CUNetLinkManager *netLinkManager;
@property (nonatomic) int tcpListenPort;
@property (nonatomic) int tcpListeningPort;

- (void).cxx_destruct;
- (void)_handleConnectionAccept:(int)arg1;
- (void)_handleConnectionInvalidated:(id)arg1 addr:(const union { struct sockaddr { unsigned char x_1_1_1; unsigned char x_1_1_2; BOOL x_1_1_3[14]; } x1; struct sockaddr_in { unsigned char x_2_1_1; unsigned char x_2_1_2; unsigned short x_2_1_3; struct in_addr { unsigned int x_4_2_1; } x_2_1_4; BOOL x_2_1_5[8]; } x2; struct sockaddr_in6 { unsigned char x_3_1_1; unsigned char x_3_1_2; unsigned short x_3_1_3; unsigned int x_3_1_4; struct in6_addr { union { unsigned char x_1_3_1[16]; unsigned short x_1_3_2[8]; unsigned int x_1_3_3[4]; } x_5_2_1; } x_3_1_5; unsigned int x_3_1_6; } x3; }*)arg2;
- (void)_invalidated;
- (bool)activateDirectAndReturnError:(id*)arg1;
- (void)activateWithCompletion:(id /* block */)arg1;
- (id /* block */)connectionEndedHandler;
- (id /* block */)connectionPrepareHandler;
- (id /* block */)connectionStartedHandler;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)dispatchQueue;
- (unsigned int)flags;
- (id)init;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)label;
- (unsigned int)maxConnectionCount;
- (id)netLinkManager;
- (void)setConnectionEndedHandler:(id /* block */)arg1;
- (void)setConnectionPrepareHandler:(id /* block */)arg1;
- (void)setConnectionStartedHandler:(id /* block */)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)setMaxConnectionCount:(unsigned int)arg1;
- (void)setNetLinkManager:(id)arg1;
- (void)setTcpListenPort:(int)arg1;
- (void)setTcpListeningPort:(int)arg1;
- (int)tcpListenPort;
- (int)tcpListeningPort;

@end
