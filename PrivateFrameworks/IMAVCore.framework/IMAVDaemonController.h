/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@interface IMAVDaemonController : NSObject {
    bool  _acquiringDaemonConnection;
    NSLock * _connectionLock;
    IMAVDaemonListener * _daemonListener;
    bool  _hasCheckedForDaemon;
    NSString * _listenerID;
    NSObject<OS_dispatch_queue> * _listenerLockQueue;
    NSMutableArray * _listeners;
    IMLocalObject * _localObject;
    NSObject<OS_dispatch_queue> * _localObjectLockQueue;
    NSObject<OS_dispatch_queue> * _remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> * _remoteMessageQueue;
    IMRemoteObject<IMAVDaemonProtocol> * _remoteObject;
    struct __CFRunLoopSource { } * _runLoopSource;
}

@property (nonatomic, readonly) IMAVDaemonListener *listener;

+ (id)sharedInstance;

- (bool)__isLocalObjectValidOnQueue:(id)arg1;
- (bool)__isRemoteObjectValidOnQueue:(id)arg1;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (void)_disconnectFromDaemon;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (void)_localObjectDiedNotification:(id)arg1;
- (bool)_makeConnectionWithCompletionBlock:(id /* block */)arg1;
- (void)_noteSetupComplete;
- (void)_remoteObjectCleanup;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (bool)addListenerID:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (bool)hasListenerForID:(id)arg1;
- (id)init;
- (bool)isConnected;
- (bool)isConnecting;
- (id)listener;
- (void)localObjectDiedNotification:(id)arg1;
- (bool)localObjectExists;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (bool)remoteObjectExists;
- (bool)removeListenerID:(id)arg1;

@end
