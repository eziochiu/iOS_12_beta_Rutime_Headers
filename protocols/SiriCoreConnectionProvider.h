/* made by EzioChiu.
 */

@protocol SiriCoreConnectionProvider <NSObject>

@required

+ (void)getMetricsContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

- (SiriCoreAceConnectionAnalysisInfo *)analysisInfo;
- (void)close;
- (SiriCoreConnectionType *)connectionType;
- (bool)hasActiveConnection;
- (NSObject<OS_dispatch_data> *)headerDataWithForceReconnect:(bool)arg1;
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (bool)isCanceled;
- (bool)isEstablishing;
- (bool)isMultipath;
- (bool)isPeerConnectionError:(NSError *)arg1;
- (bool)isPeerNotNearbyError:(NSError *)arg1;
- (bool)isReady;
- (void)openConnectionForURL:(void *)arg1 withConnectionId:(void *)arg2 initialPayload:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: NSURL *, NSString *, NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)providerStatsIndicatePoorLinkQuality;
- (void)readData:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<OS_dispatch_data> *, NSError *, void*
- (NSString *)resolvedHost;
- (void)setConnectByPOPMethod:(bool)arg1;
- (void)setDelegate:(id <SiriCoreConnectionProviderDelegate>)arg1;
- (void)setEnforceExtendedValidation:(bool)arg1;
- (void)setPolicyRoute:(SAConnectionPolicyRoute *)arg1;
- (void)setPrefersWWAN:(bool)arg1;
- (void)setProviderConnectionPolicy:(SAConnectionPolicy *)arg1;
- (void)setScopeIsWiFiOnly;
- (bool)shouldFallbackFromError:(NSError *)arg1;
- (bool)shouldFallbackQuickly;
- (bool)supportsInitialPayload;
- (void)updateConnectionMetrics:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SiriCoreConnectionMetrics *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)writeData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSObject<OS_dispatch_data> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
