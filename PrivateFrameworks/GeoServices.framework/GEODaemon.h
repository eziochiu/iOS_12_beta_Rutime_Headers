/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEODaemon : NSObject {
    NSObject<OS_xpc_object> * _listener;
    NSMutableSet * _peers;
    NSMutableSet * _servers;
    NSObject<OS_dispatch_source> * _sigInfoSrc;
}

@property (nonatomic, readonly) NSSet *peers;

- (void).cxx_destruct;
- (id)_createListenerWithQueue:(id)arg1 onPort:(const char *)arg2;
- (id)_createPeerForConnection:(id)arg1;
- (void)_handleNewConnection:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)addServerClass:(Class)arg1;
- (void)addServerInstance:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (id)init;
- (id)initWithPort:(const char *)arg1;
- (void)peerDidConnect:(id)arg1;
- (void)peerDidDisconnect:(id)arg1;
- (id)peers;

@end
