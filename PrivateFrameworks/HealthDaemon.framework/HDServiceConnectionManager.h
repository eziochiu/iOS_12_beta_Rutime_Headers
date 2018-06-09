/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver> {
    bool  _BTLEEnabled;
    NSMutableDictionary * _activeServices;
    bool  _connecting;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    HDProfile * _profile;
    HDHealthServiceManager * _serviceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_transactionName:(id)arg1;

- (void).cxx_destruct;
- (void)_connectToService:(id)arg1;
- (void)_connectToServices;
- (void)_disconnectFromService:(id)arg1;
- (void)_disconnectFromServices;
- (void)_handleBluetoothUpdates:(long long)arg1;
- (void)_subscribeBluetoothStateUpdates;
- (void)connectToService:(id)arg1;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)disconnectFromService:(id)arg1;
- (void)disconnectFromServices;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)reconnectToServices;

@end
