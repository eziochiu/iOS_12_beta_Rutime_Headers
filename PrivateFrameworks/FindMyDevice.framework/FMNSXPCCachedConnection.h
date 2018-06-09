/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMNSXPCCachedConnection : NSObject <FMNSXPCConnecting> {
    FMNSXPCConnection * _connection;
    id /* block */  _didInvalidate;
    id /* block */  _failureBlock;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (nonatomic, retain) FMNSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didInvalidate;
@property (nonatomic, copy) id /* block */ failureBlock;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)addFailureBlock:(id /* block */)arg1;
- (id)connection;
- (id /* block */)didInvalidate;
- (id /* block */)failureBlock;
- (id)initWithFMNSXPCConnection:(id)arg1;
- (void)invalidate;
- (id)remoteObjectProxy;
- (id)serialQueue;
- (void)setConnection:(id)arg1;
- (void)setDidInvalidate:(id /* block */)arg1;
- (void)setFailureBlock:(id /* block */)arg1;
- (void)setSerialQueue:(id)arg1;

@end
