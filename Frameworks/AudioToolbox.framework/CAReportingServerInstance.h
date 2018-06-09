/* made by EzioChiu
   Image: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
 */

@interface CAReportingServerInstance : NSObject <CAReportingServerInterface> {
    int  _clientID;
    NSMutableDictionary * _clientReportingSessionMap;
    CAReportingServer * _master;
}

@property int clientID;
@property (retain) NSMutableDictionary *clientReportingSessionMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CAReportingServer *master;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)clientID;
- (id)clientReportingSessionMap;
- (void)createReportingSession:(long long)arg1;
- (void)destroyReportingSession:(long long)arg1;
- (void)getAllReporters:(id /* block */)arg1;
- (void)getServiceNameForReporterID:(long long)arg1 reply:(id /* block */)arg2;
- (void)handleConnectionError;
- (id)initWithMasterAndID:(id)arg1 clientID:(int)arg2 outError:(id*)arg3;
- (id)master;
- (void)postAWDMetric:(unsigned int)arg1 withData:(id)arg2;
- (void)postSimpleAWDMetric:(unsigned int)arg1;
- (void)reporterID:(long long)arg1 valid:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 withCategory:(unsigned short)arg2 andType:(unsigned short)arg3 forReportingIDs:(id)arg4 reply:(id /* block */)arg5;
- (void)setClientID:(int)arg1;
- (void)setClientReportingSessionMap:(id)arg1;
- (void)setMaster:(id)arg1;
- (void)setServiceType:(unsigned short)arg1 reportingSession:(long long)arg2;
- (void)startReportingSessionForID:(long long)arg1;
- (void)stopReportingSessionForID:(long long)arg1;

@end
