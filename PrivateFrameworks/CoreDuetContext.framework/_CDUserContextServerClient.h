/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDUserContextServerClient : NSObject <_CDUserContextServer> {
    NSObject<OS_dispatch_queue> * _activateMonitorQueue;
    NSXPCConnection * _clientConnection;
    NSMutableSet * _nonWakingRegistration;
    NSObject<OS_dispatch_queue> * _queue;
    _CDUserContextService * _service;
    _CDInMemoryUserContext * _userContext;
    NSMutableSet * _wakingRegistrations;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *activateMonitorQueue;
@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableSet *nonWakingRegistration;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) _CDUserContextService *service;
@property (readonly) Class superclass;
@property (nonatomic, retain) _CDInMemoryUserContext *userContext;
@property (nonatomic, retain) NSMutableSet *wakingRegistrations;

+ (id)clientOfService:(id)arg1 withConnection:(id)arg2 andContext:(id)arg3;

- (void).cxx_destruct;
- (id)activateMonitorQueue;
- (void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 forArrayAtPath:(id)arg3 handler:(id /* block */)arg4;
- (void)addObjects:(id)arg1 toArrayAtPath:(id)arg2 handler:(id /* block */)arg3;
- (id)clientConnection;
- (void)dealloc;
- (void)deregisterAllCallbacks:(bool)arg1;
- (void)deregisterCallback:(id)arg1;
- (void)evaluatePredicate:(id)arg1 handler:(id /* block */)arg2;
- (void)handlePreviouslyFiredRegistration:(id)arg1;
- (void)hasKnowledgeOfPath:(id)arg1 handler:(id /* block */)arg2;
- (id)initForService:(id)arg1 withConnection:(id)arg2 andContext:(id)arg3;
- (id)nonWakingRegistration;
- (void)propertiesOfPath:(id)arg1 handler:(id /* block */)arg2;
- (id)queue;
- (void)registerCallback:(id)arg1;
- (void)removeObjects:(id)arg1 fromArrayAtPath:(id)arg2 handler:(id /* block */)arg3;
- (id)service;
- (void)setActivateMonitorQueue:(id)arg1;
- (void)setClientConnection:(id)arg1;
- (void)setNonWakingRegistration:(id)arg1;
- (void)setObject:(id)arg1 forPath:(id)arg2 handler:(id /* block */)arg3;
- (void)setQueue:(id)arg1;
- (void)setService:(id)arg1;
- (void)setUserContext:(id)arg1;
- (void)setWakingRegistrations:(id)arg1;
- (id)userContext;
- (void)valuesForPaths:(id)arg1 inContextsMatching:(id)arg2 handler:(id /* block */)arg3;
- (id)wakingRegistrations;

@end
