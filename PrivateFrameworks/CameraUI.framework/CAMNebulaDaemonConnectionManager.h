/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMNebulaDaemonConnectionManager : NSObject <CAMNebulaDaemonBundleIdentifierProtocol, CAMNebulaDaemonClientProtocol, NSXPCConnectionDelegate> {
    NSXPCConnection * __connection;
    NSString * __name;
    NSObject<OS_dispatch_queue> * __queue;
    NSMutableArray * __registeredProtocols;
    NSMutableArray * __registeredTargets;
    NSMutableDictionary * __tasksPerIdentifier;
    Protocol * _allowedProtocol;
    NSString * _bundleIdentifier;
    NSString * _clientAccess;
    <CAMNebulaDaemonConnectionManagerDelegate> * _delegate;
}

@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (nonatomic, readonly, copy) NSString *_name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) NSMutableArray *_registeredProtocols;
@property (nonatomic, readonly) NSMutableArray *_registeredTargets;
@property (nonatomic, readonly) NSMutableDictionary *_tasksPerIdentifier;
@property (nonatomic, readonly, copy) Protocol *allowedProtocol;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clientAccess;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMNebulaDaemonConnectionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;

- (void).cxx_destruct;
- (id)_connection;
- (void)_getProxyForExecutingBlock:(id /* block */)arg1;
- (id)_name;
- (id)_queue;
- (id)_registeredProtocols;
- (id)_registeredTargets;
- (id)_targetsForSelector:(SEL)arg1;
- (id)_tasksPerIdentifier;
- (void)addTarget:(id)arg1 forProtocol:(id)arg2;
- (id)allowedProtocol;
- (id)bundleIdentifier;
- (id)clientAccess;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)delegate;
- (id)description;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (id)initWithConnection:(id)arg1 name:(id)arg2 bundleIdentifier:(id)arg3 queue:(id)arg4 clientAccess:(id)arg5 allowedProtocol:(id)arg6;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (void)pingAfterInterruption;
- (void)setDelegate:(id)arg1;

@end
