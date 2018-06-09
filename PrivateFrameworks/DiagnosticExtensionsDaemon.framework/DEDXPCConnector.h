/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDXPCConnector : NSObject <NSXPCListenerDelegate> {
    unsigned long long  _connType;
    NSXPCConnection * _connection;
    DEDXPCInbound * _inbound;
    bool  _isDaemon;
    NSXPCListener * _listener;
    NSObject<OS_os_log> * _log;
    bool  _started;
}

@property unsigned long long connType;
@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) DEDXPCInbound *inbound;
@property bool isDaemon;
@property (retain) NSXPCListener *listener;
@property (retain) NSObject<OS_os_log> *log;
@property bool started;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_whitelistedXPCInterface;
- (void)configureConnectionType:(unsigned long long)arg1;
- (void)configureDaemonMode;
- (void)configureXPCInbound:(id)arg1;
- (unsigned long long)connType;
- (id)connection;
- (id)connectionWithEndpoint:(id)arg1 forMachService:(id)arg2;
- (id)inbound;
- (id)init;
- (bool)isDaemon;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)log;
- (void)setConnType:(unsigned long long)arg1;
- (void)setConnection:(id)arg1;
- (void)setInbound:(id)arg1;
- (void)setIsDaemon:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)start;
- (void)startForApp;
- (void)startForDaemon;
- (bool)started;
- (bool)validateConnection:(id)arg1;

@end
