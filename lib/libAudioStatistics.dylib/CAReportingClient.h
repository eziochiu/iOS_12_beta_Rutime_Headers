/* made by EzioChiu
   Image: /usr/lib/libAudioStatistics.dylib
 */

@interface CAReportingClient : NSObject <NSXPCListenerDelegate> {
    NSMutableDictionary * _clientReporters;
    NSXPCConnection * _connection;
    <CAReportingServerInterface> * _serverDelegateAsync;
    <CAReportingServerInterface> * _serverDelegateSync;
}

@property (retain) NSMutableDictionary *clientReporters;
@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <CAReportingServerInterface> *serverDelegateAsync;
@property (retain) <CAReportingServerInterface> *serverDelegateSync;
@property (readonly) Class superclass;

+ (id)getClient;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addReporter:(id)arg1;
- (id)clientReporters;
- (id)connection;
- (long long)createReporterID;
- (void)destroyClient;
- (void)destroyReporterWithID:(long long)arg1;
- (unsigned short)getServiceTypeForReporterID:(long long)arg1;
- (id)init;
- (id)listClientReporterIDs;
- (id)listServerReporterIDs;
- (id)reporterWithID:(long long)arg1;
- (void)sendMessage:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 reporters:(id)arg4;
- (id)serverDelegateAsync;
- (id)serverDelegateSync;
- (void)setClientReporters:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setServerDelegateAsync:(id)arg1;
- (void)setServerDelegateSync:(id)arg1;
- (void)setServiceType:(unsigned short)arg1 reporterID:(long long)arg2;
- (void)startReporters:(id)arg1;
- (void)stopReporters:(id)arg1;

@end
