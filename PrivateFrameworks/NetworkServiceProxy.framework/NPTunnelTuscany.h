/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelTuscany : NPTunnel {
    NSObject<OS_nw_connection> * _UDPSession;
    void * _clientRef;
    void * _connectionTimer;
    NSUUID * _dayPassUUID;
    bool  _ignoreWaldoTimestamp;
    bool  _isFirstTunnel;
    unsigned long long  _nextFlowID;
    NPTuscanyOnRamp * _onRamp;
    id /* block */  _pendingPingCompletionHandler;
    void * _pingTimer;
    bool  _shouldReportUsage;
    void * _usageReportTimer;
}

@property (retain) NSObject<OS_nw_connection> *UDPSession;
@property void*clientRef;
@property void*connectionTimer;
@property (readonly) long long currentMTU;
@property (readonly) unsigned int dayPassSessionCounter;
@property (readonly) NSUUID *dayPassUUID;
@property bool ignoreWaldoTimestamp;
@property bool isFirstTunnel;
@property (readonly) unsigned long long maxFrameSize;
@property unsigned long long nextFlowID;
@property (retain) NPTuscanyOnRamp *onRamp;
@property (copy) id /* block */ pendingPingCompletionHandler;
@property void*pingTimer;
@property bool shouldReportUsage;
@property void*usageReportTimer;

- (void).cxx_destruct;
- (id)UDPSession;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (unsigned long long)allocateFlowID;
- (bool)canHandleMoreData;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)checkForStaleWaldo:(unsigned int)arg1;
- (void*)clientRef;
- (void)closeFlow:(id)arg1;
- (void*)connectionTimer;
- (id)createConnectionInfo;
- (void)createTuscanyClient;
- (long long)currentMTU;
- (unsigned int)dayPassSessionCounter;
- (id)dayPassUUID;
- (void)dealloc;
- (void)destroyConnection;
- (bool)flowIsFirstFlow:(id)arg1;
- (void)handleConnected;
- (void)handleConnectionError;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)handleDisconnected;
- (void)handleEOF;
- (void)handleFallbackForFlow:(id)arg1;
- (void)handleFlowUsedTunnel;
- (void)handleHelloAck:(unsigned int)arg1;
- (void)handleInputAvailable;
- (void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2;
- (void)handleReadData:(struct nw_frame_array_s { struct nw_frame {} *x1; struct nw_frame {} **x2; }*)arg1;
- (bool)ignoreWaldoTimestamp;
- (id)initWithConfiguration:(id)arg1 endpoint:(id)arg2 parameters:(id)arg3 appRule:(id)arg4 flowProperties:(id)arg5 delegate:(id)arg6;
- (unsigned long long)initialWindowSize;
- (bool)isFirstTunnel;
- (bool)isTFOProbeSucceeded;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (unsigned long long)maxFrameSize;
- (unsigned long long)nextFlowID;
- (id)onRamp;
- (id /* block */)pendingPingCompletionHandler;
- (void*)pingTimer;
- (void)pingWithCompletionHandler:(id /* block */)arg1;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)sendDataOnUDPSession:(id)arg1;
- (void)sendUsageReportWithSuccess:(bool)arg1 rtt:(unsigned long long)arg2 geohash:(id)arg3 fallbackReason:(long long)arg4;
- (void)setClientRef:(void*)arg1;
- (void)setConnectionTimer:(void*)arg1;
- (void)setIgnoreWaldoTimestamp:(bool)arg1;
- (void)setIsFirstTunnel:(bool)arg1;
- (void)setNextFlowID:(unsigned long long)arg1;
- (void)setOnRamp:(id)arg1;
- (void)setPendingPingCompletionHandler:(id /* block */)arg1;
- (void)setPingTimer:(void*)arg1;
- (void)setShouldReportUsage:(bool)arg1;
- (void)setUDPSession:(id)arg1;
- (void)setUsageReportTimer:(void*)arg1;
- (bool)shouldReportUsage;
- (bool)start;
- (void)startConnectionTimer;
- (double)timeIntervalSinceLastUsage;
- (void*)usageReportTimer;
- (void)writeInitialData;

@end