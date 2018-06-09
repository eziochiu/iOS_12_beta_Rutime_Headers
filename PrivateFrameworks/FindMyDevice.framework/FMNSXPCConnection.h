/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting> {
    bool  __testMockConnection;
    NSXPCConnection * _connection;
    FMFuture * _future;
}

@property (nonatomic) bool _testMockConnection;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FMFuture *future;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_testMockConnection;
- (void)addFailureBlock:(id /* block */)arg1;
- (id)connection;
- (void)dealloc;
- (void)destroyXPCConnection;
- (id)future;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2;
- (void)invalidate;
- (id)remoteObjectProxy;
- (void)setConnection:(id)arg1;
- (void)setFuture:(id)arg1;
- (void)set_testMockConnection:(bool)arg1;
- (long long)state;

@end
