/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLServiceListener : NSObject <NSXPCListenerDelegate> {
    NSArray * _allowedEntitlements;
    NSXPCInterface * _clientInterface;
    NSXPCListener * _listener;
    NSString * _managedObjectModelPath;
    NSString * _persistentStoreName;
    NSString * _serviceName;
    Protocol * _serviceProtocol;
    Class  _sessionClass;
}

@property (retain) NSXPCInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *managedObjectModelPath;
@property (retain) NSString *persistentStoreName;
@property (retain) NSString *serviceName;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_verifyAuthorizationForConnection:(id)arg1;
- (void)beginAcceptingConnections;
- (id)clientInterface;
- (id)initWithExportedSessionClass:(Class)arg1 serviceProtocol:(id)arg2;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)managedObjectModelPath;
- (id)persistentStoreName;
- (void)restrictToClientsWithEntitlements:(id)arg1;
- (id)serviceName;
- (void)setClientInterface:(id)arg1;
- (void)setManagedObjectModelPath:(id)arg1;
- (void)setPersistentStoreName:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
