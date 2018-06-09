/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDClientContext : NSObject <_CDUserContext, _CDUserContextServerMonitoring> {
    NSXPCListenerEndpoint * _endpoint;
    bool  _interrupted;
    NSMutableDictionary * _keyPathToValues;
    NSCountedSet * _keyPathsWithRegistrationsForAnyChange;
    NSObject<OS_os_log> * _log;
    NSMutableDictionary * _openRegistrationTokens;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _registrationCallbackQueue;
    NSMutableDictionary * _registrations;
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSXPCListenerEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool interrupted;
@property (nonatomic, retain) NSMutableDictionary *keyPathToValues;
@property (nonatomic, retain) NSCountedSet *keyPathsWithRegistrationsForAnyChange;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSMutableDictionary *openRegistrationTokens;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *registrationCallbackQueue;
@property (nonatomic, retain) NSMutableDictionary *registrations;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *xpcQueue;

+ (id)clientInterface;
+ (id)serverInterface;
+ (id)userContext;

- (void).cxx_destruct;
- (void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;
- (bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (id)cachedValueIfClientHasRegistrationsForKeyPath:(id)arg1;
- (void)cleanupInternalReferencesToRegistration:(id)arg1;
- (void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg1;
- (id)currentConnection;
- (void)dealloc;
- (void)deregisterCallback:(id)arg1;
- (id)endpoint;
- (bool)evaluatePredicate:(id)arg1;
- (void)handleContextualChange:(id)arg1 handler:(id /* block */)arg2;
- (void)handleRegistrationCompleted:(id)arg1 handler:(id /* block */)arg2;
- (bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)initWithEndpoint:(id)arg1;
- (bool)interrupted;
- (id)keyPathToValues;
- (id)keyPathsWithRegistrationsForAnyChange;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (id)localContext;
- (id)log;
- (id)objectForContextualKeyPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)openRegistrationTokens;
- (id)queue;
- (void)registerCallback:(id)arg1;
- (id)registrationCallbackQueue;
- (id)registrations;
- (void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;
- (bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (void)retryTimes:(int)arg1 block:(id /* block */)arg2;
- (void)setCachedValueIfClientHasRegistrations:(id)arg1 forKeyPath:(id)arg2;
- (void)setEndpoint:(id)arg1;
- (void)setInterrupted:(bool)arg1;
- (void)setKeyPathToValues:(id)arg1;
- (void)setKeyPathsWithRegistrationsForAnyChange:(id)arg1;
- (void)setLog:(id)arg1;
- (bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setOpenRegistrationTokens:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegistrationCallbackQueue:(id)arg1;
- (void)setRegistrations:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcQueue:(id)arg1;
- (void)unprotectedSetUpXPCConnectionWithEndpoint:(id)arg1;
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;
- (id)xpcConnection;
- (id)xpcQueue;

@end
