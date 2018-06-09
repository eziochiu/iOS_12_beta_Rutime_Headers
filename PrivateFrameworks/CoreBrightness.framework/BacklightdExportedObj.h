/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {
    unsigned long long  _clientID;
    bool  _clientIDSet;
    NSXPCConnection * _connection;
    BrightnessSystemInternal * _server;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BrightnessSystemInternal *server;
@property (readonly) Class superclass;

- (void)clientCopyPropertyWithKey:(id)arg1 reply:(id /* block */)arg2;
- (void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2;
- (id)connection;
- (id)copyClientID;
- (void)dealloc;
- (void)reconnect;
- (void)registerNotificationForProperties:(id)arg1;
- (id)server;
- (void)setConnection:(id)arg1;
- (void)setServer:(id)arg1;

@end
