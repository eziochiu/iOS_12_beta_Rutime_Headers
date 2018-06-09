/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
 */

@interface ROCKConnectionManager : NSObject {
    id /* block */  _connectionManagerHandler;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSMapTable * _managedConnections;
    NSObject<OS_dispatch_queue> * _managedConnectionsQueue;
    NSMapTable * _managedRemoteConnections;
    NSObject<OS_dispatch_queue> * _managedRemoteConnectionsQueue;
    NSMutableDictionary * _managedServiceUUIDs;
    unsigned long long  _messageQueueInvocationMode;
    unsigned long long  _nextAvailableManagedConnectionIndex;
}

@property (nonatomic, copy) id /* block */ connectionManagerHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *handlerQueue;
@property (nonatomic, retain) NSMapTable *managedConnections;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *managedConnectionsQueue;
@property (nonatomic, retain) NSMapTable *managedRemoteConnections;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *managedRemoteConnectionsQueue;
@property (nonatomic, retain) NSMutableDictionary *managedServiceUUIDs;
@property (nonatomic) unsigned long long messageQueueInvocationMode;
@property (nonatomic) unsigned long long nextAvailableManagedConnectionIndex;

+ (id)connectionManagerWithHandlerQueue:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)connectionManagerHandler;
- (void)dealloc;
- (id)handlerQueue;
- (id)initWithHandlerQueue:(id)arg1 handler:(id /* block */)arg2;
- (id)managedConnections;
- (id)managedConnectionsQueue;
- (id)managedRemoteConnections;
- (id)managedRemoteConnectionsQueue;
- (id)managedServiceUUIDs;
- (unsigned long long)messageQueueInvocationMode;
- (unsigned long long)nextAvailableManagedConnectionIndex;
- (void)setConnectionManagerHandler:(id /* block */)arg1;
- (void)setHandlerQueue:(id)arg1;
- (void)setManagedConnections:(id)arg1;
- (void)setManagedConnectionsQueue:(id)arg1;
- (void)setManagedRemoteConnections:(id)arg1;
- (void)setManagedRemoteConnectionsQueue:(id)arg1;
- (void)setManagedServiceUUIDs:(id)arg1;
- (void)setMessageQueueInvocationMode:(unsigned long long)arg1;
- (void)setNextAvailableManagedConnectionIndex:(unsigned long long)arg1;

@end
